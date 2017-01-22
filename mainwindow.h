#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDnsLookup>
#include <QMessageBox>
#include <QNetworkProxy>
#include "sleeper.h"
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonCheck_clicked();
    void getDNS();
    void getDNS_many();

    void on_buttonLoadAndCheckMany_clicked();

    void on_buttonCheckManyDomains_clicked();

    void disableButtons();
    void enableButtons();



private:
    Ui::MainWindow *ui;

    QDnsLookup *dns;
    int current_row = 0;
    int current_read_query = 0;

    int current_many = 0;



    bool isCDNbyProvider = false;
};

#endif // MAINWINDOW_H
