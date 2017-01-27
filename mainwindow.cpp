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
     dns->setType(QDnsLookup::A);
     dns->setName(ui->lineEditHost->text());
     QHostAddress name;
     name.setAddress(ui->tableWidget->item(current_row,0)->text());
     dns->setNameserver(name);
     dns->lookup();
     ++current_row;


}






void MainWindow::getDNS()
{
    ui->tableWidget->selectRow(current_read_query);
          //Check the lookup succeeded.
           if (dns->error() != QDnsLookup::NoError) {
               ui->tableWidget->item(current_read_query,2)->setText("not found");
               ui->tableWidget->item(current_read_query,3)->setText("not found");
           }


               for(int i=0 ;i<dns->hostAddressRecords().size();++i)
               {
              const QDnsHostAddressRecord &record = dns->hostAddressRecords().at(i);

             ui->tableWidget->item(current_read_query,3)->setText(record.value().toString());
             this->next_list.push_back(record.value().toString());
             if(current_read_query == 0) this->previous_list.push_back(record.value().toString());
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
        break;
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

     qSort(previous_list);
     qSort(next_list);


     if( next_list.size()!=0 && previous_list.size()!=0)
     {

        if(next_list.size()<=previous_list.size())
        {
       for(int i=0; i<next_list.size();i++)
       {
         if (!previous_list.contains(next_list[i]))
         {
                      cdnFound = true;
         }
       }
         }

         if(previous_list.size()<next_list.size())
         {
       for(int i=0; i<previous_list.size();i++)
       {
         if (!next_list.contains(previous_list[i]))
         {
                      cdnFound = true;
         }
       }
         }

     }

    if(current_read_query == ui->tableWidget->rowCount() || cdnFound)
    {
        current_read_query = 0;
        current_row = 0;

        if(isCDNbyProvider || cdnFound)
        {
            ui->labelCDN->setStyleSheet("QLabel { background-color : green; }");
                    something_was_found = false;
        }
        else if(!cdnFound && !isCDNbyProvider && this->something_was_found)
        {
               ui->labelCDN->setStyleSheet("QLabel { background-color : red; }");
                           this->something_was_found = false;
        }
        else
         {
            ui->labelCDN->setStyleSheet("QLabel { background-color :orange; }");
                    something_was_found = false;
        }
        isCDNbyProvider = false;
        previous_list.clear();
        next_list.clear();
    }
    else
    {
        previous_list=next_list;
        next_list.clear();
        dns->deleteLater();
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

void MainWindow::getDNS_many()
{


    ui->tableWidget->selectRow(current_read_query);
          //Check the lookup succeeded.
           if (dns->error() != QDnsLookup::NoError) {
               ui->tableWidget->item(current_read_query,2)->setText("not found");
               ui->tableWidget->item(current_read_query,3)->setText("not found");
           }


               for(int i=0 ;i<dns->hostAddressRecords().size();++i)
               {
              const QDnsHostAddressRecord &record = dns->hostAddressRecords().at(i);

             ui->tableWidget->item(current_read_query,3)->setText(record.value().toString());
             this->next_list.push_back(record.value().toString());
             if(current_read_query == 0) this->previous_list.push_back(record.value().toString());
             this->something_was_found = true;

                }




    // NS records
    foreach (const QDnsDomainNameRecord &record, dns->nameServerRecords())
    {

        ui->tableWidget->item(current_read_query,2)->setText(record.value());
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

     qSort(previous_list);
     qSort(next_list);


     if( next_list.size()!=0 && previous_list.size()!=0)
     {

        if(next_list.size()<=previous_list.size())
        {
       for(int i=0; i<next_list.size();i++)
       {
         if (!previous_list.contains(next_list[i]))
         {
                      cdnFound = true;
         }
       }
         }

         if(previous_list.size()<next_list.size())
         {
       for(int i=0; i<previous_list.size();i++)
       {
         if (!next_list.contains(previous_list[i]))
         {
                      cdnFound = true;
         }
       }
         }

     }



    if(current_read_query == ui->tableWidget->rowCount() || cdnFound == true)
    {

        current_read_query = 0;
        current_row = 0;

        if(!cdnFound && !isCDNbyProvider && this->something_was_found)
        {

            QColor color;
            color.setRed(255);
            ui->listWidget->item(current_many)->setBackgroundColor(color);
                        this->something_was_found = false;
                        howProgress++;
        }
        else if (cdnFound || isCDNbyProvider)
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
                                   this->something_was_found = false;
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

        previous_list.clear();
        next_list.clear();

    }
    else
    {

        previous_list = next_list;


        next_list.clear();
        dns->deleteLater();
        ui->buttonCheckManyDomains->click();
    }
}


void MainWindow::on_buttonCheckManyDomains_clicked()
{
    dns = new QDnsLookup(this);
    connect(dns, SIGNAL(finished()),this, SLOT(getDNS_many()));
    dns->setType(QDnsLookup::A);
    dns->setName(ui->listWidget->item(current_many)->text());
    QHostAddress name;
    name.setAddress(ui->tableWidget->item(current_row,0)->text());
    dns->setNameserver(name);
    dns->lookup();

    ++current_row;

    if(current_many ==50) ui->label_top52->setText(QString::number(100*(float)howManyCDN/howProgress)+"%");
    else if(current_many ==250) ui->label_top252->setText(QString::number(100*(float)howManyCDN/howProgress)+"%");
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

void MainWindow::on_buttonDnsServers_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("LOAD DNS SERVERS"), "/home/", tr("TXT (*.txt)"));

    if(fileName.contains(".txt"))
    {

    int rowCnt = ui->tableWidget->rowCount();
    for(int i = 0;i<rowCnt;++i)
    {
           ui->tableWidget->removeRow(0);
    }
    QFile mFile(fileName);

    mFile.open(QIODevice::ReadOnly );
    QTextStream mFileData(&mFile);
    QString line;

         while (!mFileData.atEnd())
         {
           line= mFileData.readLine();
           ui->tableWidget->insertRow(0);

           QTableWidgetItem *itab0 = new QTableWidgetItem(line.split(" ").at(0));
           QTableWidgetItem *itab1= new QTableWidgetItem(line.split(" ").at(1));
           QTableWidgetItem *itab2= new QTableWidgetItem("-");
           QTableWidgetItem *itab3= new QTableWidgetItem("-");

           ui->tableWidget->setItem(0,0,itab0);
           ui->tableWidget->setItem(0,1,itab1);
           ui->tableWidget->setItem(0,2,itab2);
           ui->tableWidget->setItem(0,3,itab3);
         }



    mFile.close();

    ui->labelNaIle->setText("Progress: "+QString::number(howProgress)+"/"+QString::number(howManyAll));
    ui->labelProcentowo->setText("CDN found in "+QString::number(howManyCDN/howManyAll)+"%");
    }
}
