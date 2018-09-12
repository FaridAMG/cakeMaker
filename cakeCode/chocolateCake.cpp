//
// Created by farida on 11/09/18.
//

#include <iostream>
#include "chocolateCake.h"

bool chocolateCake::crearMezcla() {
    std::cout<< "creando mezcla" <<std::endl;
    set_actualWeight(22);
    timer(22);
    return cake::crearMezcla();
}

bool chocolateCake::hacerTopping() {
    std::cout<< "haciendo topping" <<std::endl;
    set_actualWeight(24);
    timer(24);
    return cake::hacerTopping();
}

bool chocolateCake::ponerTopping() {
    std::cout<< "poner topping" <<std::endl;
    set_actualWeight(5);
    timer(5);
    return cake::ponerTopping();
}
