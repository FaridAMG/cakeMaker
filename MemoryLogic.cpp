//
// Created by gustavo on 10/09/18.
//

#include "iostream"
#include <string>
#include "Cake.h"
#include "List.h"
#include "Queue.h"
#include "MemoryLogic.h"
#include <thread>
#include <unistd.h>
#include "ChocolateCake.h"
#include "StrawBCake.h"
#include "VanillaCake.h"

/*Constructor*/
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

/*This method finds the heaviest cake from the production line*/
int MemoryLogic::findProductLineHeavyCake() {
    return this->_productLine.findHeavyCake();
}

/*This method checks the production line list space*/
bool MemoryLogic::checkProductSpace(int pCakeSize) {
    if ((this->_productLine.actualWeight() + pCakeSize) >= this->_productLine.getMaxHours()){
        std:: cout << "The cake weight exceeds the max weight capaticty of the production line" << std::endl;
        return false;
    }
    else{
        std::cout << "There´s enough space in the production line for the cake" << std::endl;
        return true;
    }
}

/*This method checks the swap list space*/
bool MemoryLogic::checkSwapSpace(int pCakeSize) {
    if ((this->_swap.actualWeight() + pCakeSize) >= this->_swap.getMaxHours()){
        std:: cout << "The cake weight exceeds the max weight capaticty of the production line" << std::endl;
        return false;
    }
    else{
        std::cout << "There´s enough space in the production line for the cake" << std::endl;
        return true;
    }
}

/*This method controls all the logic and managment of the queue, swap, and product line*/
void MemoryLogic::runLogic() {
    while(this->memoryState) {
        if (this->_waitLine.isEmpty()) {
            std::cout << "Wait line is empty" << std::endl;
            delay(3);
        }
        else {
            std::cout << "Wait line has items" << std::endl;
            if (checkProductSpace(this->_waitLine.getFirstWeight())) {
                if(_waitLine.getFirstType() == 1){
                    int id = _waitLine.getFirstId();
                    ChocolateCake cake = ChocolateCake (_waitLine.pull());
                    cake.setId(id);
                    this->_productLine.takeIn(cake);
                    std::cout << "A cake has been introduced to the production line" << std::endl;
                    std::thread cake_thread (&Cake::runTheChef, cake);
                    cake_thread.detach();
                    _waitLine.print();
                    delay(20);
                }
                else if(_waitLine.getFirstType() == 2){
                    int id = _waitLine.getFirstId();
                    VanillaCake cake = VanillaCake (_waitLine.pull());
                    cake.setId(id);
                    this->_productLine.takeIn(cake);
                    std::cout << "A cake has been introduced to the production line" << std::endl;
                    std::thread cake_thread (&Cake::runTheChef, cake);
                    cake_thread.detach();
                    _waitLine.print();
                    delay(20);
                }
                else if(_waitLine.getFirstType() == 3){
                    int id = _waitLine.getFirstId();
                    StrawBCake cake = StrawBCake (_waitLine.pull());
                    cake.setId(id);
                    this->_productLine.takeIn(cake);
                    std::cout << "A cake has been introduced to the production line" << std::endl;
                    std::thread cake_thread (&Cake::runTheChef, cake);
                    cake_thread.detach();
                    _waitLine.print();
                    delay(20);
                }
            }
            else {
                if (checkSwapSpace(this->_productLine.findHeavyWeight())) {
                    Cake cake = this->_productLine.move(findProductLineHeavyCake());
                    this->_swap.takeIn(cake);
                } else {
                    std::cout << "There´s no space in the swap memory" << std::endl;
                }
            }
        }
    }


}

/*This method is used to delay the proccess some seconds*/
int MemoryLogic::delay(int pSeconds){
    sleep(pSeconds);
}


