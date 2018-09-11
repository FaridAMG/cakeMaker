//
// Created by farida on 11/09/18.
//

#ifndef CAKEMAKER_CHOCOLATECAKE_H
#define CAKEMAKER_CHOCOLATECAKE_H


#include "cake.h"

class chocolateCake : public cake {

    bool crearMezcla() override ;
    bool hacerTopping() override ;
    bool ponerTopping() override ;

};


#endif //CAKEMAKER_CHOCOLATECAKE_H
