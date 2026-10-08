#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;

    std::cout << "Longueur de A : ";
    std::cin >> a;
    std::cout << "Longueur de B : ";
    std::cin >> b;

    double hypothenuse;
    hypothenuse = sqrt(pow(a,2)+pow(b,2));

    std::cout << "Longueur de l'hypothenuse : " << hypothenuse;

    return 0;
}