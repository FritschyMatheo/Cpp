#include <iostream>

int main() {

    std::string foods[10] = {"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};  // Si on veut mettre x fois la meme valeur dans un tableau (ou une liste ou un vecteur...) c'est long de faire à la main

    for(std::string food : foods) {
        std::cout << food << " ";
    }

    // Alors qu'avec fill() :
    const int TAILLE_BOITE = 32;
    std::string boiteOeufs[TAILLE_BOITE]; // On l'initialise vide
    
    fill(boiteOeufs, boiteOeufs + TAILLE_BOITE, "oeuf");  // On remplie a partir de l'adresse du premier argument jusqu'au deuxieme argument donc debut + jusqu'a la fin. Avec le troisieme argument
    std::cout << "\n";

    for(std::string emplacement : boiteOeufs) {
        std::cout << emplacement << " ";
    }

    // Donc pour faire un quart de chaque :
    const int TAILLE_PLATEAU = 20;
    std::string plateauViande[TAILLE_PLATEAU];
    fill(plateauViande, plateauViande + (TAILLE_PLATEAU/4), "Boeuf");
    fill(plateauViande + (TAILLE_PLATEAU/4), plateauViande + 2*(TAILLE_PLATEAU/4), "Canard");
    fill(plateauViande + 2*(TAILLE_PLATEAU/4), plateauViande + TAILLE_PLATEAU, "Poulet");

    std::cout << "\n";
    for(std::string emplacement : plateauViande) {
        std::cout << emplacement << " ";
    }

    return 0;
}