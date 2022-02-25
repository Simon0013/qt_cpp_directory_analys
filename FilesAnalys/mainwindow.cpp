#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QByteArray>
#include <QTextStream>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //для большего удобства будем использовать массивы меток для обращения к нужной метке окна приложения по индексу
    //(0 - для первого каталога, 1 - для второго каталога)
    AnalysStatusLabel[0] = ui->AnalysStatus1Label;
    AnalysStatusLabel[1] = ui->AnalysStatus2Label;
    MissedLabel[0] = ui->Missed1Label;
    MissedLabel[1] = ui->Missed2Label;
    duplicatesLabel[0] = ui->Duplicates1Label;
    duplicatesLabel[1] = ui->Duplicates2Label;
    WatchedLabel[0] = ui->Watched1Label;
    WatchedLabel[1] = ui->Watched2Label;
    DirLabel[0] = ui->FirstDirLabel;
    DirLabel[1] = ui->SecondDirLabel;
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::watchFiles(QString dirName, int nDir)
{
    QDir dir(dirName);
    if (!dir.exists()) {    //если заданной папки не существует, выводим сообщение и выходим из функции
        QMessageBox::critical(this, "Папка не существует", "Каталог " + dir.absolutePath() + " не существует!");
        return -1;
    }
    AnalysStatusLabel[nDir]->setText("Выполняется");
    AnalysStatusLabel[nDir]->setStyleSheet("QLabel { color : orange; }");
    dir.setFilter(QDir::Files | QDir::AllDirs | QDir::NoDotAndDotDot);  //устанавливаем фильтр для показа файлов и каталогов, кроме родительского и самого себя
    QFileInfoList fileList = dir.entryInfoList();
    QString fd; //этот объект нам нужен для конвертации чисел в строку
    foreach (QFileInfo fileInfo, fileList) {
        QFile file(fileInfo.absoluteFilePath());
        if (fileInfo.isDir() && !fileInfo.isSymLink()) {    //если текущий файл - папка, но при этом и не ярлык на другую папку
            if (watchFiles(file.fileName(), nDir) == 1)     //если возвращено 1, то произошло переполнение в памяти; прекращаем просмотр
                return 1;
            continue;
        }
        if (!file.open(QIODevice::ReadOnly)) {  //если файл не удалось открыть, пропускаем его
            QMessageBox::warning(this, "Не удалось открыть файл", "Не удалось открыть файл " + file.fileName());
            MissedLabel[nDir]->setText(fd.setNum(++missedFiles[nDir]));
            continue;
        }
        try {
            QByteArray fileData = file.readAll();
            foreach (QString fileName, analysedFiles[nDir].keys()) {
                if (analysedFiles[nDir][fileName] == fileData) {
                    QFile listFile("duplicates.txt");
                    if (listFile.open(QIODevice::Append)) { //открываем файл списка дубликатов на добавление записей
                        QTextStream out(&listFile);
                        out << endl << QString("Исходный файл: ") << file.fileName().replace(DirLabel[nDir]->text() + "/", "") << endl;
                        out << QString("Дубликат: ");
                        QString fname = fileName;   //в файл списка дубликатов записываем сокращённый путь к файлам
                        out << fname.replace(DirLabel[nDir]->text() + "/", "") << endl;
                    }
                    analysedFiles[nDir].remove(fileName);   //для экономии памяти удаляем содержание одного из дубликатов, чтобы не хранить одно и то же 2 раза
                    listFile.close();
                    duplicatesLabel[nDir]->setText(fd.setNum(++duplicates[nDir]));  //на окно приложения выводим количество найденных дубликатов
                }
            }
            analysedFiles[nDir].insert(file.fileName(), fileData);
            WatchedLabel[nDir]->setText(fd.setNum(++watchedFiles[nDir]));
        }
        catch (std::bad_alloc& ba) {    //если произошло переполнение памяти, останавливаем процесс анализа содержимого каталога
            QString message(ba.what());
            QMessageBox::critical(this, "Ошибка выделения памяти", "Невозможно выделить память: " + message + "\nФайл: " + file.fileName() + "\nОперация прервана");
            return 1;
        }
        file.close();
    }
    return 0;
}


void MainWindow::on_FirstDirButton_clicked()
{
    ui->FirstDirLabel->setText(QFileDialog::getExistingDirectory());
    //сбрасываем данные об анализе каталога в предыдущий раз
    ui->AnalysStatus1Label->setText("Не запущен");
    ui->AnalysStatus1Label->setStyleSheet("");
    ui->Watched1Label->setText("0");
    ui->Missed1Label->setText("0");
    ui->Duplicates1Label->setText("0");

    if ((ui->SecondDirLabel->text().length() != 0) && (ui->FirstDirLabel->text().length() != 0))    //если оба каталога выбраны
        ui->startButton->setEnabled(true);
    else
        ui->startButton->setEnabled(false);
}


void MainWindow::on_SecondDirButton_clicked()
{
    ui->SecondDirLabel->setText(QFileDialog::getExistingDirectory());
    //сбрасываем данные об анализе каталога в предыдущий раз
    ui->AnalysStatus2Label->setText("Не запущен");
    ui->AnalysStatus2Label->setStyleSheet("");
    ui->Watched2Label->setText("0");
    ui->Missed2Label->setText("0");
    ui->Duplicates2Label->setText("0");

    if ((ui->SecondDirLabel->text().length() != 0) && (ui->FirstDirLabel->text().length() != 0))    //если оба каталога выбраны
        ui->startButton->setEnabled(true);
    else
        ui->startButton->setEnabled(false);
}


void MainWindow::on_cancelButton_clicked()
{
    close();
}


void MainWindow::on_startButton_clicked()
{
    if (QFile::exists("duplicates.txt"))    //если есть файл списка дубликатов, удаляем его для пересоздания
        QFile::remove("duplicates.txt");
    QFile listFile("duplicates.txt");
    if (listFile.open(QIODevice::Append)) {
        QTextStream out(&listFile);
        out << QString("-------------------Первый каталог------------------- ") << endl;
    }
    listFile.close();
    watchFiles(ui->FirstDirLabel->text(), 0);   //просматриваем первый каталог
    AnalysStatusLabel[0]->setText("Завершено");
    AnalysStatusLabel[0]->setStyleSheet("QLabel { color : green; }");
    analysedFiles[0].clear();   //очищаем данные по первому каталогу
    missedFiles[0] = 0;
    watchedFiles[0] = 0;
    duplicates[0] = 0;
    if (listFile.open(QIODevice::Append)) {
        QTextStream out(&listFile);
        out << endl << QString("-------------------Второй каталог------------------- ") << endl;
    }
    listFile.close();
    watchFiles(ui->SecondDirLabel->text(), 1);  //просматриваем второй каталог
    AnalysStatusLabel[1]->setText("Завершено");
    AnalysStatusLabel[1]->setStyleSheet("QLabel { color : green; }");
    analysedFiles[1].clear();   //очищаем данные по второму каталогу
    missedFiles[1] = 0;
    watchedFiles[1] = 0;
    duplicates[1] = 0;
    ui->ShowDupButton->setEnabled(true);
}


void MainWindow::on_ShowDupButton_clicked()
{
    //открываем файл списка дубликатов
    QStringList resFile("duplicates.txt");
    QProcess::execute("notepad.exe", resFile);
}

