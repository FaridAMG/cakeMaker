//
// Created by gustavo on 9/09/18.
//

#include "List.h"
#include <iostream>
#include <cstdlib>
#include "Node.h"
using namespace std;


List::List(){
    this->_length = 0;
    this->_head = NULL;
}
/*
 * Receives a *cake and saves it in the first position of the list.
 * @params: *pCake(Type: Cake *)
 */
void List::takeIn(Cake *pCake) {
    Node* node = new Node();
    node->_cake = *pCake;
    node->_next = this->_head;
    this->_head = node;
    this->_length++;
}
/*
 * Receives a cake and saves it in the first position of the list.
 * @params: pCake(Type: Cake)
 */
void List::takeIn(Cake pCake) {
    Node* node = new Node();
    node->_cake = pCake;
    node->_next = this->_head;
    this->_head = node;
    this->_length++;
}
/*
 * Removes the element with the matching ID
 * @params: pId (Type: int)
 */
void List::takeOut(int pId) {

    if(this->_head->_cake.getId()== pId)
        this->_head = this->_head->_next;

    Node *delet = this-> _head;
    Node *temp;

    while (delet){
        if(delet->_cake.getId() == pId) {
            temp->_next = delet->_next;

            break;
        }
        temp = delet;
        delet = delet->_next;
    }
}
/*
 * Retrieves the element with the matching ID
 * @params: pId (Type: int)
 * @return delet (Type: Cake)
 */
Cake List::move(int pId) {

    if(this->_head->_cake.getId()== pId)
        this->_head = this->_head->_next;

    Node *delet = this-> _head;
    Node *temp;

    while (delet){
        if(delet->_cake.getId() == pId) {
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
/*
 * Finds the ID of the heaviest cake currently in the list.
 * @return _cake->_id (Type: int)
 */
int List::findHeavyCake() {
    Node *temp = this->_head;
    Node *heavy = this->_head;
    while (temp){
        if(temp->_cake.getActualWeight() >= heavy->_cake.getActualWeight())
            heavy = temp;
        temp = temp->_next;
    }
    std::cout << "Heaviest cake ID" << ": "<< heavy->_cake.getId() << std::endl;
    return heavy->_cake.getId();
}
/*
 * Finds the weight of the heaviest cake currently in the list
 * @return _cake->_actualWeight
 */

int List::findHeavyWeight() {
    Node *temp = this->_head;
    Node *heavy = this->_head;
    while (temp){
        if(temp->_cake.getActualWeight() >= heavy->_cake.getActualWeight())
            heavy = temp;
        temp = temp->_next;
    }
    std::cout << "Heaviest cake weight" << ": "<< heavy->_cake.getActualWeight() << std::endl;
    return heavy->_cake.getActualWeight();
}
/*
 * Returns the current Total Weight of the list based off the weight of each individual member.
 * @return weight (Type: int)
 */
int List::actualWeight() {
    Node *temp = this->_head;
    int weight=0;
    while (temp){
        weight+= temp->_cake.getActualWeight();
        temp = temp->_next;
    }
    std::cout << "Current Total Weight" << ": "<< weight << std::endl;
    return weight;
}
/*
 * Prints the list
 */
void List::print(){
    Node* head = this->_head;
    int i = 1;
    while(head){
        std::cout << "ID Cake " << i << ": " << head->_cake.getId()  << std::endl;
        head = head->_next;
        i++;
    }
}
void List::setMaxHours(int pMaxHours){
    this->_maxHours= pMaxHours;
}
int List::getMaxHours() {
    return this->_maxHours;
}

