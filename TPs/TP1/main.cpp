#include <iostream>
#include "PokemonCard.h"
using namespace std;

int main() {

    PokemonCard pikachu("Pikachu", "Electrique", 26, 30, 40, attack{ make_tuple(5, 5, "texte", 5) });

    pikachu.displayInfo();

    return 0;
}