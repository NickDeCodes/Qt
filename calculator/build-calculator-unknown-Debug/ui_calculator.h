/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *btn_ac;
    QPushButton *btn_addsub;
    QPushButton *btn_del;
    QPushButton *btn_div;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_mul;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_add;
    QPushButton *btn_0;
    QPushButton *btn_dian;
    QPushButton *btn_eql;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(358, 400);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 48pt \".AppleSystemUIFont\";"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_ac = new QPushButton(centralwidget);
        btn_ac->setObjectName(QString::fromUtf8("btn_ac"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_ac->sizePolicy().hasHeightForWidth());
        btn_ac->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_ac, 0, 0, 1, 1);

        btn_addsub = new QPushButton(centralwidget);
        btn_addsub->setObjectName(QString::fromUtf8("btn_addsub"));
        sizePolicy1.setHeightForWidth(btn_addsub->sizePolicy().hasHeightForWidth());
        btn_addsub->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_addsub, 0, 1, 1, 1);

        btn_del = new QPushButton(centralwidget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        sizePolicy1.setHeightForWidth(btn_del->sizePolicy().hasHeightForWidth());
        btn_del->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_del, 0, 2, 1, 1);

        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        sizePolicy1.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_div, 0, 3, 1, 1);

        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        sizePolicy1.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_7, 1, 0, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        sizePolicy1.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_8, 1, 1, 1, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        sizePolicy1.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_9, 1, 2, 1, 1);

        btn_mul = new QPushButton(centralwidget);
        btn_mul->setObjectName(QString::fromUtf8("btn_mul"));
        sizePolicy1.setHeightForWidth(btn_mul->sizePolicy().hasHeightForWidth());
        btn_mul->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_mul, 1, 3, 1, 1);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        sizePolicy1.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_4, 2, 0, 1, 1);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        sizePolicy1.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_5, 2, 1, 1, 1);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        sizePolicy1.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_6, 2, 2, 1, 1);

        btn_sub = new QPushButton(centralwidget);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        sizePolicy1.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_sub, 2, 3, 1, 1);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        sizePolicy1.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_1, 3, 0, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        sizePolicy1.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_2, 3, 1, 1, 1);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        sizePolicy1.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_3, 3, 2, 1, 1);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        sizePolicy1.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_add, 3, 3, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        sizePolicy1.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_0, 4, 0, 1, 2);

        btn_dian = new QPushButton(centralwidget);
        btn_dian->setObjectName(QString::fromUtf8("btn_dian"));
        sizePolicy1.setHeightForWidth(btn_dian->sizePolicy().hasHeightForWidth());
        btn_dian->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_dian, 4, 2, 1, 1);

        btn_eql = new QPushButton(centralwidget);
        btn_eql->setObjectName(QString::fromUtf8("btn_eql"));
        sizePolicy1.setHeightForWidth(btn_eql->sizePolicy().hasHeightForWidth());
        btn_eql->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_eql, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(1, 17);
        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 358, 22));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "\350\256\241\347\256\227\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("calculator", "0", nullptr));
        btn_ac->setText(QCoreApplication::translate("calculator", "AC", nullptr));
        btn_addsub->setText(QCoreApplication::translate("calculator", "+/-", nullptr));
        btn_del->setText(QCoreApplication::translate("calculator", "%", nullptr));
        btn_div->setText(QCoreApplication::translate("calculator", "\303\267", nullptr));
        btn_7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        btn_mul->setText(QCoreApplication::translate("calculator", "x", nullptr));
        btn_4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        btn_sub->setText(QCoreApplication::translate("calculator", "-", nullptr));
        btn_1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        btn_add->setText(QCoreApplication::translate("calculator", "+", nullptr));
        btn_0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        btn_dian->setText(QCoreApplication::translate("calculator", ".", nullptr));
        btn_eql->setText(QCoreApplication::translate("calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
