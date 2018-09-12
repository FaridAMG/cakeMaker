/*#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}*/

#include <iostream>
#include <iostream>
#include <string>
#include <thread>
#include "MemoryLogic.h"
#include <unistd.h>


int main(){

    Queue queue;
    List productLine;
    List swap;

    MemoryLogic productionLine(queue,productLine,swap);

    //std:: cout << productionLine.memoryState << std::endl;

    std::thread productThread(&MemoryLogic::runLogic, productionLine);

    //productionLine.memoryState = false;

    //std:: cout << productionLine.memoryState << std::endl;

    productThread.join();
}
