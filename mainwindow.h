#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDnsLookup>
#include <QMessageBox>
#include <QNetworkProxy>

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
    void getDNS_USA();

private:
    Ui::MainWindow *ui;
    QDnsLookup *dns;
    QDnsLookup *dns_usa;


    QString addressPL;
    QString addressUSA;

    bool isCDNbyProvider = false;
    bool isCDNbyAddress = false;
};

#endif // MAINWINDOW_H
