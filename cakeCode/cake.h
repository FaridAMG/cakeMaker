//
// Created by farida on 06/09/18.
//

#ifndef CAKEMAKER_CAKE_H
#define CAKEMAKER_CAKE_H


#include <list>
#include <string>
#include <thread>

class cake {

    std::thread newCake;
    std::list<int> _toDo;
    std::list<int> _ready;
    std::string fase;
    bool _isReady;
    int _id = 0;
    int _actualWeight = 0;

protected:
    void set_isReady(bool _isReady);
    void set_actualWeight(int _actualWeight);

    // cake making process
    bool mantecarPyrex();
    virtual bool crearMezcla();
    bool hornearMezcla();
    virtual bool hacerTopping();
    virtual bool ponerTopping();

public:
    cake();
    void runTheChef();

    // getters and setters
    bool is_isReady() const;
    int get_id() const;
    void set_id(int _id);
    int get_actualWeight() const;


    //timer till ready
    void timer(int _seconds);



};


#endif //CAKEMAKER_CAKE_H
