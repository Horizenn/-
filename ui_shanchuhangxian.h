/********************************************************************************
** Form generated from reading UI file 'shanchuhangxian.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHANCHUHANGXIAN_H
#define UI_SHANCHUHANGXIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_shanchuhangxian
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWizardPage *shanchuhangxian)
    {
        if (shanchuhangxian->objectName().isEmpty())
            shanchuhangxian->setObjectName(QStringLiteral("shanchuhangxian"));
        shanchuhangxian->resize(461, 337);
        lineEdit = new QLineEdit(shanchuhangxian);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 130, 71, 21));
        label = new QLabel(shanchuhangxian);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 70, 141, 21));
        pushButton = new QPushButton(shanchuhangxian);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 190, 71, 31));

        retranslateUi(shanchuhangxian);

        QMetaObject::connectSlotsByName(shanchuhangxian);
    } // setupUi

    void retranslateUi(QWizardPage *shanchuhangxian)
    {
        shanchuhangxian->setWindowTitle(QApplication::translate("shanchuhangxian", "\345\210\240\351\231\244\350\210\252\347\272\277", Q_NULLPTR));
        label->setText(QApplication::translate("shanchuhangxian", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\350\210\252\347\272\277\347\274\226\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("shanchuhangxian", "\345\210\240\351\231\244\350\210\252\347\272\277", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class shanchuhangxian: public Ui_shanchuhangxian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHANCHUHANGXIAN_H
