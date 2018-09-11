//
// Created by farida on 11/09/18.
//

#include "cakeFactory.h"
#include "chocolateCake.h"

cakeFactory::cakeFactory() {}

chocolateCake cakeFactory::createChocoCake() {

    auto * cc = new chocolateCake();

    return *cc;
}

vanillaCake cakeFactory::createVanillaCake() {

    auto * vc = new vanillaCake();

    return *vc;
}

strawBCake cakeFactory::createStrawBCake() {

    auto * sc = new strawBCake();

    return *sc;
}
