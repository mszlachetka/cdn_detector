#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDnsLookup>
#include <QMessageBox>
#include <QNetworkProxy>
#include "sleeper.h"

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

private:
    Ui::MainWindow *ui;
    QDnsLookup *dns;

    int current_row = 0;
    int current_read_query = 0;

    bool isCDNbyProvider = false;
    bool isCDNbyAddress = false;
};

#endif // MAINWINDOW_H
