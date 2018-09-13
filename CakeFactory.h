//
// Created by farida on 11/09/18.
//

#ifndef CAKEMAKER_CAKEFACTORY_H
#define CAKEMAKER_CAKEFACTORY_H


#include "Cake.h"
#include "ChocolateCake.h"
#include "VanillaCake.h"
#include "StrawBCake.h"

class CakeFactory {

public:
    CakeFactory();


    ChocolateCake *createChocoCake();
    VanillaCake *createVanillaCake();
    StrawBCake *createStrawBCake();

};


#endif //CAKEMAKER_CAKEFACTORY_H
