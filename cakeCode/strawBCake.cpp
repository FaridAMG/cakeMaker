//
// Created by farida on 11/09/18.
//

#include "strawBCake.h"

bool strawBCake::crearMezcla() {
    set_actualWeight(19);
    timer(19);
    return cake::crearMezcla();
}

bool strawBCake::hacerTopping() {
    set_actualWeight(12);
    timer(12);
    return cake::hacerTopping();
}

bool strawBCake::ponerTopping() {
    set_actualWeight(11);
    timer(11);
    return cake::ponerTopping();
}
