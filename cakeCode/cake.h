//
// Created by farida on 06/09/18.
//

#ifndef CAKEMAKER_CAKE_H
#define CAKEMAKER_CAKE_H


#include <list>

class cake {

    std::thread newCake;
    std::list<int> _toDo = {1,2,3,4,5};
    std::list<int> _ready;
    std::string fase = "none";
    bool _isReady = false;
    int _id = 0;
    int _actualWeight = 0;

protected:
    void set_isReady(bool _isReady);
    void set_actualWeight(int _actualWeight);
    void runTheChef();

    // cake making process
    bool mantecarPyrex();
    virtual bool crearMezcla();
    bool hornearMezcla();
    virtual bool hacerTopping();
    virtual bool ponerTopping();

public:
    cake();

    // getters and setters
    bool is_isReady() const;
    int get_id() const;
    void set_id(int _id);
    int get_actualWeight() const;


    //timer till ready
    void timer(int _seconds);

    // lets the thread join and run
    void runThread();

};


#endif //CAKEMAKER_CAKE_H
