/********************************************************************************
** Form generated from reading UI file 'DemingQt1.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMINGQT1_H
#define UI_DEMINGQT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DemingQt1Class
{
public:
    QWidget *centralWidget;
    QPushButton *rule1;
    QLabel *label;
    QPushButton *rule2;
    QPushButton *rule3;
    QPushButton *rule4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DemingQt1Class)
    {
        if (DemingQt1Class->objectName().isEmpty())
            DemingQt1Class->setObjectName(QString::fromUtf8("DemingQt1Class"));
        DemingQt1Class->resize(876, 544);
        centralWidget = new QWidget(DemingQt1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        rule1 = new QPushButton(centralWidget);
        rule1->setObjectName(QString::fromUtf8("rule1"));
        rule1->setGeometry(QRect(10, 10, 93, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 711, 401));
        rule2 = new QPushButton(centralWidget);
        rule2->setObjectName(QString::fromUtf8("rule2"));
        rule2->setGeometry(QRect(10, 40, 93, 28));
        rule3 = new QPushButton(centralWidget);
        rule3->setObjectName(QString::fromUtf8("rule3"));
        rule3->setGeometry(QRect(10, 70, 93, 28));
        rule4 = new QPushButton(centralWidget);
        rule4->setObjectName(QString::fromUtf8("rule4"));
        rule4->setGeometry(QRect(10, 100, 93, 28));
        DemingQt1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DemingQt1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 876, 26));
        DemingQt1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DemingQt1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DemingQt1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DemingQt1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DemingQt1Class->setStatusBar(statusBar);

        retranslateUi(DemingQt1Class);

        QMetaObject::connectSlotsByName(DemingQt1Class);
    } // setupUi

    void retranslateUi(QMainWindow *DemingQt1Class)
    {
        DemingQt1Class->setWindowTitle(QCoreApplication::translate("DemingQt1Class", "DemingQt1", nullptr));
        rule1->setText(QCoreApplication::translate("DemingQt1Class", "Rule 1", nullptr));
        label->setText(QString());
        rule2->setText(QCoreApplication::translate("DemingQt1Class", "Rule 2", nullptr));
        rule3->setText(QCoreApplication::translate("DemingQt1Class", "Rule 3", nullptr));
        rule4->setText(QCoreApplication::translate("DemingQt1Class", "Rule 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DemingQt1Class: public Ui_DemingQt1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMINGQT1_H
