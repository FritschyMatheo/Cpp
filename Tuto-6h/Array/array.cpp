#include <iostream>
#include <string>
using namespace std;

double faireTotal(double valeurs[], int taille);
int recherche(int tableau[], int taille, int nombre);

int main() {

    string cars[] = {"GT 63S", "Megane 4 RS", "Clio 3 RS"};
    for(int i = 0; i < sizeof(cars)/sizeof(string); i++){
        cout << cars[i] << endl;
    }

    int tableau[2];
    cout << tableau << endl;  // Emplacement mémoire
    tableau[0] = 6;
    tableau[1] = 7;
    // tableau[4] = 6;   // Ecrit 6 mais hors de la memoire du tableau, A NE PAS FAIRE, ecrasement de memoire. il faut utiliser un vecteur si on veut faire ca.
    cout << tableau[0] << endl;
    cout << tableau[1] << endl;
    cout << "Valeur non determinee, aleatoire (hors memoire du tableau) : " << tableau[2] << endl;

    cout << "\n--- Tableau dans une fonction ---\n";
    double prix[] = {1.99, 5, 7.99, 9.99, 100, 25};
    int taille = (int)(sizeof(prix)/sizeof(prix[0]));
    double total = faireTotal(prix, taille);

    cout << endl << total << "$";

    cout << "\n--- Recherche ---\n";

    int index, monNombre;
    int tableau2[] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Tableau : \n";
    for(int i = 0; i <10; i++){
        tableau2[i] = i+1;
        cout << " tableau[" << i << "] : " << tableau2[i] << endl;
    }
    
    int taille2 = (int)(sizeof(tableau2)/sizeof(tableau2[0]));
    cout << "Taille2 : " << taille2 << endl;
    
    cout << "Entrer le nombre a chercher : ";
    cin >> monNombre;
    index = recherche(tableau2, taille2, monNombre);
    if(index != -1) {
         cout << monNombre << " se trouve index : " << index;
    } else {
        cout << monNombre << " ne se trouve pas dans le tableau.";
    }
   

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

int recherche(int tableau[], int taille, int nombre) {
    for(int i = 0; i < taille; i++) {
        //cout << "i : " << i << " tableau[" << i << "] : " << tableau[i] << endl;
        if (tableau[i] == nombre) {
            return i;
        }
    }
    return -1;
}