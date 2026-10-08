#include <iostream>
#include <ctime>
using namespace std;



char getChoix();
char getChoixPC();
void afficherChoix(char choix);
void choixGagnant(char joueur, char PC);

int main() {
    srand(time(NULL));

    cout << "\n***********************\n";
    cout << "*Pierre Feuille Ciseau*\n";
    cout << "***********************\n\n";

    char choixJoueur = getChoix();
    afficherChoix(choixJoueur);
    char choixPC = getChoixPC();
    afficherChoix(choixPC);

    return 0;
}


char getChoix() {
    char choix;
    cout << "Quel coup veux tu jouer (P/F/C) : ";
    cin >> choix;
    return choix;
}

char getChoixPC() {
    char choix;
    int choixRandom = rand() % 3; // Nombre aléatoire entre 0 et 2
    cout << "\nChoix du PC en cours...\n";
    switch(choixRandom){
        case 0: choix = 'P';
            break;
        case 1: choix = 'F';
            break;
        case 2: choix = 'C';
            break;
        default: choix = 'R';   // Erreur
            break;
    }
    return choix;
}

void afficherChoix(char choix) {
    if (choix == 'C' || choix == 'c') {
        cout << "Joue ciseau";
    }
    else if (choix == 'P' || choix == 'p') {
        cout << "Joue pierre";
    }
    else if (choix == 'F' || choix == 'f') {
        cout << "Joue feuille";
    }
    else {
        cout << "Erreur, choix non valide.";
    }
}

void choixGagnant(char joueur, char PC);