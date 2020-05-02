/********************************************************************************
** Form generated from reading UI file 'seestudent.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEESTUDENT_H
#define UI_SEESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_seeStudent
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbb_method;
    QLineEdit *le_cnt;
    QPushButton *btn_search;
    QTableView *tableView;

    void setupUi(QDialog *seeStudent)
    {
        if (seeStudent->objectName().isEmpty())
            seeStudent->setObjectName(QString::fromUtf8("seeStudent"));
        seeStudent->resize(650, 450);
        verticalLayout = new QVBoxLayout(seeStudent);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cbb_method = new QComboBox(seeStudent);
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->setObjectName(QString::fromUtf8("cbb_method"));

        horizontalLayout->addWidget(cbb_method);

        le_cnt = new QLineEdit(seeStudent);
        le_cnt->setObjectName(QString::fromUtf8("le_cnt"));

        horizontalLayout->addWidget(le_cnt);

        btn_search = new QPushButton(seeStudent);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));

        horizontalLayout->addWidget(btn_search);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(seeStudent);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(seeStudent);

        QMetaObject::connectSlotsByName(seeStudent);
    } // setupUi

    void retranslateUi(QDialog *seeStudent)
    {
        seeStudent->setWindowTitle(QCoreApplication::translate("seeStudent", "Dialog", nullptr));
        cbb_method->setItemText(0, QCoreApplication::translate("seeStudent", "\350\257\267\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217", nullptr));
        cbb_method->setItemText(1, QCoreApplication::translate("seeStudent", "\346\214\211\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        cbb_method->setItemText(2, QCoreApplication::translate("seeStudent", "\346\214\211\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        cbb_method->setItemText(3, QCoreApplication::translate("seeStudent", "\346\214\211\351\231\242\347\263\273\346\237\245\350\257\242", nullptr));

        btn_search->setText(QCoreApplication::translate("seeStudent", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seeStudent: public Ui_seeStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEESTUDENT_H
