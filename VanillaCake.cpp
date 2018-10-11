//
// Created by farida on 11/09/18.
//

#include "VanillaCake.h"
#include <iostream>

bool VanillaCake::crearMezcla() {
    std::cout<< "creando mezcla de queque "  << getId()  << std::endl;
    set_actualWeight(23);
    timer(23);
    return Cake::crearMezcla();
}

bool VanillaCake::hacerTopping() {
    std::cout<< "haciendo topping de queque "  << getId()  <<std::endl;
    set_actualWeight(16);
    timer(16);
    return Cake::hacerTopping();
}

bool VanillaCake::ponerTopping() {
    std::cout<< "poniendo topping de queque "  << getId()  << std::endl;
    set_actualWeight(13);
    timer(13);
    return Cake::ponerTopping();
}

VanillaCake::VanillaCake() {}

VanillaCake::VanillaCake(Cake cake) {}
