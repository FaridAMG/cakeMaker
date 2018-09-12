//
// Created by gustavo on 9/09/18.
//

#include <string>
#include <iostream>
#include "ListTemp.h"

List::List() {
    setMaxHours(10);
}

void List::takeOut(int pId) {
    std::cout << "A cake has been taken out" << std::endl;
}

void List::takeIn(Cake pCake) {
    std:: cout << "A cake has been added" << std::endl;
}

int List::getMaxHours() {
    return this->_maxHours;
}

void List::setMaxHours(int pMaxHours) {
    this->_maxHours = pMaxHours;
    std:: cout << "Max hours has been setted" << std::endl;

}

Cake List::move(int pId) {
    Cake cake(1,1);
    return cake;
}

int List::findHeavyCake() {
    return 0;
}

int List::actualWeight() {
    return 1;
}

int List::findHeavyWeight() {
    return 1;
}

