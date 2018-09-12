#include "mainwindow.h"
#include <QApplication>
#include "LinkedList.h"
#include "Cake.h"
#include "Cake.cpp"
#include "List.cpp"
#include "Queue.h"
#include "Queue.cpp"
#include "iostream"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    /////Try cases for the Structures////////
    /*List *list2 = new List();
    List *cakes = new List();
    Queue *queue = new Queue();
    queue->isEmpty();


    cakes->takeIn(new Cake(101,55));
    cakes->takeIn(new Cake(103,56));
    cakes->takeIn(new Cake(104,54));
    cakes->takeIn(new Cake(105,53));
    cakes->takeIn(new Cake(106,52));

    std::cout << "Cakes: " << std::endl;
    cakes->print();
    cakes->takeOut(101);

    std::cout << "Cakes: " << std::endl;
    cakes->print();
    std::cout << "Queue: " << std::endl;
    queue->print();


    Cake cakeOut = cakes->move(104);

    std::cout << "Cakes: " << std::endl;
    cakes->print();

    queue->push(cakeOut);
    queue->push(new Cake(1003,90));

    int test = queue->getFirstWeight();
    std::cout<< "Heads weight: " <<test <<endl;
    queue->pull();
    test = queue->getFirstWeight();
    std::cout<< "Heads weight: " <<test <<endl;
    std::cout << "Queue update: " << std::endl;
    queue->print(); */
    return a.exec();
}
