//
// Created by gustavo on 9/09/18.
//

#include "CakeTemp.h"
#include <string>
#include "iostream"


void Cake::startThread() {
    std:: cout << "A cake thread has been initialized";
}

int Cake::getId() {
    return this->_id;
}

void Cake::setId(int pId) {
    this->_id = pId;
    std:: cout << "Id has been changed";
}

int Cake::getActualWeight() {
    return  this->_actualWeight;
}

void Cake::setActualWeight(int pActualWeight) {
    this->_actualWeight = pActualWeight;
    std:: cout << "Actual weight has been changed";
}

bool Cake::getIsReady() {
    return this->_isReady;
}

void Cake::setIsReady(bool pIsReady) {
    this->_isReady = pIsReady;
    std:: "Is Ready has been changed";
}