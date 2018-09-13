//
// Created by farida on 11/09/18.
//

#include "CakeFactory.h"
#include "ChocolateCake.h"

CakeFactory::CakeFactory() {}

ChocolateCake *CakeFactory::createChocoCake() {

    auto * cc = new ChocolateCake();

    cc->setType(1);

    return cc;
}

VanillaCake *CakeFactory::createVanillaCake() {

    auto * vc = new VanillaCake();

    vc->setType(2);

    return vc;
}

StrawBCake *CakeFactory::createStrawBCake() {

    auto * sc = new StrawBCake();

    sc->setType(3);

    return sc;
}
