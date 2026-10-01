#include <iostream>

int main() {

    //  && et
    //  || -> ou inclusif
    //  ! -> inverse l'opérateur/négation


    int temp = 27;
    bool pluie = true;

    if(temp > 0 && temp < 15){
        std::cout << "Gilet";
    }
    else {
        std::cout << "Tshirt";
    }

    if(temp <= 0 || temp >= 30){
        std::cout <<  "\n" << "Mauvaise temp";
    }
    else {
        std::cout <<  "\n" << "Bonne temp";
    }

    if(!pluie){ // = pluie != true
        std::cout <<  "\n" << "Il ne pleut pas";
    }
    else {
        std::cout << "\n" << "Il pleut";
    }

    return 0;
}