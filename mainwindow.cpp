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

void MainWindow::on_buttonCheck_clicked()
{

    this->isCDNbyAddress = false;
    this->isCDNbyProvider = false;
    dns = new QDnsLookup(this);
   connect(dns, SIGNAL(finished()),this, SLOT(getDNS()));

    dns_usa = new QDnsLookup(this);
    connect(dns_usa, SIGNAL(finished()),this, SLOT(getDNS_USA()));

     dns->setType(QDnsLookup::ANY);

     dns->setName(ui->lineEditHost->text());
     dns->lookup();

     dns_usa->setType(QDnsLookup::ANY);
     QHostAddress name;
     name.setAddress("65.212.71.222");
     dns_usa->setNameserver(name);
     dns_usa->setName(ui->lineEditHost->text());
     dns_usa->lookup();

}


void MainWindow::getDNS_USA()
{
    //Check the lookup succeeded.
    if (dns_usa->error() != QDnsLookup::NoError) {
        const char * error = dns_usa->errorString().toStdString().c_str();
        qWarning(error);
        dns->deleteLater();
        return;
    }

    if(dns_usa->hostAddressRecords().size() != 0)
    {
       const QDnsHostAddressRecord &record = dns_usa->hostAddressRecords().last();

       addressUSA = record.value().toString();
       ui->labelAddressUSA->setText(addressUSA);
    }

    // NS records
    foreach (const QDnsDomainNameRecord &record, dns->nameServerRecords())
    {
        if(record.value().contains("cloudflare")
           ||record.value().contains("google")
           ||record.value().contains("akam")
           ||record.value().contains("ovh")
                )
        {
        ui->labelNS_2->setText(record.value());
        isCDNbyProvider = true;
        }
        else
        {
            ui->labelNS_2->setText("other : "+record.value());
                    isCDNbyProvider = false;
        }
    }

    if(dns_usa->nameServerRecords().size() == 0)
    {
        ui->labelNS_2->setText("not found");
        ui->labelAddressUSA->setText("not found");
    }


    if( (addressPL.contains("not") || addressPL.contains("-")))
    {
        this->isCDNbyAddress = false;
    }
    else if (!(addressPL.mid(0,3) == addressUSA.mid(0,3)))
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
    }


}

void MainWindow::getDNS()
{

           //Check the lookup succeeded.
           if (dns->error() != QDnsLookup::NoError) {
               const char * error = dns->errorString().toStdString().c_str();
               qWarning(error);
               dns->deleteLater();
               ui->labelNS->setText("-");
               return;
           }

           if(dns->hostAddressRecords().size() != 0)
           {
              const QDnsHostAddressRecord &record = dns->hostAddressRecords().last();

              addressPL = record.value().toString();
              ui->labelAddressPL->setText(addressPL);

           }

    // NS records
    foreach (const QDnsDomainNameRecord &record, dns->nameServerRecords())
    {
        if(record.value().contains("cloudflare")
           ||record.value().contains("google")
           ||record.value().contains("akam")
                )
        {
        ui->labelNS->setText(record.value());
        isCDNbyProvider = true;
        }
        else
        {
            ui->labelNS->setText("other : "+record.value());
                    isCDNbyProvider = false;
        }
    }

    if(dns->nameServerRecords().size() == 0)
    {
        ui->labelNS->setText("not found");
        ui->labelAddressPL->setText("not found");
    }


}
