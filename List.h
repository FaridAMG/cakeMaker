//
// Created by alex on 12/09/18.
//

#ifndef CAKEMAKER_LIST_H
#define CAKEMAKER_LIST_H
#include "Cake.h"
#include "Node.h"

class List {
private:
    int _maxHours;

public:
    int _length;
    Node *_head;

    List();

    void takeOut(int pId);
    void takeIn(Cake pCake);
    void takeIn(Cake *pCcake);
    int getMaxHours();
    void setMaxHours(int pMaxHours);
    Cake move(int pId);
    int findHeavyCake();
    int findHeavyWeight();
    int actualWeight();

    void print();
};


#endif //CAKEMAKER_LIST_H
