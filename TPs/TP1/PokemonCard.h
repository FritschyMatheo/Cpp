#ifndef POKEMONCARD_H
#define POKEMONCARD_H
#include "Card.h"
#include <string>
#include <tuple>
#include <vector>

// (cout energie, cout energie actuel, description attaque, degats attaque)
typedef std::vector<std::tuple<int, int, std::string, int>> attack;

class PokemonCard : public Card {
    private:
        std::string pokemonType;
        std::string familyName;
        int evolutionLevel = 0;
        int maxHP = 0;
        int hp = 0;
        attack attacks;
    public:
        PokemonCard(){};
        PokemonCard(std::string cardName, std::string pokemonType, int evolutionLevel,
                    int maxHP, int hp, attack attacks);
        virtual ~PokemonCard() = default;
        void displayInfo() override;
};

#endif