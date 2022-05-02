#include "widget.h"

#include <QtWidgets>
#include "Button.h"

#include <QApplication>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    Buttons buttons;

    buttons.show();
    return app.exec();
}
