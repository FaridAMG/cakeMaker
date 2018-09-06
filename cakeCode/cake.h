//
// Created by farida on 06/09/18.
//

#ifndef CAKEMAKER_CAKE_H
#define CAKEMAKER_CAKE_H


#include <list>

class cake {

    std::list<int> toDo = {1,2,3,4,5};
    std::list<int> ready;
    bool isReady = false;

public:
    cake();

    void theChef();
    
    bool mantecarPyrex();
    bool crearMezcla();
    bool hornearMezcla();
    bool hacerTopping();
    bool ponerTopping();

    bool isIsReady() const;

};


#endif //CAKEMAKER_CAKE_H
