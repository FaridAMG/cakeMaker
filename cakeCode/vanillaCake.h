//
// Created by farida on 11/09/18.
//

#ifndef CAKEMAKER_VANILLACAKE_H
#define CAKEMAKER_VANILLACAKE_H


#include "cake.h"

class vanillaCake : public cake {

    bool crearMezcla() override ;
    bool hacerTopping() override ;
    bool ponerTopping() override ;

};


#endif //CAKEMAKER_VANILLACAKE_H
