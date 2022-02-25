/********************************************************************************
** Form generated from reading UI file 'testsort.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSORT_H
#define UI_TESTSORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestSort
{
public:
    QWidget *centralwidget;
    QPushButton *btnSort;
    QPushButton *btnLosuj;
    QListView *listaNieSort1;
    QListView *listaSort1;
    QTextEdit *listaNieSort;
    QTextEdit *listaSort;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestSort)
    {
        if (TestSort->objectName().isEmpty())
            TestSort->setObjectName(QString::fromUtf8("TestSort"));
        TestSort->resize(1126, 839);
        centralwidget = new QWidget(TestSort);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnSort = new QPushButton(centralwidget);
        btnSort->setObjectName(QString::fromUtf8("btnSort"));
        btnSort->setGeometry(QRect(150, 620, 75, 23));
        btnLosuj = new QPushButton(centralwidget);
        btnLosuj->setObjectName(QString::fromUtf8("btnLosuj"));
        btnLosuj->setGeometry(QRect(150, 580, 75, 23));
        listaNieSort1 = new QListView(centralwidget);
        listaNieSort1->setObjectName(QString::fromUtf8("listaNieSort1"));
        listaNieSort1->setGeometry(QRect(600, 90, 171, 311));
        listaSort1 = new QListView(centralwidget);
        listaSort1->setObjectName(QString::fromUtf8("listaSort1"));
        listaSort1->setGeometry(QRect(840, 90, 181, 301));
        listaNieSort = new QTextEdit(centralwidget);
        listaNieSort->setObjectName(QString::fromUtf8("listaNieSort"));
        listaNieSort->setGeometry(QRect(70, 110, 104, 401));
        listaSort = new QTextEdit(centralwidget);
        listaSort->setObjectName(QString::fromUtf8("listaSort"));
        listaSort->setGeometry(QRect(220, 110, 104, 401));
        TestSort->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestSort);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1126, 21));
        TestSort->setMenuBar(menubar);
        statusbar = new QStatusBar(TestSort);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TestSort->setStatusBar(statusbar);

        retranslateUi(TestSort);

        QMetaObject::connectSlotsByName(TestSort);
    } // setupUi

    void retranslateUi(QMainWindow *TestSort)
    {
        TestSort->setWindowTitle(QCoreApplication::translate("TestSort", "TestSort", nullptr));
        btnSort->setText(QCoreApplication::translate("TestSort", "Sortuj", nullptr));
        btnLosuj->setText(QCoreApplication::translate("TestSort", "Losuj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestSort: public Ui_TestSort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSORT_H
