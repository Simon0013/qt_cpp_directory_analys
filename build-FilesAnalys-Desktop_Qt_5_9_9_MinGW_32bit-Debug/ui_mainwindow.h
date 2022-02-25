/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *FirstDirButton;
    QLabel *label_2;
    QPushButton *SecondDirButton;
    QLabel *FirstDirLabel;
    QLabel *SecondDirLabel;
    QPushButton *startButton;
    QPushButton *cancelButton;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *AnalysStatus1Label;
    QLabel *Watched1Label;
    QLabel *Duplicates1Label;
    QLabel *label_9;
    QLabel *Missed1Label;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *AnalysStatus2Label;
    QLabel *Watched2Label;
    QLabel *Duplicates2Label;
    QLabel *label_10;
    QLabel *Missed2Label;
    QPushButton *ShowDupButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(725, 479);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 231, 16));
        FirstDirButton = new QPushButton(centralwidget);
        FirstDirButton->setObjectName(QStringLiteral("FirstDirButton"));
        FirstDirButton->setGeometry(QRect(260, 10, 75, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 231, 16));
        SecondDirButton = new QPushButton(centralwidget);
        SecondDirButton->setObjectName(QStringLiteral("SecondDirButton"));
        SecondDirButton->setGeometry(QRect(260, 50, 75, 24));
        FirstDirLabel = new QLabel(centralwidget);
        FirstDirLabel->setObjectName(QStringLiteral("FirstDirLabel"));
        FirstDirLabel->setEnabled(true);
        FirstDirLabel->setGeometry(QRect(370, 10, 341, 16));
        SecondDirLabel = new QLabel(centralwidget);
        SecondDirLabel->setObjectName(QStringLiteral("SecondDirLabel"));
        SecondDirLabel->setGeometry(QRect(370, 50, 341, 16));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setEnabled(false);
        startButton->setGeometry(QRect(120, 90, 201, 24));
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(490, 90, 75, 24));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 130, 701, 121));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 101, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 131, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 90, 131, 16));
        AnalysStatus1Label = new QLabel(groupBox);
        AnalysStatus1Label->setObjectName(QStringLiteral("AnalysStatus1Label"));
        AnalysStatus1Label->setGeometry(QRect(120, 30, 81, 16));
        Watched1Label = new QLabel(groupBox);
        Watched1Label->setObjectName(QStringLiteral("Watched1Label"));
        Watched1Label->setGeometry(QRect(150, 60, 91, 16));
        Duplicates1Label = new QLabel(groupBox);
        Duplicates1Label->setObjectName(QStringLiteral("Duplicates1Label"));
        Duplicates1Label->setGeometry(QRect(150, 90, 91, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(350, 60, 121, 16));
        Missed1Label = new QLabel(groupBox);
        Missed1Label->setObjectName(QStringLiteral("Missed1Label"));
        Missed1Label->setGeometry(QRect(480, 60, 101, 16));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 270, 701, 121));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 91, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 60, 131, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 90, 121, 16));
        AnalysStatus2Label = new QLabel(groupBox_2);
        AnalysStatus2Label->setObjectName(QStringLiteral("AnalysStatus2Label"));
        AnalysStatus2Label->setGeometry(QRect(120, 30, 81, 16));
        Watched2Label = new QLabel(groupBox_2);
        Watched2Label->setObjectName(QStringLiteral("Watched2Label"));
        Watched2Label->setGeometry(QRect(150, 60, 401, 16));
        Duplicates2Label = new QLabel(groupBox_2);
        Duplicates2Label->setObjectName(QStringLiteral("Duplicates2Label"));
        Duplicates2Label->setGeometry(QRect(150, 90, 101, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(350, 60, 121, 16));
        Missed2Label = new QLabel(groupBox_2);
        Missed2Label->setObjectName(QStringLiteral("Missed2Label"));
        Missed2Label->setGeometry(QRect(480, 60, 101, 16));
        ShowDupButton = new QPushButton(centralwidget);
        ShowDupButton->setObjectName(QStringLiteral("ShowDupButton"));
        ShowDupButton->setEnabled(false);
        ShowDupButton->setGeometry(QRect(250, 410, 191, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 725, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\265\321\200\320\262\321\203\321\216 \320\277\320\260\320\277\320\272\321\203 \320\275\320\260 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\265:", Q_NULLPTR));
        FirstDirButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \320\262\321\202\320\276\321\200\321\203\321\216 \320\277\320\260\320\277\320\272\321\203 \320\275\320\260 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\265:", Q_NULLPTR));
        SecondDirButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", Q_NULLPTR));
        FirstDirLabel->setText(QString());
        SecondDirLabel->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\321\201\321\202\321\203\320\277\320\270\321\202\321\214 \320\272 \320\260\320\275\320\260\320\273\320\270\320\267\321\203 \320\272\320\260\321\202\320\260\320\273\320\276\320\263\320\276\320\262", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \320\260\320\275\320\260\320\273\320\270\320\267\320\260:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\320\275\320\276 \321\204\320\260\320\271\320\273\320\276\320\262:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\320\264\320\265\320\275\320\276 \320\264\321\203\320\261\320\273\320\270\320\272\320\260\321\202\320\276\320\262:", Q_NULLPTR));
        AnalysStatus1Label->setText(QApplication::translate("MainWindow", "\320\235\320\265 \320\267\320\260\320\277\321\203\321\211\320\265\320\275", Q_NULLPTR));
        Watched1Label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        Duplicates1Label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\277\321\203\321\211\320\265\320\275\320\276 \321\204\320\260\320\271\320\273\320\276\320\262:", Q_NULLPTR));
        Missed1Label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \320\260\320\275\320\260\320\273\320\270\320\267\320\260:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\320\275\320\276 \321\204\320\260\320\271\320\273\320\276\320\262:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\320\264\320\265\320\275\320\276 \320\264\321\203\320\261\320\273\320\270\320\272\320\260\321\202\320\276\320\262:", Q_NULLPTR));
        AnalysStatus2Label->setText(QApplication::translate("MainWindow", "\320\235\320\265 \320\267\320\260\320\277\321\203\321\211\320\265\320\275", Q_NULLPTR));
        Watched2Label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        Duplicates2Label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\277\321\203\321\211\320\265\320\275\320\276 \321\204\320\260\320\271\320\273\320\276\320\262:", Q_NULLPTR));
        Missed2Label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        ShowDupButton->setText(QApplication::translate("MainWindow", "\320\241\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\264\321\203\320\261\320\273\320\270\320\272\320\260\321\202\320\276\320\262", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
