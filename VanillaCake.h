//
// Created by farida on 11/09/18.
//

#ifndef CAKEMAKER_VANILLACAKE_H
#define CAKEMAKER_VANILLACAKE_H


#include "Cake.h"

class VanillaCake : public Cake {


    bool crearMezcla() override ;
    bool hacerTopping() override ;
    bool ponerTopping() override ;

public:
    VanillaCake(Cake cake);

    VanillaCake();
};


#endif //CAKEMAKER_VANILLACAKE_H
