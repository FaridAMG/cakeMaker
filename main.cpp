#include "mainwindow.h"
#include <QApplication>
#include <cakeCode/cakeFactory.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    //trying the class

    auto *cakeF = new cakeFactory();

    chocolateCake *chocoC = cakeF->createChocoCake();

    std::thread t1(chocoC->runTheChef());

    t1.join();

    //trying the class




    w.show();

    return a.exec();
}
