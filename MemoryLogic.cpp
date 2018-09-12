//
// Created by gustavo on 10/09/18.
//

#include "iostream"
#include <string>
#include "CakeTemp.h"
#include "ListTemp.h"
#include "QueueTemp.h"
#include "MemoryLogic.h"
#include <thread>
#include <unistd.h>



MemoryLogic::MemoryLogic(Queue pWaitList, List pProductLine, List pSwap) {
    this->memoryState = true;
    this->_waitLine = pWaitList;
    this->_productLine = pProductLine;
    this->_swap = pSwap;
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

int MemoryLogic::findProductLineHeavyCake() {
    return this->_productLine.findHeavyCake();
}

bool MemoryLogic::checkProductSpace(int pCakeSize) {
    if ((getProductLine().actualWeight() + pCakeSize) >= getProductLine().getMaxHours()){
        std:: cout << "The cake weight exceeds the max weight capaticty of the production line" << std::endl;
        return false;
    }
    else{
        std::cout << "There´s enough space in the production line for the cake" << std::endl;
        return true;
    }
}

bool MemoryLogic::checkSwapSpace(int pCakeSize) {
    if ((getSwap().actualWeight() + pCakeSize) >= getSwap().getMaxHours()){
        std:: cout << "The cake weight exceeds the max weight capaticty of the production line" << std::endl;
        return false;
    }
    else{
        std::cout << "There´s enough space in the production line for the cake" << std::endl;
        return true;
    }
}

void MemoryLogic::runLogic() {
    while(this->memoryState) {
        if (getWaitLine().isEmpty()) {
            std::cout << "Wait line is empty" << std::endl;
        } else {
            std::cout << "Wait line has items" << std::endl;
            if (checkProductSpace(getWaitLine().getFirstWeight())) {
                Cake cake = getWaitLine().pull();
                getProductLine().takeIn(cake);
                cake.startThread();
                std::cout << "A cake has been introduced to the production line" << std::endl;
                delay(5);
            } else {
                if (checkSwapSpace(getProductLine().findHeavyWeight())) {
                    Cake cake = getProductLine().move(findProductLineHeavyCake());
                    getSwap().takeIn(cake);
                } else {
                    std::cout << "There´s no space in the swap memory" << std::endl;
                }
            }
        }
    }
}

int MemoryLogic::delay(int pSeconds){
    sleep(pSeconds);
}


