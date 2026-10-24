#include <iostream>

int main() {

    std::string liste[] = {"Un", "Deux", "Trois", "Quatre"};

    for(std::string element : liste){
        std::cout << element << std::endl;
    }

    int chiffres[] = {0,1,2,3,4,5,6,7,8,9};
    for(int chiffre : chiffres) {
        std::cout << chiffre << std::endl;
    }

    return 0;
}