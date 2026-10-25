#include <iostream>

int main() {

    std::string foods[5];
    int taille = static_cast<int>(sizeof(foods)/sizeof(foods[0]));
    std::string temp;

    std::cout << "Quel est ton top 5 aliments ?\n";
    for(int i = 0; i < taille; i++) {
        std::cout << "Ajoutez l'aliment n" << i+1 << " : ";
        std::getline(std::cin, temp);
        if((temp == "q") | (temp == "Q")) {
            break;
        } else {
            foods[i] = temp;
        }
    }


    std::cout << "\nAliments ajoutes :\n";

    for(int i = 0; !foods[i].empty(); i++) {
        std::cout << "Numero " << i+1 << " " << foods[i] << "\n";
    }

    return 0;
}