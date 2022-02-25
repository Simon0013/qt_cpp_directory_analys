/********************************************************************************
** Form generated from reading UI file 'duplicates.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUPLICATES_H
#define UI_DUPLICATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Duplicates
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *firstDirButton;
    QRadioButton *secondDirButton;
    QColumnView *columnView;

    void setupUi(QWidget *Duplicates)
    {
        if (Duplicates->objectName().isEmpty())
            Duplicates->setObjectName(QStringLiteral("Duplicates"));
        Duplicates->resize(942, 630);
        gridLayout = new QGridLayout(Duplicates);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Duplicates);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        firstDirButton = new QRadioButton(Duplicates);
        firstDirButton->setObjectName(QStringLiteral("firstDirButton"));

        gridLayout->addWidget(firstDirButton, 1, 0, 1, 1);

        secondDirButton = new QRadioButton(Duplicates);
        secondDirButton->setObjectName(QStringLiteral("secondDirButton"));

        gridLayout->addWidget(secondDirButton, 1, 1, 1, 1);

        columnView = new QColumnView(Duplicates);
        columnView->setObjectName(QStringLiteral("columnView"));

        gridLayout->addWidget(columnView, 2, 0, 1, 2);


        retranslateUi(Duplicates);

        QMetaObject::connectSlotsByName(Duplicates);
    } // setupUi

    void retranslateUi(QWidget *Duplicates)
    {
        Duplicates->setWindowTitle(QApplication::translate("Duplicates", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Duplicates", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\275\320\260\320\271\320\264\320\265\320\275\320\275\321\213\321\205 \320\264\321\203\320\261\320\273\320\270\320\272\320\260\321\202\320\276\320\262:", Q_NULLPTR));
        firstDirButton->setText(QApplication::translate("Duplicates", "\320\262 \320\277\320\265\321\200\320\262\320\276\320\274 \320\272\320\260\321\202\320\260\320\273\320\276\320\263\320\265", Q_NULLPTR));
        secondDirButton->setText(QApplication::translate("Duplicates", "\320\262\320\276 \320\262\321\202\320\276\321\200\320\276\320\274 \320\272\320\260\321\202\320\260\320\273\320\276\320\263\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Duplicates: public Ui_Duplicates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUPLICATES_H
