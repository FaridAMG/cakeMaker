//
// Created by gustavo on 9/09/18.
//

#ifndef CAKEMAKER_MEMORYLOGIC_H
#define CAKEMAKER_MEMORYLOGIC_H

#include "iostream"
#include <string>
#include "CakeTemp.h"
#include "ListTemp.h"
#include "QueueTemp.h"

class MemoryLogic{
    private:
        List _productLine;
        Queue _waitLine;
        List _swap;

    public:

        MemoryLogic();

        void startLogic();

        List getProductLine();

        List getSwap();

        Queue getWaitLine();

        int findHeavyCake();

        bool checkSpace(int pCakeSize);

};

#endif //CAKEMAKER_MEMORYLOGIC_H
