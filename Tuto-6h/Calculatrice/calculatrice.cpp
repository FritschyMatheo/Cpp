#include <iostream>

int main() {

    char operation;
    double nb1;
    double nb2;
    double r;

    std::cout << "Quelle operation veux tu faire : (+ - * /) : ";
    std::cin >> operation;
    std::cout << "Premier nombre : ";
    std::cin >> nb1;
    std::cout << "Deuxieme nombre : ";
    std::cin >> nb2;

    switch(operation) {
        case '+':
            r = nb1 + nb2;
            std::cout << nb1 << operation << nb2 << " = " << r;
            break;
        case '-':
            r = nb1 - nb2;
            std::cout << nb1 << operation << nb2 << " = " << r;
            break;
        case '*':
            r = nb1 * nb2;
            std::cout << nb1 << operation << nb2 << " = " << r;
            break;
        case '/':
            r = nb1 / nb2;
            std::cout << nb1 << operation << nb2 << " = " << r;
            break;
        default:
            std::cout << "Operation invalide";
            break;
    }

    return 0;
}