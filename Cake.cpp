//
// Created by farida on 06/09/18.
//

#include <ctime>
#include <iostream>
#include <thread>
#include "Cake.h"




void Cake::runTheChef() {

    _toDo = {1,2,3,4,5};//inserts things to do

    while(!_toDo.empty()){

        int num = _toDo.front();
        _toDo.pop_front();
        if(num == 1){
            fase = "mantecarPyrex";
            mantecarPyrex();
        }else if(num == 2){
            fase = "crearMezcla";
            crearMezcla();
        }else if(num == 3){
            fase = "hornearMezcla";
            hornearMezcla();
        }else if(num == 4){
            fase = "hacerTopping";
            hacerTopping();
        }else if(num == 5){
            fase = "ponerTopping";
            ponerTopping();
        }
        _ready.push_back(num);

    }

    if(_toDo.empty()){
        set_isReady(true);
    }

}

bool Cake::mantecarPyrex() {
    std::cout<< "mantecando pyrex de queque" << std::endl;
    set_actualWeight(10);
    timer(10);
    return true;
}

bool Cake::crearMezcla() {
    std::cout<< "creando mezcla de queque" << std::endl;
    set_actualWeight(0);
    timer(0);
    return true;
}

bool Cake::hornearMezcla() {
    std::cout<< "hornear mezcla de queque" <<std::endl;
    set_actualWeight(35);
    timer(35);
    return true;
}

bool Cake::hacerTopping() {
    std::cout<< "haciendo topping de queque" <<std::endl;
    set_actualWeight(0);
    timer(0);
    return true;
}

bool Cake::ponerTopping() {
    std::cout<< "poniendo topping de queque" <<std::endl;
    set_actualWeight(0);
    timer(0);
    std::cout<< "Listo queque" << std::endl;
    return true;
}

int Cake::getId() const {
    return _id;
}

void Cake::setId(int _id) {
    Cake::_id = _id;
}

int Cake::getActualWeight() const {
    return _actualWeight;
}

void Cake::set_actualWeight(int _actualWeight) {
    Cake::_actualWeight = _actualWeight;
}

bool Cake::getIsReady() const {
    return _isReady;
}

void Cake::set_isReady(bool _isReady) {
    Cake::_isReady = _isReady;
}

void Cake::timer(int _seconds) {

    for(double i = (time(nullptr) + _seconds); time(nullptr) != i; time(nullptr)){
    }

}

int Cake::getType(){
    return _type;
}

void Cake::setType(int pType){
    this->_type = pType;
}


Cake::Cake() {}