#ifndef POKEMONCARD_H
#define POKEMONCARD_H
#include "Card.h"
#include <vector>

typedef vector<tuple<int, int, string, int>> attack;
class PokemonCard : public Card {
    private:
        string pokemonType;
        string familyName;
        int evolutionLevel;
        int maxHP;
        int hp;
        attack attacks; // (cout energie, cout energie actuel, description attaque, degats attaque)
    public:
        PokemonCard(){};
        PokemonCard(string cardName, string pokemonType, int evolutionLevel,\
                    int maxHP, int hp, attack attacks){};
        virtual ~PokemonCard() = default;
        void displayInfo() override;
};

#endif