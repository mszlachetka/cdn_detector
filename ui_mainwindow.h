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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelNS;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *labelNS_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *labelAddressPL;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *labelAddressUSA;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelCDN;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditHost;
    QPushButton *buttonCheck;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        labelNS = new QLabel(centralWidget);
        labelNS->setObjectName(QStringLiteral("labelNS"));

        horizontalLayout->addWidget(labelNS);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        labelNS_2 = new QLabel(centralWidget);
        labelNS_2->setObjectName(QStringLiteral("labelNS_2"));

        horizontalLayout_4->addWidget(labelNS_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        labelAddressPL = new QLabel(centralWidget);
        labelAddressPL->setObjectName(QStringLiteral("labelAddressPL"));

        horizontalLayout_2->addWidget(labelAddressPL);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        labelAddressUSA = new QLabel(centralWidget);
        labelAddressUSA->setObjectName(QStringLiteral("labelAddressUSA"));

        horizontalLayout_3->addWidget(labelAddressUSA);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelCDN = new QLabel(centralWidget);
        labelCDN->setObjectName(QStringLiteral("labelCDN"));

        horizontalLayout_5->addWidget(labelCDN);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEditHost = new QLineEdit(centralWidget);
        lineEditHost->setObjectName(QStringLiteral("lineEditHost"));

        verticalLayout_2->addWidget(lineEditHost);

        buttonCheck = new QPushButton(centralWidget);
        buttonCheck->setObjectName(QStringLiteral("buttonCheck"));

        verticalLayout_2->addWidget(buttonCheck);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        label_2->raise();
        labelCDN->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "NS PL", Q_NULLPTR));
        labelNS->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "NS USA", Q_NULLPTR));
        labelNS_2->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Address from PL DNS", Q_NULLPTR));
        labelAddressPL->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Address from USA DNS", Q_NULLPTR));
        labelAddressUSA->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        labelCDN->setText(QApplication::translate("MainWindow", "CDN", Q_NULLPTR));
        buttonCheck->setText(QApplication::translate("MainWindow", "Check CDN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
