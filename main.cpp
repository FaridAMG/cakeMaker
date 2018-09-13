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
#include "CakeFactory.h"
#include <unistd.h>

/*We create tome cakes, push them into a queue and start a thread that runs de memory logic*/
int main(){

    Queue queue;
    List productLine;
    List swap;

    productLine.setMaxHours(10);

    std:: cout << productLine.getMaxHours() << std::endl;

    CakeFactory _cakeFactory;

    Cake *cake_1 = _cakeFactory.createChocoCake();
    cake_1->setId(1);


    Cake *cake_2 = _cakeFactory.createStrawBCake();
    cake_2->setId(2);

    Cake *cake_3 = _cakeFactory.createVanillaCake();
    cake_3->setId(3);

    Cake *cake_4 = _cakeFactory.createVanillaCake();
    cake_4->setId(4);

    Cake *cake_5 = _cakeFactory.createVanillaCake();
    cake_5->setId(5);

    Cake *cake_6 = _cakeFactory.createChocoCake();
    cake_6->setId(6);

    std:: cout << "Cake with id " << cake_1->getId() << " has been created" << std::endl;
    std:: cout << "Cake with id " << cake_1->getId() << " is " << cake_1->_type << " type" << std::endl;

    std:: cout << "Cake with id " << cake_2->getId() << " has been created" << std::endl;
    std:: cout << "Cake with id " << cake_2->getId() << " is " << cake_2->_type << " type" << std::endl;

    std:: cout << "Cake with id " << cake_3->getId() << " has been created" << std::endl;
    std:: cout << "Cake with id " << cake_3->getId() << " is " << cake_2->_type << " type" << std::endl;

    std:: cout << "Cake with id " << cake_4->getId() << " has been created" << std::endl;
    std:: cout << "Cake with id " << cake_4->getId() << " is " << cake_2->_type << " type" << std::endl;

    std:: cout << "Cake with id " << cake_5->getId() << " has been created" << std::endl;
    std:: cout << "Cake with id " << cake_5->getId() << " is " << cake_2->_type << " type" << std::endl;

    std:: cout << "Cake with id " << cake_6->getId() << " has been created" << std::endl;
    std:: cout << "Cake with id " << cake_6->getId() << " is " << cake_2->_type << " type" << std::endl;


    queue.push(cake_1);
    queue.push(cake_2);
    queue.push(cake_3);
    queue.push(cake_4);
    queue.push(cake_5);
    queue.push(cake_6);



    queue.print();


    MemoryLogic productionLine(queue,productLine,swap);


    std::thread productThread(&MemoryLogic::runLogic, productionLine);

    productThread.join();
}
