//
// Created by alex on 12/09/18.
//

#include "Cake.h"
/*
 * Constructor of the Cake CLass
 * @param pId (Type: int), pWeight(Type: int)
 */
Cake::Cake(int pId, int pWeight){
    this->_id = pId;
    this->_actualWeight = pWeight;
}
/*
 * Constructor of the Cake Class
 */
Cake::Cake() {}