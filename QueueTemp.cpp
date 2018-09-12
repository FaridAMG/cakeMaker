//
// Created by gustavo on 9/09/18.
//

#include <iostream>
#include "QueueTemp.h"
#include <string>


Queue::Queue() {

}

void Queue::push(Cake pCake) {
    std::cout << "A cake has been added" << std::endl;
}

Cake Queue::pull() {
    Cake cake(1,1);
    return cake;
}

bool Queue::isEmpty(){
    return false;
}

int Queue::getFirstWeight() {
    return 1;
}




