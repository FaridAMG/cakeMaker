//
// Created by farida on 11/09/18.
//

#include "StrawBCake.h"
#include <iostream>



bool StrawBCake::crearMezcla() {
    std::cout<< "creando mezcla de queque "  << getId()  << std::endl;
    set_actualWeight(19);
    timer(19);
    return Cake::crearMezcla();
}

bool StrawBCake::hacerTopping() {
    std::cout<< "haciendo topping de queque "  << getId()  <<std::endl;
    set_actualWeight(12);
    timer(12);
    return Cake::hacerTopping();
}

bool StrawBCake::ponerTopping() {
    std::cout<< "poniendo topping de queque "  << getId()  << std::endl;
    set_actualWeight(11);
    timer(11);
    return Cake::ponerTopping();
}

StrawBCake::StrawBCake() {

}

StrawBCake::StrawBCake(Cake cake) {

}

