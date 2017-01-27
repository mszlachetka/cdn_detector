#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDnsLookup>
#include <QMessageBox>
#include <QNetworkProxy>
#include <QFileDialog>
#include <QList>
#include <QtAlgorithms>
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




    void on_buttonDnsServers_clicked();

private:
    Ui::MainWindow *ui;

    QDnsLookup *dns;
    int current_row = 0;
    int current_read_query = 0;

    int current_many = 0;

    int howManyCDN=1;
    int howManyAll=1;
    int howProgress=1;

    bool isCDNbyProvider = false;

    bool something_was_found = false;

    QList <QString> previous_list;
    QList <QString> next_list;
};

#endif // MAINWINDOW_H
