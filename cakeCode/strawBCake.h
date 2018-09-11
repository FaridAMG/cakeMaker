//
// Created by farida on 11/09/18.
//

#ifndef CAKEMAKER_STRAWBCAKE_H
#define CAKEMAKER_STRAWBCAKE_H


#include "cake.h"

class strawBCake : public cake {

    bool crearMezcla() override ;
    bool hacerTopping() override ;
    bool ponerTopping() override ;

};


#endif //CAKEMAKER_STRAWBCAKE_H
