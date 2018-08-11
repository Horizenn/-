/********************************************************************************
** Form generated from reading UI file 'groupbox.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBOX_H
#define UI_GROUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GroupBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QGroupBox *GroupBox)
    {
        if (GroupBox->objectName().isEmpty())
            GroupBox->setObjectName(QStringLiteral("GroupBox"));
        GroupBox->resize(400, 300);
        label = new QLabel(GroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 90, 31, 20));
        label_2 = new QLabel(GroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 150, 31, 20));
        pushButton = new QPushButton(GroupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 210, 71, 31));
        lineEdit = new QLineEdit(GroupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 90, 113, 20));
        lineEdit_2 = new QLineEdit(GroupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 150, 113, 20));
        pushButton_2 = new QPushButton(GroupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 210, 71, 31));

        retranslateUi(GroupBox);

        QMetaObject::connectSlotsByName(GroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBox)
    {
        GroupBox->setWindowTitle(QApplication::translate("GroupBox", "\350\210\252\347\251\272\345\224\256\347\245\250\347\263\273\347\273\237", Q_NULLPTR));
        GroupBox->setTitle(QApplication::translate("GroupBox", "\350\210\252\347\251\272\347\245\250\345\212\241\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label->setText(QApplication::translate("GroupBox", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("GroupBox", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GroupBox", "\345\256\242\346\210\267\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GroupBox", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GroupBox: public Ui_GroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBOX_H
