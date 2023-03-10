#include <iostream>
#include <unistd.h>
#include <string>
#include "Human.h" 
#include "Car.h"
#include "fin.h"
using namespace std;

void fin();

int main(void){
    const char oui = 'o';
    const char non = 'n';
    char choix;

    Human human;
    Car car;
    cout << "Voulez vous courir ?" << '\n';
    cin >> choix;

    switch (choix)
    {
    case oui:
        human.run();
        break;
    case non:
        human.walk();   
        break;
    default:
        cout << "Choisissez entre oui(o) et non(n)" << '\n';
        break;  
    }

    cout << "Vous voyez une voiture. Ce n'est pas la votre. Mais si vous la prenez, vous allez arriver plus rapidement au point. " << '\n';
    cout << "Voler la voiture ?" << '\n';
    cin >> choix;

    switch (choix)
    {
    case oui:
       human.enterCar();
        car.demarrer();
        sleep(1);
        car.avancer();
    break;
    case non:
        human.intheCar() == false;
        cout << "Vous commencez a courir a la place!" << '\n';
        sleep(1);
        human.run();
    break;   
    }

    char choix2;

    cout << "Vous apercevez une personne voulant vous parlez." << '\n';
    cout << "Vous vous demandez bien ce qu'elle peut bien vous vouloir." << '\n';
    cout << "Parler a la personne ?" << '\n';
    cin >> choix2;
    if (choix == oui)
    {
        switch (choix2){
    case oui:
        cout << "Cette personne est en verite un policier en civil!" << '\n';
        sleep(1);
        break;
    case non:
        cout << "Vous continuez votre route" << '\n';
        break;
    }
    }
    else if(choix == non)
    {
        switch (choix2)
        {
        case  oui:
            cout << "En fait, la personne s'est trompe. Il commence a s'excuser." << '\n';
            break;
        case non:
            cout << "Vous continuez votre route" << '\n';
            break;
        }
    }
    
    if(human.intheCar() == true)
    {
        cout << "Vous etes arrive au point." << '\n';
        cout << "Vous etes dans une impasse et la police est derri??re vous." << '\n';
        cout << "Sortir de la voiture ?" << '\n';
        cin >> choix;

        switch (choix)
        {
        case oui:
            human.exitCar();
            cout << "Vous vous trouvez actuellement sur un pont." << '\n';
            cout << "Vous pouvez largement sauter afin de mettre fin a vos jours." << '\n';
            cout << "Le faire ?" << '\n';
            cin >> choix2;

            if(choix2 == oui){
                cout << "Vous sautez du pont." << '\n';
                cout << "Vous etes donc mort." << '\n';
                fin();
            }
            else{
                cout << "Vous vous rendez a la police. Mais, vous avez un couteau suisse sur vous." << '\n';
                cout << "L'utiliser sur le policier ?" << '\n';
                cin >> choix;
                if (choix == oui)
                {
                    cout << "Le policier mettant les menottes se prend la lame du couteau suisse." << '\n';
                    cout << "Ses collegues, voyant cela, sortent leurs pistolet et vous tue." << '\n';
                    fin();
                }
                else if (choix == non)
                {
                    cout << "Les policiers vous arretent." << '\n';
                    fin();
                }
            }
            break;
        case non:
            cout << "La police vous ordonne de sortir de la voiture, mais vous ne faites rien." << '\n';
            cout << "Ils finissent par perdre patience et vous tue." << '\n';
            fin();
            break;
        }
    }
    else if(human.intheCar() == false)
    {
        cout << "Vous etes rentrer chez vous." << '\n';
        fin();
    }

    return 0;
}