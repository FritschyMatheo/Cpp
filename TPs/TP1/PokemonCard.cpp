#include "PokemonCard.h"
#include <iostream>
using namespace std;

PokemonCard::PokemonCard(string _cardName, string _pokemonType, int _evolutionLevel,
                        int _maxHP, int _hp, attack _attacks) :
    Card(_cardName), pokemonType(_pokemonType), evolutionLevel(_evolutionLevel),
    maxHP(_maxHP), hp(_hp), attacks(_attacks)
    {}

void PokemonCard::displayInfo() {
    cout << "\n- Name: " << cardName
             << "\n- Type: " << pokemonType
             << "\n- Evolution Level: " << evolutionLevel
             << "\n- Family:" << familyName
             << "\n- HP: " << hp << "/" << maxHP << endl;

    cout << "Attacks:" << endl;
    for (const auto& a : attacks) {
        cout << " - " << get<2>(a) << " (energie: " << get<1>(a) << "/" << get<0>(a)
             << ", degats: " << get<3>(a) << ")" << endl;
    }
}