//
// Created by gustavo on 9/09/18.
//

#include <iostream>
#include "QueueTemp.h"
#include <string>


Queue::Queue() {

}

void Queue::push(Cake pCake) {
    std::cout << "A cake has been added";
}

Cake Queue::pull() {
    Cake cake;
    return cake;
}

bool isEmpty(){
    return false;
}




