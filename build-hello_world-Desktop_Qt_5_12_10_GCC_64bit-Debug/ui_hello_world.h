/********************************************************************************
** Form generated from reading UI file 'hello_world.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_WORLD_H
#define UI_HELLO_WORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hello_world
{
public:

    void setupUi(QWidget *hello_world)
    {
        if (hello_world->objectName().isEmpty())
            hello_world->setObjectName(QString::fromUtf8("hello_world"));
        hello_world->resize(800, 600);

        retranslateUi(hello_world);

        QMetaObject::connectSlotsByName(hello_world);
    } // setupUi

    void retranslateUi(QWidget *hello_world)
    {
        hello_world->setWindowTitle(QApplication::translate("hello_world", "hello_world", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hello_world: public Ui_hello_world {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_WORLD_H
