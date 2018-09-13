//
// Created by gustavo on 9/09/18.
//

#ifndef CAKEMAKER_MEMORYLOGIC_H
#define CAKEMAKER_MEMORYLOGIC_H

#include "iostream"
#include <string>
#include "Cake.h"
#include "List.h"
#include "Queue.h"
#include <thread>

class MemoryLogic{
    private:
        List _productLine;
        Queue _waitLine;
        List _swap;

    public:

        bool memoryState;

        MemoryLogic(Queue pWaitList, List pProductLine, List pSwap);

        List getProductLine();

        List getSwap();

        Queue getWaitLine();

        int findProductLineHeavyCake();

        bool checkProductSpace(int pCakeSize);

        bool checkSwapSpace(int pCakeSize);

        void runLogic();

        int delay(int pSeconds);

};

#endif //CAKEMAKER_MEMORYLOGIC_H
