#include <iostream>
using namespace std;

enum Jour {lundi=1, mardi=2, mercredi=3, jeudi=4, vendredi=5, samedi=6, dimanche=7};   // On associe à chaque nom une valeur entienre

int main(){

    Jour jEntrainement = mercredi;

    switch(jEntrainement){                                          // On ne pourrait pas faire ca avec un string
        case lundi: cout << "L'entrainement est Lundi.\n";
                    break;
        case mardi: cout << "L'entrainement est Mardi.\n";
                    break;
        case mercredi: cout << "L'entrainement est Mercredi.\n";
                    break;
        case jeudi: cout << "L'entrainement est Jeudi.\n";
                    break;
        case vendredi: cout << "L'entrainement est Vendredi.\n";
                    break;
        case samedi: cout << "L'entrainement est Samedi.\n";
                    break;
        case dimanche: cout << "L'entrainement est Dimanche.\n";
                    break;
    }

    return 0;
}