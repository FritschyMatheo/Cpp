#include <iostream>

void walk(int steps);
void jump(int sauts);
int factoriel(int nombre);
int main() {

    walk(2);
    jump(3);

    std::cout << factoriel(5);

    return 0;
}

// Forme itérative :
void walk(int steps) {
    for(int i = 0; i < steps; i++) {
        std::cout << "*Fait un pas*\n";
    }
}

// Forme recursive :
void jump(int sauts){
    if(sauts > 0){
        std::cout << "*Saute*\n";
        jump(sauts - 1);            // Pas vrm de boucle, on rapèle juste la fonction s'il reste des sauts
    }
}
// Prend plus de memoire et de temps mais pour un plus gros problème c'est mieux, comme ca :

int factoriel(int nombre){
    int resultat = nombre;
    if(nombre > 1){
        resultat *= factoriel(nombre-1);
    }
    return resultat;
}