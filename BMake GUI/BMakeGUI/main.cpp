#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel label("Hello from QT");
    label.setStyleSheet("QLabel:hover { color: rgb(60, 179, 113)}");
    label.show();
    return a.exec();
}
