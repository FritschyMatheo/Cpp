#include <iostream>

int main() {
    /*
    std::cout << "Compte a rebourd";
    for(int i = 11; i > 0; i--) {
        if(i == 2){
            break;  // continue pour continuer
        }
        std::cout << i << std::endl;
    }
    std::cout << "Fini";
    */

    int debut, fin;
    char symbol;

    std::cout << "Table de debut : ";
    std::cin >> debut;
    std::cout << "Table de fin : ";
    std::cin >> fin;

    for(int i = debut; i <=fin; i++) {
        std::cout << "\n- Table de " << i;
        for(int j = 0; j <= 10; j++) {
            std::cout << "\n" << i << " x " << j << " = " << i*j;
        }
        std::cout << "\n";
    }

    return 0;
}