/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelCDN;
    QLineEdit *lineEditHost;
    QPushButton *buttonCheck;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNaIle;
    QLabel *labelProcentowo;
    QPushButton *buttonLoadAndCheckMany;
    QPushButton *buttonCheckManyDomains;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(425, 300);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(7, 2, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(7, 3, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(8, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(8, 3, __qtablewidgetitem48);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMaximumSize(QSize(700, 16777215));

        verticalLayout->addWidget(tableWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelCDN = new QLabel(centralWidget);
        labelCDN->setObjectName(QStringLiteral("labelCDN"));

        verticalLayout_2->addWidget(labelCDN);

        lineEditHost = new QLineEdit(centralWidget);
        lineEditHost->setObjectName(QStringLiteral("lineEditHost"));

        verticalLayout_2->addWidget(lineEditHost);

        buttonCheck = new QPushButton(centralWidget);
        buttonCheck->setObjectName(QStringLiteral("buttonCheck"));

        verticalLayout_2->addWidget(buttonCheck);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(listWidget, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNaIle = new QLabel(centralWidget);
        labelNaIle->setObjectName(QStringLiteral("labelNaIle"));

        horizontalLayout->addWidget(labelNaIle);

        labelProcentowo = new QLabel(centralWidget);
        labelProcentowo->setObjectName(QStringLiteral("labelProcentowo"));

        horizontalLayout->addWidget(labelProcentowo);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonLoadAndCheckMany = new QPushButton(centralWidget);
        buttonLoadAndCheckMany->setObjectName(QStringLiteral("buttonLoadAndCheckMany"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonLoadAndCheckMany->sizePolicy().hasHeightForWidth());
        buttonLoadAndCheckMany->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(buttonLoadAndCheckMany);

        buttonCheckManyDomains = new QPushButton(centralWidget);
        buttonCheckManyDomains->setObjectName(QStringLiteral("buttonCheckManyDomains"));

        verticalLayout_3->addWidget(buttonCheckManyDomains);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 425, 17));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "DNS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Country", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "NS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "65.212.71.222", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 1);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "USA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 2);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 3);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(1, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "176.31.176.126", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "FRANCE", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 3);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "178.217.136.98", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 1);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "POLAND", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(2, 2);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(2, 3);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(3, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "210.168.200.74", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(3, 1);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "JAPAN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(3, 2);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(3, 3);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(4, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "202.147.193.109", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(4, 1);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "INDONESIA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(4, 2);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(4, 3);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(5, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "200.195.180.212", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(5, 1);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "BRAZIL", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(5, 2);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(5, 3);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(6, 0);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "197.44.124.240", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(6, 1);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "EGYPT", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(6, 2);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(6, 3);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(7, 0);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "66.249.145.27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(7, 1);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "BARBADOS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(7, 2);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(7, 3);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(8, 0);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "137.59.120.17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(8, 1);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "AFGANISTAN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(8, 2);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(8, 3);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        labelCDN->setText(QApplication::translate("MainWindow", "CDN", Q_NULLPTR));
        buttonCheck->setText(QApplication::translate("MainWindow", "Check Single CDN", Q_NULLPTR));
        labelNaIle->setText(QString());
        labelProcentowo->setText(QApplication::translate("MainWindow", "l", Q_NULLPTR));
        buttonLoadAndCheckMany->setText(QApplication::translate("MainWindow", "Load domains", Q_NULLPTR));
        buttonCheckManyDomains->setText(QApplication::translate("MainWindow", "Check for all domains", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
