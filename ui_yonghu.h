/********************************************************************************
** Form generated from reading UI file 'yonghu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YONGHU_H
#define UI_YONGHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(400, 300);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 54, 12));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 70, 54, 12));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 70, 54, 12));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 75, 23));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 140, 75, 23));
        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 180, 75, 23));
        pushButton_4 = new QPushButton(Form);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 220, 75, 23));
        pushButton_5 = new QPushButton(Form);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 120, 75, 23));
        pushButton_6 = new QPushButton(Form);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 200, 75, 23));
        pushButton_7 = new QPushButton(Form);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(270, 160, 75, 23));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "\347\224\250\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form", "\350\256\242\347\245\250\347\263\273\347\273\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form", "\350\256\242\345\215\225\347\256\241\347\220\206", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form", "\346\267\273\345\212\240\347\224\250\346\210\267", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Form", "\345\210\240\351\231\244\347\224\250\346\210\267", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Form", "\346\237\245\347\234\213\347\224\250\346\210\267", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Form", "\344\277\256\346\224\271\347\224\250\346\210\267", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Form", "\346\237\245\347\234\213\350\210\252\347\272\277", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Form", "\346\234\272\347\245\250\350\264\255\344\271\260", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Form", "\346\237\245\347\234\213\350\256\242\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YONGHU_H
