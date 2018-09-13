//
// Created by farida on 11/09/18.
//

#include "VanillaCake.h"

bool VanillaCake::crearMezcla() {
    set_actualWeight(23);
    timer(23);
    return Cake::crearMezcla();
}

bool VanillaCake::hacerTopping() {
    set_actualWeight(16);
    timer(16);
    return Cake::hacerTopping();
}

bool VanillaCake::ponerTopping() {
    set_actualWeight(13);
    timer(13);
    return Cake::ponerTopping();
}

VanillaCake::VanillaCake() {}

VanillaCake::VanillaCake(Cake cake) {}
