//
// Created by gustavo on 9/09/18.
//

#ifndef CAKEMAKER_CAKE_H
#define CAKEMAKER_CAKE_H


class Cake {
    private:
        int _id;
        int _actualWeight;
        bool _isReady = false;

    public:

        Cake();

        void startThread();
        int getId();
        void setId(int pId);
        int getActualWeight();
        void setActualWeight(int pActualWeight);
        bool getIsReady();
        void setIsReady(bool pIsReady);
};


#endif //CAKEMAKER_CAKE_H