/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_addStudent;
    QAction *action_about;
    QAction *actionhelp;
    QAction *action_seeStudent;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 300);
        action_addStudent = new QAction(MainWindow);
        action_addStudent->setObjectName(QString::fromUtf8("action_addStudent"));
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QString::fromUtf8("action_about"));
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName(QString::fromUtf8("actionhelp"));
        action_seeStudent = new QAction(MainWindow);
        action_seeStudent->setObjectName(QString::fromUtf8("action_seeStudent"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 48pt \".AppleSystemUIFont\";\n"
"color: rgb(255, 185, 0);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_addStudent);
        menu->addAction(action_seeStudent);
        menu_2->addAction(action_about);
        menu_2->addAction(actionhelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_addStudent->setText(QCoreApplication::translate("MainWindow", " addStudent", nullptr));
        action_about->setText(QCoreApplication::translate("MainWindow", " about", nullptr));
        actionhelp->setText(QCoreApplication::translate("MainWindow", "help", nullptr));
        action_seeStudent->setText(QCoreApplication::translate("MainWindow", " seeStudent", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", " \345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
