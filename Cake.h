//
// Created by farida on 06/09/18.
//

#ifndef CAKEMAKER_CAKE_H
#define CAKEMAKER_CAKE_H


#include <list>
#include <string>
#include <thread>

class Cake {

    std::list<int> _toDo;
    std::list<int> _ready;
    std::string fase;
    bool _isReady;
    int _id;
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
    Cake();
    void runTheChef();

    int _type;

    // getters and setters
    bool getIsReady() const;
    int getId() const;
    void setId(int _id);
    int getActualWeight() const;


    //timer till ready
    void timer(int _seconds);

    void setType(int pType);

    int getType();

    int get_type() const;


};


#endif //CAKEMAKER_CAKE_H