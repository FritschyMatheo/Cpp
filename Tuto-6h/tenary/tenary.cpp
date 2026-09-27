#include <iostream>

//  Au lieu de if (condition) {expression};
//  (condition) ? expression1 : expression2;

int main() {

    int note = 16;

    // Version if :

    if (note >= 10) {
        std::cout << "Tu passes la matiere";
    }
    else {
        std::cout << "Tu ne passes pas";
    }

    std::cout << std::endl;

    // Version tenary :

    (note >= 10) ? std::cout << "Tu passes la matiere" : std::cout << "Tu ne passes pas"; // Les parenthèses autjour de la condition sont optionnelles

    std::cout << std::endl;

    // On peut même le mettre dans un cout :

    bool allume = true;

    std::cout << (allume == true ? "Lumiere allumee" : "Lumière eteinte");

    return 0;
}