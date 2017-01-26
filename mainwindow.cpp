#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->labelNaIle->setText("Progress: "+QString::number(howProgress)+"/"+QString::number(howManyAll));
    ui->labelProcentowo->setText("CDN found in "+QString::number(howManyCDN/howManyAll)+"%");

}

MainWindow::~MainWindow()
{


    delete ui;
}

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






void MainWindow::getDNS()
{
          //Check the lookup succeeded.
           if (dns->error() != QDnsLookup::NoError) {
               const char * error = dns->errorString().toStdString().c_str();
               qWarning(error);
           }

           if(dns->hostAddressRecords().size() != 0)
           {
              const QDnsHostAddressRecord &record = dns->hostAddressRecords().last();

             ui->tableWidget->item(current_read_query,3)->setText(record.value().toString());
             this->something_was_found = true;

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

    foreach (const QDnsDomainNameRecord &record, dns->canonicalNameRecords())
    {
        qDebug()<<"byl cname!! "+record.value();
    }

    if(dns->hostAddressRecords().size() == 0)
    {
     ui->tableWidget->item(current_read_query,3)->setText("not found");
    }


    ++current_read_query;
            bool cdnFound = false;
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
        for(int i = 0;i<ui->tableWidget->rowCount();i++)
        {
            for(int j=i+1;j<ui->tableWidget->rowCount();j++)
            {
             if(ui->tableWidget->item(i,3)->text() == "not found"
              || ui->tableWidget->item(j,3)->text() == "not found")
             {
                 continue;
             }
             if( ui->tableWidget->item(i,3)->text().left(6)!=ui->tableWidget->item(j,3)->text().left(6))
             {
                    cdnFound = true;
                    break;
                }
                else
                {
                }

            }
                        if(cdnFound) break;
        }
        }
        if(!cdnFound && !isCDNbyProvider && this->something_was_found)
        {
               ui->labelCDN->setStyleSheet("QLabel { background-color : red; }");
                           this->something_was_found = false;
        }
        else if(this->something_was_found)
        {
                 ui->labelCDN->setStyleSheet("QLabel { background-color :green; }");
                             this->something_was_found = false;
        }
        else
         {
            ui->labelCDN->setStyleSheet("QLabel { background-color :orange; }");
            this->howManyAll--;
        }
        isCDNbyProvider = false;

    }
    else
    {
        ui->buttonCheck->click();
    }
}

void MainWindow::on_buttonLoadAndCheckMany_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("LOAD DOMAINS"), "/home/", tr("TXT (*.txt)"));

    if(fileName.contains(".txt"))
    {

    howManyAll = 0;
    howManyCDN = 0;
    howProgress=0;
    ui->listWidget->clear();
    QFile mFile(fileName);

    mFile.open(QIODevice::ReadOnly );
    QTextStream mFileData(&mFile);
    QString line;

         while (!mFileData.atEnd())
         {
           ++howManyAll;
           line= mFileData.readLine();
           line.replace(" ","");
           line=line.toLower();
           ui->listWidget->addItem(line);
         }



    mFile.close();

    ui->labelNaIle->setText("Progress: "+QString::number(howProgress)+"/"+QString::number(howManyAll));
    ui->labelProcentowo->setText("CDN found in "+QString::number(howManyCDN/howManyAll)+"%");
    }
}

#include <QDebug>
void MainWindow::getDNS_many()
{
          //Check the lookup succeeded.
           if (dns->error() != QDnsLookup::NoError) {
               ui->tableWidget->item(current_read_query,2)->setText("not found");
               ui->tableWidget->item(current_read_query,3)->setText("not found");
           }

           if(dns->hostAddressRecords().size() != 0)
           {
              const QDnsHostAddressRecord &record = dns->hostAddressRecords().last();

             ui->tableWidget->item(current_read_query,3)->setText(record.value().toString());
             this->something_was_found = true;

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
     bool cdnFound = false;
    if(current_read_query == ui->tableWidget->rowCount())
    {
        current_read_query = 0;
        current_row = 0;

        if(isCDNbyProvider)
        {

        }
        else
        {
        for(int i = 0;i<ui->tableWidget->rowCount();i++)
        {
            for(int j=i+1;j<ui->tableWidget->rowCount();j++)
            {
             if(ui->tableWidget->item(i,3)->text() == "not found"
              || ui->tableWidget->item(j,3)->text() == "not found")
             {
                 continue;
             }

             if( ui->tableWidget->item(i,3)->text().left(6)!=ui->tableWidget->item(j,3)->text().left(6))
                {
                    QColor color;
                    color.setGreen(255);
                    cdnFound = true;
                    break;
                }


            }
         if(cdnFound) break;
        }
        }

        if(!cdnFound && !isCDNbyProvider && this->something_was_found)
        {
            QColor color;
            color.setRed(255);
            ui->listWidget->item(current_many)->setBackgroundColor(color);
                        this->something_was_found = false;
                        howProgress++;
        }
        else if (this->something_was_found)
        {
            QColor color;
            color.setGreen(255);
            ui->listWidget->item(current_many)->setBackgroundColor(color);
           howManyCDN++;
                       this->something_was_found = false;
                       howProgress++;
        }
        else
        {
            QColor color;
            color.setGreen(255);
            color.setRed(255);
            ui->listWidget->item(current_many)->setBackgroundColor(color);
            this->howManyAll--;
        }

        ui->labelNaIle->setText("Progress: "+QString::number(howProgress)+"/"+QString::number(howManyAll));
        ui->labelProcentowo->setText("CDN found in "+QString::number(100*(float)howManyCDN/howProgress)+"%");

        isCDNbyProvider = false;

        current_many++;
        if(current_many != ui->listWidget->count())
        {
            ui->buttonCheckManyDomains->click();
        }
        else
        {
            current_many = 0;
        }

    }
    else
    {
        dns->deleteLater();
        ui->buttonCheckManyDomains->click();
    }
}

void MainWindow::on_buttonCheckManyDomains_clicked()
{
    dns = new QDnsLookup(this);
    connect(dns, SIGNAL(finished()),this, SLOT(getDNS_many()));
    dns->setType(QDnsLookup::ANY);
    dns->setName(ui->listWidget->item(current_many)->text());
    QHostAddress name;
    name.setAddress(ui->tableWidget->item(current_row,0)->text());
    dns->setNameserver(name);
    dns->lookup();
    ++current_row;

}

void MainWindow::disableButtons()
{
    ui->buttonCheck->setEnabled(false);
    ui->buttonCheckManyDomains ->setEnabled(false);
    ui->buttonLoadAndCheckMany ->setEnabled(false);
}

void MainWindow::enableButtons()
{
    ui->buttonCheck->setEnabled(true);
    ui->buttonCheckManyDomains ->setEnabled(true);
    ui->buttonLoadAndCheckMany ->setEnabled(true);
}
