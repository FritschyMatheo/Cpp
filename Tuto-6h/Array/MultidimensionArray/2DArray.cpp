#include <iostream>
using namespace std;

// En gros c'est un tableau/une matrice

int main() {

    string cars[2][3] = {{"Classe A", "C63 Black series", "GT 63S"}, {"Clio 3 RS", "Modus", "Megane 4"}};   // Array[ligne][colonne]

    
    int tailleColonnes = sizeof(cars)/sizeof(cars[0]);
    int tailleLignes =  sizeof(cars[0])/sizeof(cars[0][0]);

    cout << "Colonnes : " << tailleColonnes << ", lignes : " << tailleLignes;

    for(int i = 0; i < tailleColonnes; i++) {
        for(int j = 0; j < tailleLignes; j++) {
            cout << endl << cars[i][j];
        }
    }

    return 0;
}