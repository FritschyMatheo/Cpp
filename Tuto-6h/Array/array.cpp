#include <iostream>
#include <string>
using namespace std;

double faireTotal(double valeurs[], int taille);

int main() {

    string cars[] = {"GT 63S", "Megane 4 RS", "Clio 3 RS"};
    for(int i = 0; i < sizeof(cars)/sizeof(string); i++){
        cout << cars[i] << endl;
    }

    int liste[2];
    cout << liste << endl;  // Emplacement mémoire
    liste[0] = 6;
    liste[1] = 7;
    liste[4] = 6;
    cout << liste[0] << endl;
    cout << liste[1] << endl;
    cout << "Valeur non determinee, aleatoire : " << liste[2] << endl;

    cout << "\n--- Liste dans une fonction ---\n";
    double prix[] = {1.99, 5, 7.99, 9.99, 100, 25};
    int taille = (int)(sizeof(prix)/sizeof(prix[0]));
    double total = faireTotal(prix, taille);

    cout << endl << total << "$";

    return 0;
}

double faireTotal(double valeurs[], int taille) {
    double total = 0;
    cout << endl << sizeof(valeurs);
    for(int i = 0; i < taille; i++) {
        total += valeurs[i];
    }
    return total;
}