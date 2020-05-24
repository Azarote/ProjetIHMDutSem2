#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QFileDialog>
#include <QFile>
#include <QLabel>
#include <QJsonArray>
#include <QTextEdit>
#include <QJsonValue>
#include <QDebug>
#include <QListView>
#include <QStringListModel>
#include <QJsonDocument>
#include <QJsonObject>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
     QTextEdit * zonetexte;
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void MenuPrincipal();
};
#endif // MAINWINDOW_H
