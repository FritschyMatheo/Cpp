#include <iostream>
#include <cmath>    // Liste des fonctions : https://cplusplus.com/reference/cmath/

int main() {
    const double PI = 3.1415926535;
    double x = 6;
    double y = 7;
    double z;

    z = std::max(x,y);   // Renvoie le max entre les deux valeurs
    std::cout << z;

    z = std::min(x,y);   // Renvoie le min entre les deux valeurs
    std::cout << std::endl << z;

    z = pow(2, 3);      // 2 puissance 3
    std::cout << std::endl << z;

    z = sqrt(9);        // Racine carrée
    std::cout << std::endl << z;

    z = abs(-10);       // Valeur absolue
    std::cout << std::endl << z;

    z = round(PI);      // Arrondi
    std::cout << std::endl << z;

    z = ceil(PI);      // Arrondi au supérieur
    std::cout << std::endl << z;

    z = floor(PI);      // Arrondi au plus petit (au sol)
    std::cout << std::endl << z;
}