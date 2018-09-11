//
// Created by farida on 11/09/18.
//

#ifndef CAKEMAKER_CAKEFACTORY_H
#define CAKEMAKER_CAKEFACTORY_H


#include "cake.h"
#include "chocolateCake.h"
#include "vanillaCake.h"
#include "strawBCake.h"

class cakeFactory {

public:
    cakeFactory();

    chocolateCake createChocoCake();
    vanillaCake createVanillaCake();
    strawBCake createStrawBCake();

};


#endif //CAKEMAKER_CAKEFACTORY_H
