#include <QApplication>
#include "mainwindow.h"
#include "board.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Board board;
    board.show();

    return a.exec();
}
