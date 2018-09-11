//
// Created by farida on 11/09/18.
//

#include "vanillaCake.h"

bool vanillaCake::crearMezcla() {
    set_actualWeight(23);
    timer(23);
    return cake::crearMezcla();
}

bool vanillaCake::hacerTopping() {
    set_actualWeight(16);
    timer(16);
    return cake::hacerTopping();
}

bool vanillaCake::ponerTopping() {
    set_actualWeight(13);
    timer(13);
    return cake::ponerTopping();
}
