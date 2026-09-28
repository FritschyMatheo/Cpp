#include <iostream>

int main() {

    double temp;
    char unite;

    std::cout << "Choix de la temperature :\n C = Celsius\nF= Fahrenheit\n";

    std::cout << "Choisissez l'unite vers laquelle convertir : ";
    std::cin >> unite;
    std::cout << "Quelle est la temperature a convertir : ";
    std::cin >> temp;

    if(unite == 'f' || unite == 'F') {
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temp C = " << temp;
    }
    else if(unite == 'c' || unite == 'C') {
        temp = (temp-32.0) / 1.8;
        std::cout << "Temp F = " << temp;
    }
    else {
        std::cout << "Mauvaise entrée";
    }
    

    return 0;
}