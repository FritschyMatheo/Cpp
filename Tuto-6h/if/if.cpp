#include <iostream>

int main() {

    int age;

    std::cout << "Entre ton age : ";
    std::cin >> age;

    // Conditions : == ; >= ; <= ; > ; <

    if(age >= 21){
        std::cout << "Tu es majeur partout !";
    }
    else if(age >= 18){
        std::cout << "Tu es majeur en France !";
    }
    else {
        std::cout << "Tu n'es pas majeur !";
    }

    return 0;
}