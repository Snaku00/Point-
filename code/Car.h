#include <iostream>
#include <unistd.h>
#include "Human.h"
#ifndef CAR_H
#define CAR_H
using std::cout;

class Car{
    public:
    Human humain;
    void avancer(){
        cout << "Vous avancez!" << '\n';
    }
    void demarrer(){
        cout << "La voiture demarre!" << '\n';
    }
    void set_vitesse(int vitesse){
        vitesse_ = vitesse;
    }
    void getVitesse(){
        if (humain.intheCar() == true)
        {
            this->vitesse_ = 40;
        }
        else
        {
            this->vitesse_ = 10;
        }
    }
    private:
    int vitesse_ = 10;
};

#endif