
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
QApplication app(argc, argv);
QLabel *label = new QLabel("<h1><font color=red>Hello World!</font></h1>");
label->show();
return app.exec();
}
