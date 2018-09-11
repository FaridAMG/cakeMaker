//
// Created by gustavo on 9/09/18.
//

#include "CakeTemp.h"
#include <string>
#include "iostream"

Cake::Cake() {

}

void Cake::startThread() {
    std:: cout << "A cake thread has been initialized" << std::endl;
}

int Cake::getId() {
    return this->_id;
}

void Cake::setId(int pId) {
    this->_id = pId;
    std:: cout << "Id has been changed" << std::endl;
}

int Cake::getActualWeight() {
    return  this->_actualWeight;
}

void Cake::setActualWeight(int pActualWeight) {
    this->_actualWeight = pActualWeight;
    std:: cout << "Actual weight has been changed" << std::endl;
}

bool Cake::getIsReady() {
    return this->_isReady;
}

void Cake::setIsReady(bool pIsReady) {
    this->_isReady = pIsReady;
    std:: cout << "Is Ready has been changed" << std::endl;
}