//
// Created by farida on 11/09/18.
//

#include "chocolateCake.h"

bool chocolateCake::crearMezcla() {
    set_actualWeight(22);
    timer(22);
    return cake::crearMezcla();
}

bool chocolateCake::hacerTopping() {
    set_actualWeight(24);
    timer(24);
    return cake::hacerTopping();
}

bool chocolateCake::ponerTopping() {
    set_actualWeight(5);
    timer(5);
    return cake::ponerTopping();
}
