//
// Created by farida on 11/09/18.
//

#ifndef CAKEMAKER_STRAWBCAKE_H
#define CAKEMAKER_STRAWBCAKE_H


#include "Cake.h"

class StrawBCake : public Cake {


    bool crearMezcla() override ;
    bool hacerTopping() override ;
    bool ponerTopping() override ;
public:
    StrawBCake(Cake cake);

    StrawBCake();
};


#endif //CAKEMAKER_STRAWBCAKE_H
