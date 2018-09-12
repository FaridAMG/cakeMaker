//
// Created by gustavo on 9/09/18.
//

#ifndef CAKEMAKER_QUEUE_H
#define CAKEMAKER_QUEUE_H

#include <string>
#include "CakeTemp.h"

class Queue{
    public:
        Queue();

        void push(Cake pCake);
        Cake pull();
        bool isEmpty();
        int getFirstWeight();

};

#endif //CAKEMAKER_QUEUE_H
