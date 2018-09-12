//
// Created by alex on 12/09/18.
//
#include "Node.h"
#ifndef CAKEMAKER_QUEUE_H
#define CAKEMAKER_QUEUE_H


class Queue {
public:
    Node *_head;
    int _length;

    bool isEmpty();
    void push(Cake pCake);
    void push(Cake *pCake);
    Cake pull();
    int getFirstWeight();
    Queue();

    void print();
};


#endif //CAKEMAKER_QUEUE_H
