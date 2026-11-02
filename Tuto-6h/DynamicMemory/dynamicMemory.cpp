// = mémoire allouée après le lancement du programme

#include <iostream>
using namespace std;

int main() {

    int *pnombre = nullptr;

    pnombre = new int;

    *pnombre = 21;

    cout << "Adresse : " << pnombre << endl;
    cout << "Valeur : " << *pnombre << endl;

    delete pnombre;

    // Tableau a taille indéterminée :

    int taille;
    cout << "Choisir la taille du tableau : ";
    cin >> taille;

    char *pNotes = nullptr;
    pNotes = new char[taille];

    for(int i = 0; i < taille; i++){
        cout << "Note n" << i+1 << " : ";
        cin >> pNotes[i];
    }

    cout << "\nValeurs notes :\n";
    
    for(int i = 0; i < taille; i++) {
        cout << "Note n" << i+1 << " : " << pNotes[i] << endl;
    }

    delete[] pNotes;

    return 0;
}