#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lobbywidget.h"
#include "server.h"
#include "client.h"

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
    void on_btnWyjscie_clicked();

    void on_btnDolacz_clicked();

    void on_btnStworz_clicked();

    void joinGame(QString playerName, QString ip, int port);

    void hostGame(QString playerName, int port);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    const int port = 2014;
    Ui::MainWindow *ui;
    QPointer<LobbyWidget> lobbyWidget;
    Player *player;
    Server *server;
    Client *client;
};

#endif // MAINWINDOW_H
