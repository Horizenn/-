/********************************************************************************
** Form generated from reading UI file 'jipiaogoumai.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JIPIAOGOUMAI_H
#define UI_JIPIAOGOUMAI_H

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

class Ui_jipiaogoumai
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QWizardPage *jipiaogoumai)
    {
        if (jipiaogoumai->objectName().isEmpty())
            jipiaogoumai->setObjectName(QStringLiteral("jipiaogoumai"));
        jipiaogoumai->resize(368, 289);
        label = new QLabel(jipiaogoumai);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 131, 21));
        label_2 = new QLabel(jipiaogoumai);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 121, 16));
        label_3 = new QLabel(jipiaogoumai);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 150, 111, 16));
        lineEdit = new QLineEdit(jipiaogoumai);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 50, 113, 20));
        lineEdit_2 = new QLineEdit(jipiaogoumai);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 100, 113, 20));
        lineEdit_3 = new QLineEdit(jipiaogoumai);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 150, 113, 20));
        pushButton = new QPushButton(jipiaogoumai);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 210, 75, 23));

        retranslateUi(jipiaogoumai);

        QMetaObject::connectSlotsByName(jipiaogoumai);
    } // setupUi

    void retranslateUi(QWizardPage *jipiaogoumai)
    {
        jipiaogoumai->setWindowTitle(QApplication::translate("jipiaogoumai", "\346\234\272\347\245\250\350\264\255\344\271\260", Q_NULLPTR));
        label->setText(QApplication::translate("jipiaogoumai", "\350\257\267\350\276\223\345\205\245\350\264\255\344\271\260\350\200\205\345\256\242\346\210\267\347\274\226\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("jipiaogoumai", "\350\257\267\350\276\223\345\205\245\346\254\262\350\264\255\347\232\204\350\210\252\347\217\255\347\274\226\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("jipiaogoumai", "\350\257\267\350\276\223\345\205\245\346\254\262\350\264\255\347\232\204\350\210\261\344\275\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("jipiaogoumai", "\350\264\255\344\271\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class jipiaogoumai: public Ui_jipiaogoumai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JIPIAOGOUMAI_H
