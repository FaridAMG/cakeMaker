//
// Created by farida on 06/09/18.
//

#ifndef CAKEMAKER_CAKE_H
#define CAKEMAKER_CAKE_H


#include <list>

class cake {

    std::list<int> _toDo = {1,2,3,4,5};
    std::list<int> _ready;
    std::string fase;
    bool _isReady = false;
    int _id;
    int _actualWeight;

protected:
    void set_isReady(bool _isReady);
    void set_actualWeight(int _actualWeight);

public:
    cake();

    // getters and setters
    void runTheChef();
    bool is_isReady() const;
    int get_id() const;
    void set_id(int _id);
    int get_actualWeight() const;

    // cake making process
    bool mantecarPyrex();
    bool crearMezcla();
    bool hornearMezcla();
    bool hacerTopping();
    bool ponerTopping();

    void timer(int _seconds);

};


#endif //CAKEMAKER_CAKE_H
