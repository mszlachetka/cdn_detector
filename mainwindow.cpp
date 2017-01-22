#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{


    delete ui;
}
#include <QDebug>
void MainWindow::on_buttonCheck_clicked()
{

     dns = new QDnsLookup(this);
     connect(dns, SIGNAL(finished()),this, SLOT(getDNS()));
     dns->setType(QDnsLookup::ANY);
     dns->setName(ui->lineEditHost->text());
     QHostAddress name;
     name.setAddress(ui->tableWidget->item(current_row,0)->text());
     dns->setNameserver(name);
     dns->lookup();
     ++current_row;

}


 /*if (!(addressPL.mid(0,3) == addressUSA.mid(0,3)))
    {
        this->isCDNbyAddress = true;
    }

    if(this->isCDNbyAddress || this->isCDNbyProvider)
    {
        ui->labelCDN->setStyleSheet("QLabel { background-color : green; }");
    }
    else
    {
         ui->labelCDN->setStyleSheet("QLabel { background-color : red; }");
    }*/




void MainWindow::getDNS()
{
          //Check the lookup succeeded.
           if (dns->error() != QDnsLookup::NoError) {
               const char * error = dns->errorString().toStdString().c_str();
               qWarning(error);
               ++current_read_query;
               if(current_read_query == ui->tableWidget->rowCount()) current_read_query = 0;
               return;
           }

           if(dns->hostAddressRecords().size() != 0)
           {
              const QDnsHostAddressRecord &record = dns->hostAddressRecords().last();

             ui->tableWidget->item(current_read_query,3)->setText(record.value().toString());

           }

    // NS records
    foreach (const QDnsDomainNameRecord &record, dns->nameServerRecords())
    {
        if(record.value().contains("cloudflare")
           ||record.value().contains("google")
           ||record.value().contains("akam")
                )
        {
        ui->tableWidget->item(current_read_query,2)->setText(record.value());
        isCDNbyProvider = true;
        }
        else
        {
         ui->tableWidget->item(current_read_query,2)->setText("other : "+record.value());
                    isCDNbyProvider = false;
        }
    }

    if(dns->nameServerRecords().size() == 0)
    {

       ui->tableWidget->item(current_read_query,2)->setText("not found");
    }

    if(dns->hostAddressRecords().size() == 0)
    {
     ui->tableWidget->item(current_read_query,3)->setText("not found");
    }


    ++current_read_query;
    if(current_read_query == ui->tableWidget->rowCount())
    {
        current_read_query = 0;
        current_row = 0;

        if(isCDNbyProvider)
        {
            ui->labelCDN->setStyleSheet("QLabel { background-color : green; }");
        }
        else
        {
        bool cdnFound = false;
        for(int i = 0;i<ui->tableWidget->rowCount();i++)
            for(int j=i+1;j<ui->tableWidget->rowCount();j++)
            {
             if(ui->tableWidget->item(i,3)->text() == "not found"
              || ui->tableWidget->item(j,3)->text() == "not found"
             ||ui->tableWidget->item(i,2)->text() == "not found"
                     || ui->tableWidget->item(j,2)->text() == "not found")
             {
                 continue;
             }
                if(ui->tableWidget->item(i,3)->text()!=ui->tableWidget->item(j,3)->text())
                {
                    ui->labelCDN->setStyleSheet("QLabel { background-color : green; }");
                    break;
                    cdnFound = true;
                }
                else
                {
                    ui->labelCDN->setStyleSheet("QLabel { background-color : red; }");
                }

                if(cdnFound) break;
            }
        }
        isCDNbyProvider = false;

    }
    else
    {
        ui->buttonCheck->click();
    }




}
