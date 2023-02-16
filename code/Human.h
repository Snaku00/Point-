#include <iostream>
#include <unistd.h>
#ifndef HUMAN_H
#define HUMAN_H
using std::cout;

class Human{
    private:
    bool intheCar_ = false;
    const int Mvitesse = 3;
    const int Cvitesse = 12;

    public:
    int distance = 0;
    
    void walk(){
       
        distance += 5;
        sleep(3);
    }
    void run(){
        distance += 10;
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

};

#endif