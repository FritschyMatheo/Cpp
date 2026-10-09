#include <iostream>
#include <ctime>
using namespace std;

int scoreJoueur = 0;
int scorePC = 0;

char getChoix();
char getChoixPC();
void afficherChoix(char choix);
void choixGagnantManche(char joueur, char PC);
void choixGagnant(int scoreJoueur, int scorePC);

int main() {
    srand(time(NULL));

    cout << "\n***********************\n";
    cout << "*Pierre Feuille Ciseau*\n";
    cout << "***********************\n\n";

    do {
        cout << "\nJoueur : " << scoreJoueur << " - PC : " << scorePC << "\n";
        char choixJoueur = getChoix();
        afficherChoix(choixJoueur);
        char choixPC = getChoixPC();
        afficherChoix(choixPC);
        choixGagnantManche(choixJoueur, choixPC);
    } while (scoreJoueur < 3 && scorePC < 3);

    choixGagnant(scoreJoueur, scorePC);

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
    if (choix == 'C') {
        cout << "Joue ciseau";
    }
    else if (choix == 'P') {
        cout << "Joue pierre";
    }
    else if (choix == 'F') {
        cout << "Joue feuille";
    }
    else {
        cout << "Erreur, choix non valide.";
    }
}

void choixGagnantManche(char joueur, char PC) {
    if (joueur == PC) {
        cout << "\nEgalite";
    }
    else {
        switch(joueur){
            case 'P':
                if (PC == 'F') {
                    cout << "\nPC gagne !";
                    ::scorePC += 1;
                } 
                else if (PC == 'C') {
                    cout << "\nJoueur gagne !";
                    ::scoreJoueur += 1;
                }
                break;
            case 'F':
                if (PC == 'C') {
                    cout << "\nPC gagne !";
                    ::scorePC += 1;
                } 
                else if (PC == 'P') {
                    cout << "\nJoueur gagne !";
                    ::scoreJoueur += 1;
                }
                break;
            case 'C':
                if (PC == 'P') {
                    cout << "\nPC gagne !";
                    ::scorePC += 1;
                } 
                else if (PC == 'F') {
                    cout << "\nJoueur gagne !";
                    ::scoreJoueur += 1;
                }
                break;
            
        }
    }
}

void choixGagnant(int scoreJoueur, int scorePC) {
    if (scoreJoueur == scorePC) {
        cout << "\n\nEgalie, c'est possible ?";
    } 
    else if (scoreJoueur < scorePC) {
        cout << "\n\nLe PC gagne la partie!";
    }
    else if (scoreJoueur > scorePC) {
        cout << "\n\nTu as gagne la partie !";
    }
    else {
        cout << "\n\nErreur";
    }
}