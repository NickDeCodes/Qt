/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addstudent
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *le_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *le_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *rbtn_male;
    QRadioButton *rbtn_fmale;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *cbb_age;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *cbb_y;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_cancal;
    QButtonGroup *sexGroup;
    QButtonGroup *insGroup;

    void setupUi(QDialog *addstudent)
    {
        if (addstudent->objectName().isEmpty())
            addstudent->setObjectName(QString::fromUtf8("addstudent"));
        addstudent->resize(350, 480);
        verticalLayout = new QVBoxLayout(addstudent);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(addstudent);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(23);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(addstudent);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        le_name = new QLineEdit(addstudent);
        le_name->setObjectName(QString::fromUtf8("le_name"));
        le_name->setClearButtonEnabled(true);

        horizontalLayout->addWidget(le_name);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(addstudent);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        le_id = new QLineEdit(addstudent);
        le_id->setObjectName(QString::fromUtf8("le_id"));
        le_id->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(le_id);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(addstudent);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        rbtn_male = new QRadioButton(addstudent);
        sexGroup = new QButtonGroup(addstudent);
        sexGroup->setObjectName(QString::fromUtf8("sexGroup"));
        sexGroup->addButton(rbtn_male);
        rbtn_male->setObjectName(QString::fromUtf8("rbtn_male"));

        horizontalLayout_3->addWidget(rbtn_male);

        rbtn_fmale = new QRadioButton(addstudent);
        sexGroup->addButton(rbtn_fmale);
        rbtn_fmale->setObjectName(QString::fromUtf8("rbtn_fmale"));

        horizontalLayout_3->addWidget(rbtn_fmale);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(addstudent);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        cbb_age = new QComboBox(addstudent);
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->setObjectName(QString::fromUtf8("cbb_age"));

        horizontalLayout_4->addWidget(cbb_age);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);
        horizontalLayout_4->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(addstudent);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        cbb_y = new QComboBox(addstudent);
        cbb_y->addItem(QString());
        cbb_y->addItem(QString());
        cbb_y->addItem(QString());
        cbb_y->addItem(QString());
        cbb_y->setObjectName(QString::fromUtf8("cbb_y"));

        horizontalLayout_5->addWidget(cbb_y);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 4);
        horizontalLayout_5->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(addstudent);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox = new QCheckBox(addstudent);
        insGroup = new QButtonGroup(addstudent);
        insGroup->setObjectName(QString::fromUtf8("insGroup"));
        insGroup->setExclusive(false);
        insGroup->addButton(checkBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(addstudent);
        insGroup->addButton(checkBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        checkBox_3 = new QCheckBox(addstudent);
        insGroup->addButton(checkBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(addstudent);
        insGroup->addButton(checkBox_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btn_ok = new QPushButton(addstudent);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        horizontalLayout_7->addWidget(btn_ok);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        btn_cancal = new QPushButton(addstudent);
        btn_cancal->setObjectName(QString::fromUtf8("btn_cancal"));

        horizontalLayout_7->addWidget(btn_cancal);

        horizontalLayout_7->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(addstudent);

        QMetaObject::connectSlotsByName(addstudent);
    } // setupUi

    void retranslateUi(QDialog *addstudent)
    {
        addstudent->setWindowTitle(QCoreApplication::translate("addstudent", "addstudent", nullptr));
        label->setText(QCoreApplication::translate("addstudent", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_2->setText(QCoreApplication::translate("addstudent", "\345\247\223\345\220\215\357\274\232", nullptr));
        le_name->setPlaceholderText(QCoreApplication::translate("addstudent", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("addstudent", "\345\255\246\345\217\267\357\274\232", nullptr));
        le_id->setPlaceholderText(QCoreApplication::translate("addstudent", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("addstudent", "\346\200\247\345\210\253\357\274\232", nullptr));
        rbtn_male->setText(QCoreApplication::translate("addstudent", "\347\224\267", nullptr));
        rbtn_fmale->setText(QCoreApplication::translate("addstudent", "\345\245\263", nullptr));
        label_5->setText(QCoreApplication::translate("addstudent", "\345\271\264\351\276\204\357\274\232", nullptr));
        cbb_age->setItemText(0, QCoreApplication::translate("addstudent", "18", nullptr));
        cbb_age->setItemText(1, QCoreApplication::translate("addstudent", "19", nullptr));
        cbb_age->setItemText(2, QCoreApplication::translate("addstudent", "20", nullptr));
        cbb_age->setItemText(3, QCoreApplication::translate("addstudent", "21", nullptr));
        cbb_age->setItemText(4, QCoreApplication::translate("addstudent", "22", nullptr));
        cbb_age->setItemText(5, QCoreApplication::translate("addstudent", "23", nullptr));
        cbb_age->setItemText(6, QCoreApplication::translate("addstudent", "24", nullptr));
        cbb_age->setItemText(7, QCoreApplication::translate("addstudent", "25", nullptr));

        label_6->setText(QCoreApplication::translate("addstudent", "\351\231\242\347\263\273\357\274\232", nullptr));
        cbb_y->setItemText(0, QCoreApplication::translate("addstudent", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", nullptr));
        cbb_y->setItemText(1, QCoreApplication::translate("addstudent", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", nullptr));
        cbb_y->setItemText(2, QCoreApplication::translate("addstudent", "\345\267\245\345\225\206\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        cbb_y->setItemText(3, QCoreApplication::translate("addstudent", "\346\261\211\350\257\255\350\250\200\346\226\207\345\255\246\351\231\242", nullptr));

        label_7->setText(QCoreApplication::translate("addstudent", "\345\205\264\350\266\243\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("addstudent", "\347\257\256\347\220\203", nullptr));
        checkBox_2->setText(QCoreApplication::translate("addstudent", "\346\216\222\347\220\203", nullptr));
        checkBox_3->setText(QCoreApplication::translate("addstudent", "\350\266\263\347\220\203", nullptr));
        checkBox_4->setText(QCoreApplication::translate("addstudent", "\347\276\275\346\257\233\347\220\203", nullptr));
        btn_ok->setText(QCoreApplication::translate("addstudent", "\347\241\256\345\256\232", nullptr));
        btn_cancal->setText(QCoreApplication::translate("addstudent", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addstudent: public Ui_addstudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
