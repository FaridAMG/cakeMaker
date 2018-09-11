//
// Created by farida on 06/09/18.
//

#ifndef CAKEMAKER_CAKE_H
#define CAKEMAKER_CAKE_H


#include <list>

class cake {

    std::list<int> _toDo = {1,2,3,4,5};
    std::list<int> _ready;
    std::string fase = "none";
    bool _isReady = false;
    int _id = 0;
    int _actualWeight = 0;

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
    virtual bool crearMezcla();
    bool hornearMezcla();
    virtual bool hacerTopping();
    virtual bool ponerTopping();

    //timer till ready
    void timer(int _seconds);

};


#endif //CAKEMAKER_CAKE_H
