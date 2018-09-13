//
// Created by farida on 11/09/18.
//

#ifndef CAKEMAKER_CHOCOLATECAKE_H
#define CAKEMAKER_CHOCOLATECAKE_H


#include "Cake.h"

class ChocolateCake : public Cake {

    bool crearMezcla() override ;
    bool hacerTopping() override ;
    bool ponerTopping() override ;

public:
    ChocolateCake(Cake cake);

    ChocolateCake();
};


#endif //CAKEMAKER_CHOCOLATECAKE_H
