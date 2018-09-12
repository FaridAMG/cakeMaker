//
// Created by farida on 06/09/18.
//

#include <ctime>
#include <iostream>
#include <thread>
#include "cake.h"




 void cake::runTheChef() {

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

bool cake::mantecarPyrex() {
    std::cout<< "mantecando pyrex" <<std::endl;
    set_actualWeight(10);
    timer(10);
  return true;
}

bool cake::crearMezcla() {
    set_actualWeight(0);
    timer(0);
    return true;
}

bool cake::hornearMezcla() {
    std::cout<< "hornear mezcla" <<std::endl;
    set_actualWeight(35);
    timer(35);
    return true;
}

bool cake::hacerTopping() {
    set_actualWeight(0);
    timer(0);
    return true;
}

bool cake::ponerTopping() {
    set_actualWeight(0);
    timer(0);
    return true;
}

int cake::get_id() const {
    return _id;
}

void cake::set_id(int _id) {
    cake::_id = _id;
}

int cake::get_actualWeight() const {
    return _actualWeight;
}

void cake::set_actualWeight(int _actualWeight) {
    cake::_actualWeight = _actualWeight;
}

bool cake::is_isReady() const {
    return _isReady;
}

void cake::set_isReady(bool _isReady) {
    cake::_isReady = _isReady;
}

void cake::timer(int _seconds) {

        for(double i = (time(nullptr) + _seconds); time(nullptr) != i; time(nullptr)){
        }

    }

cake::cake() {}






