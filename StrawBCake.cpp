//
// Created by farida on 11/09/18.
//

#include "StrawBCake.h"



bool StrawBCake::crearMezcla() {
    set_actualWeight(19);
    timer(19);
    return Cake::crearMezcla();
}

bool StrawBCake::hacerTopping() {
    set_actualWeight(12);
    timer(12);
    return Cake::hacerTopping();
}

bool StrawBCake::ponerTopping() {
    set_actualWeight(11);
    timer(11);
    return Cake::ponerTopping();
}

StrawBCake::StrawBCake() {

}

StrawBCake::StrawBCake(Cake cake) {

}

