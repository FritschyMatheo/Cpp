#include <iostream>
#include <string>

int main() {

    std::string nom = "Charles";
    int age = 20;
    bool vrai = true;

    // Emplacement memoire d'une variable : &variable

    std::cout << &nom << '\n';
    std::cout << &age << '\n';
    std::cout << &vrai << '\n';

    // Si on convertit les adresses hexa en decimal, on voit qu'entre les différents type, l'écart n'est pas le même.
    // 4 pour le string, 1 pour le bool...

    return 0;
}