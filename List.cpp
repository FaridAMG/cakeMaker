//
// Created by alex on 12/09/18.
//

#include "List.h"
#include <iostream>
#include <cstdlib>
#include "Node.h"
#include "Node.cpp"
using namespace std;


List::List(){
    this->_length = 0;
    this->_head = NULL;
}

void List::takeIn(Cake *pCake) {
    Node* node = new Node();
    node->_cake = *pCake;
    node->_next = this->_head;
    this->_head = node;
    this->_length++;
}

void List::takeIn(Cake pCake) {
    Node* node = new Node();
    node->_cake = pCake;
    node->_next = this->_head;
    this->_head = node;
    this->_length++;
}

void List::takeOut(int pId) {

    if(this->_head->_cake._id== pId)
        this->_head = this->_head->_next;

    Node *delet = this-> _head;
    Node *temp;

    while (delet){
        if(delet->_cake._id == pId) {
            temp->_next = delet->_next;
            /* cout<< temp->_cake._id<<endl;
             cout<< temp->_next->_cake._id<<endl;*/
            break;
        }
        temp = delet;
        // cout<< temp->_cake._id<<endl;
        delet = delet->_next;
    }
}

Cake List::move(int pId) {

    if(this->_head->_cake._id== pId)
        this->_head = this->_head->_next;

    Node *delet = this-> _head;
    Node *temp;

    while (delet){
        if(delet->_cake._id == pId) {
            temp->_next = delet->_next;
            /* cout<< temp->_cake._id<<endl;
             cout<< temp->_next->_cake._id<<endl;*/
            return delet->_cake;
        }
        temp = delet;
        // cout<< temp->_cake._id<<endl;
        delet = delet->_next;
    }
}

int List::findHeavyCake() {
    Node *temp = this->_head;
    Node *heavy = this->_head;
    while (temp){
        if(temp->_cake._actualWeight >= heavy->_cake._actualWeight)
            heavy = temp;
        temp = temp->_next;
    }
    std::cout << "Heaviest cake ID" << ": "<< heavy->_cake._id << std::endl;
    return heavy->_cake._id;
}

int List::findHeavyWeight() {
    Node *temp = this->_head;
    Node *heavy = this->_head;
    while (temp){
        if(temp->_cake._actualWeight >= heavy->_cake._actualWeight)
            heavy = temp;
        temp = temp->_next;
    }
    std::cout << "Heaviest cake weight" << ": "<< heavy->_cake._actualWeight << std::endl;
    return heavy->_cake._actualWeight;
}

int List::actualWeight() {
    Node *temp = this->_head;
    int weight=0;
    while (temp){
        weight+= temp->_cake._actualWeight;
        temp = temp->_next;
    }
    std::cout << "Current Total Weight" << ": "<< weight << std::endl;
    return weight;
}

void List::print(){
    Node* head = this->_head;
    int i = 1;
    while(head){
        std::cout << "ID Cake " << i << ": " << head->_cake._id  << std::endl;
        head = head->_next;
        i++;
    }
}