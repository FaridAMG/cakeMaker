//
// Created by gustavo on 10/09/18.
//

#include "iostream"
#include <string>
#include "CakeTemp.h"
#include "ListTemp.h"
#include "QueueTemp.h"
#include "MemoryLogic.h"

MemoryLogic::MemoryLogic() {

}

List MemoryLogic::getProductLine() {
    return this->_productLine;
}

List MemoryLogic::getSwap() {
    return this->_swap;
}

Queue MemoryLogic::getWaitLine() {
    return this->_waitLine;
}

int MemoryLogic::findHeavyCake() {
    return this->_productLine.findHeavyCake();
}

bool MemoryLogic::checkSpace(int pCakeSize) {
    if ((this->_productLine.actualWeight() + pCakeSize) >= this->_productLine.getMaxHours()){
        std:: cout << "The cake weight exceeds the max weight capaticty of the production line" << std::endl;
        return false;
    }
    else{
        std::cout << "There´s enough space in the production line for the cake" << std::endl;
        return true;
    }
}

void MemoryLogic::startLogic() {

}