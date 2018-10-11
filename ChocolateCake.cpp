//
// Created by farida on 11/09/18.
//

#include <iostream>
#include "ChocolateCake.h"


bool ChocolateCake::crearMezcla() {
    std::cout<< "creando mezcla de queque "  << getId()  << std::endl;
    set_actualWeight(22);
    timer(22);
    return Cake::crearMezcla();
}

bool ChocolateCake::hacerTopping() {
    std::cout<< "haciendo topping de queque "  << getId()  <<std::endl;
    set_actualWeight(24);
    timer(24);
    return Cake::hacerTopping();
}

bool ChocolateCake::ponerTopping() {
    std::cout<< "poniendo topping de queque "  << getId()  << std::endl;
    set_actualWeight(5);
    timer(5);
    return Cake::ponerTopping();
}

ChocolateCake::ChocolateCake(Cake cake) {

}

ChocolateCake::ChocolateCake() {

}
