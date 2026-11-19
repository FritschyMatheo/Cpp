#include "PokemonCard.h"
#include <iostream>
using namespace std;

typedef vector<tuple<int, int, string, int>> attack;
PokemonCard::PokemonCard(string _cardName, string _pokemonType, int _evolutionLevel,\
                        int _maxHP, int _hp, attack _attacks) :
    Card(_cardName), pokemonType(_pokemonType), evolutionLevel(_evolutionLevel),\
    maxHP(_maxHP), hp(_hp), attacks(_attacks)
    {}

void PokemonCard::displayInfo() {
    cout << "Pokemon Card - Name: " << cardName 
             << ", Type: " << pokemonType 
             << ", Evolution Level: " << evolutionLevel 
             << " of the family \"" << familyName 
             << "\", HP: " << hp << "/" << maxHP << endl;

        cout << "Attacks:" << endl;
}