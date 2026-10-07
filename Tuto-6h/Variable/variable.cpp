#include <iostream>

int variableGlobale = 5; // Déclarée en dehors du main -> Globale et accessible par toutes les fonctions (moins sage)

int main() {

    int variableGlobale = 3;    // Même nom que la globale mais n'est pas globale

    // Globale vs interne 
    std::cout << variableGlobale << '\n';       // Utilise en priorité les pas globales
    std::cout << ::variableGlobale << '\n';     // :: pour utiliser la globale

    // int
    int x;  // Declaration
    x = 6;  // Assignement

    int y = 7;  // Declaration + Assignement

    std::cout << x << '\n';
    std::cout << y << '\n';

    // Double / Decimals
    double price = 99.99;

    std::cout << price << '\n';
    std::cout << int(price) << '\n';

    // Characters
    char firstLetter = 'A';
    std::cout << firstLetter << '\n';
    char currency = '$';
    std::cout << currency << '\n';
    std::cout << "Price : " << price << currency << '\n';

    // Boolean
    bool lightOn = true;
    std::cout << "Light is : " << lightOn << '\n';
    lightOn = false;
    std::cout << "Light is : " << lightOn << '\n';

    // strings
    std::string name = "Jerem";
    std::cout << name << " les bonbonss" << '\n';
    std::string day = "Saturday";
    std::cout << "The 6th day of the week is : " << day << '\n';

    return 0;
}