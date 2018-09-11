//
// Created by gustavo on 9/09/18.
//

#ifndef CAKEMAKER_LIST_H
#define CAKEMAKER_LIST_H

#include "CakeTemp.h"

class List{
    private:

    int _maxHours;

    public:

        List();

        void takeOut(int pId);
        void takeIn(Cake pCake);
        int getMaxHours();
        void setMaxHours(int pMaxHours);
        Cake move(int pId);
        int findHeavyCake();
        int actualWeight();


};

#endif //CAKEMAKER_LIST_H
