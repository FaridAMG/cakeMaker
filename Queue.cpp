//
// Created by gustavo on 9/09/18.
//

#include "Queue.h"
#include <iostream>
#include <cstdlib>

using namespace std;
/*
 * Constructor of the Queue class
 */
Queue::Queue(){
    this->_head = NULL;
    this->_length=0;
}

/*
 * Checks if the queue is empty and returns a boolean value accordingly.
 */
bool Queue::isEmpty() {
    if (this->_head == nullptr) {
        //cout<<"Queue is empty" <<endl;
        return true;
    }else {
        cout<<"Queue is not empty"<<endl;
        return false;
    }
}

/*
 * Adds a cake type object to the queue
 * @Params: pCake(type: Cake)
 */
void Queue::push(Cake pCake){
    Node* node = new Node();
    node->_cake = pCake;
    Node* temp = this->_head;
    if (this->_head == nullptr){
        this->_head=node;
    }else{
        for(int i=0; i < this->_length; i++){
            temp = temp->_next;
        }
        temp->_next= node;
        this->_length+=1;
    }
}

/*
 * Adds a *cake type object to the queue
 * @Params: *pCake(type: Cake *)
 */
void Queue::push(Cake *pCake){
    Node* node = new Node();
    node->_cake = *pCake;
    Node* temp = this->_head;
    if (this->_head == nullptr){
        this->_head=node;
    }else{
        for(int i=0; i < this->_length; i++){
            temp = temp->_next;
        }
        temp->_next= node;
        this->_length+=1;
    }

}
/*
 * Pulls the first cake form the queue
 * @return: cake(Type: Cake)
 */
Cake Queue::pull(){
    Node *temp = this->_head;
    this->_head = this->_head->_next;
    cout<< "Pulled cake id :" << temp->_cake.getId()<<endl;
    this->_length-=1;
    return temp->_cake;
}
/*
 * Peeks the Weight value of the element in queue.
 * @return cake->_actualWeight(Type: int)
 */
int Queue::getFirstWeight() {
    return this->_head->_cake.getActualWeight();
}
/*
 * Prints the current id values in queue.
 */
void Queue::print(){
    Node* head = this->_head;
    int i = 1;
    while(head){
        std::cout << "ID Cake in queue  " << i << ": " << head->_cake.getId()  << std::endl;
        head = head->_next;
        i++;
    }
}

int Queue::getFirstType() {
    std:: cout << "Cake of type :" << this->_head->_cake.getType() << std::endl;
    return this->_head->_cake.getType();
}

int Queue::getFirstId() {
    std:: cout << "Cake of type :" << this->_head->_cake.getType() << std::endl;
    return this->_head->_cake.getId();
}



