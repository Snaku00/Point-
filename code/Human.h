#include <iostream>
#include <unistd.h>
#ifndef HUMAN_H
#define HUMAN_H
using std::cout;

class Human{
    private:
    bool intheCar_ = false;
    bool enVie = true;

    public:
    int temps;
    int Hvitesse = 3;
    int distance = Hvitesse * temps;
    void walk(){
        sleep(3);
    }
    void run(){
        cout << "Vous commencez a courir!" << '\n';
        sleep(3);
        cout << "Vous etes fatigue." << '\n';
    }

    void enterCar(){

        intheCar_ = true;
    }

    void exitCar(){

        intheCar_ = false;
    }

    bool intheCar(){
        return intheCar_; 
    }

    bool estEnVie(){
        return enVie;
    }
    bool pasEnVie(){
        return enVie = false;
    }
};

#endif