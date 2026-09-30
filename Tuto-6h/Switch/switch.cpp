#include <iostream>

int main() {
    int month;

    std::cout << "Entre un mois entre 1 et 12 : ";
    std::cin >> month;

    if(month%2 == 0) {
        std::cout << "Mois paire" << "\n";
    }
    else {
        std::cout << "Mois impaire" << "\n";
    }

    switch(month){  // Les valeurs des cases sont du même type que la variable
        case 1:
            std::cout << "Janvier";
            break;
        case 2:
            std::cout << "Fevrier";
            break;
        case 3:
            std::cout << "Mars";
            break;
        case 4:
            std::cout << "Avril";
            break;
        case 5:
            std::cout << "Mai";
            break;
        case 6:
            std::cout << "Juin";
            break;
        case 7:
            std::cout << "Juillet";
            break;
        case 8:
            std::cout << "Aout";
            break;
        case 9:
            std::cout << "Septembre";
            break;
        case 10:
            std::cout << "Octobre";
            break;
        case 11:
            std::cout << "Novembre";
            break;
        case 12:
            std::cout << "Decembre";
            break;
        default:
            std::cout << "Saisie de mois invalide (1-12)";
            break;
    }

    return 0;
}