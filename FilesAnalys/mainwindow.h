#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QList>
#include <QDir>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_FirstDirButton_clicked();

    void on_SecondDirButton_clicked();

    void on_cancelButton_clicked();

    void on_startButton_clicked();

    void on_ShowDupButton_clicked();

private:
    Ui::MainWindow *ui;
    QMap<QString, QByteArray> analysedFiles[2];
    int watchedFiles[2] = {0, 0};
    int missedFiles[2] = {0, 0};
    int duplicates[2] = {0, 0};
    QLabel *DirLabel[2], *duplicatesLabel[2], *WatchedLabel[2], *MissedLabel[2], *AnalysStatusLabel[2];
    int watchFiles(QString dirName, int nDir);
};
#endif // MAINWINDOW_H
