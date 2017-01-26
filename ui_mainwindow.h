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
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelCDN;
    QLineEdit *lineEditHost;
    QPushButton *buttonCheck;
    QListWidget *listWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelNaIle;
    QLabel *labelProcentowo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_top50;
    QLabel *label_top52;
    QHBoxLayout *horizontalLayout;
    QLabel *label_top250;
    QLabel *label_top252;
    QPushButton *buttonLoadAndCheckMany;
    QPushButton *buttonCheckManyDomains;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(481, 299);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
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
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
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
        tableWidget->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem33);
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


        gridLayout_2->addLayout(verticalLayout, 0, 0, 4, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(300, 16777215));

        gridLayout_2->addWidget(listWidget, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelNaIle = new QLabel(centralWidget);
        labelNaIle->setObjectName(QStringLiteral("labelNaIle"));

        horizontalLayout_3->addWidget(labelNaIle);

        labelProcentowo = new QLabel(centralWidget);
        labelProcentowo->setObjectName(QStringLiteral("labelProcentowo"));

        horizontalLayout_3->addWidget(labelProcentowo);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_top50 = new QLabel(centralWidget);
        label_top50->setObjectName(QStringLiteral("label_top50"));

        horizontalLayout_2->addWidget(label_top50);

        label_top52 = new QLabel(centralWidget);
        label_top52->setObjectName(QStringLiteral("label_top52"));

        horizontalLayout_2->addWidget(label_top52);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_top250 = new QLabel(centralWidget);
        label_top250->setObjectName(QStringLiteral("label_top250"));

        horizontalLayout->addWidget(label_top250);

        label_top252 = new QLabel(centralWidget);
        label_top252->setObjectName(QStringLiteral("label_top252"));

        horizontalLayout->addWidget(label_top252);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        buttonLoadAndCheckMany = new QPushButton(centralWidget);
        buttonLoadAndCheckMany->setObjectName(QStringLiteral("buttonLoadAndCheckMany"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonLoadAndCheckMany->sizePolicy().hasHeightForWidth());
        buttonLoadAndCheckMany->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(buttonLoadAndCheckMany, 2, 1, 1, 1);

        buttonCheckManyDomains = new QPushButton(centralWidget);
        buttonCheckManyDomains->setObjectName(QStringLiteral("buttonCheckManyDomains"));

        gridLayout_2->addWidget(buttonCheckManyDomains, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        listWidget->raise();
        label_top50->raise();
        label_top52->raise();
        label_top250->raise();
        label_top252->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 481, 17));
        MainWindow->setMenuBar(menuBar);
#ifndef QT_NO_SHORTCUT
        label_top52->setBuddy(label_top52);
#endif // QT_NO_SHORTCUT

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
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "65.212.71.222", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "USA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "176.31.176.126", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(1, 1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "FRANCE", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(1, 2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(1, 3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "93.179.235.254", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(2, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "POLAND", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(2, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(3, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "210.168.200.74", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(3, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "JAPAN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(3, 2);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(3, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(4, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "202.147.193.109", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(4, 1);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "INDONESIA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(4, 2);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(4, 3);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(5, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "200.195.180.212", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(5, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "BRAZIL", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(5, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(5, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        labelCDN->setText(QApplication::translate("MainWindow", "CDN", Q_NULLPTR));
        buttonCheck->setText(QApplication::translate("MainWindow", "Check Single CDN", Q_NULLPTR));
        labelNaIle->setText(QString());
        labelProcentowo->setText(QApplication::translate("MainWindow", "l", Q_NULLPTR));
        label_top50->setText(QApplication::translate("MainWindow", "TOP50", Q_NULLPTR));
        label_top52->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_top250->setText(QApplication::translate("MainWindow", "TOP250", Q_NULLPTR));
        label_top252->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        buttonLoadAndCheckMany->setText(QApplication::translate("MainWindow", "Load domains", Q_NULLPTR));
        buttonCheckManyDomains->setText(QApplication::translate("MainWindow", "Check for all domains", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
