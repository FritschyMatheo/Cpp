#include <iostream>
using namespace std;

int main() {

    // & "l'adresse de"
    // * déréférencement -> donne la valeur de l'adresse

    string nom = "Thomas";  // Le type du pointeur doit être le même que la variable !
    string *pNom = &nom;    // pNom contient l'adresse de nom

    cout << " pNom : " << pNom << endl;
    cout << "*pNom : " << *pNom << endl;

    int age = 20;
    int *pAge = &age;

    cout << " pAge : " << pAge << endl;
    cout << "*pAge : " << *pAge << endl;

    // Pas forcément utile pour les petites valeurs simples, mais surtout pour les liste etc

    string commandePizzas[5] = {"prosciutto", "buffala", "margarita", "funghi", "vegerariane"};
    string *pCommandePizzas = commandePizzas;
    // Les listes sont deja des adresses donc pas besoin d'ajouter '&'

    cout << " commandePizzas : " << commandePizzas << endl;
    cout << "*pCommandePizzas : " << *pCommandePizzas << endl;  // Donne le premier element du tableau
    cout << " pCommandePizzas : " << pCommandePizzas << endl;

    // nullptr

    int *ptr = nullptr; // Quand on déclare un pointeur vide, pour être sur qu'il soit vide et qu'il n'ait pas une valeur innatendue
    int x = 7;

    if(ptr == nullptr) {
        cout << "Aucune adresse n'a ete attribuee au pointeur" << endl;
    }
    else {
        cout << "Une adresse a ete attribuee au pointeur" << endl;
        cout << ptr << " = " << *ptr << endl;
    }

    ptr = &x;

    if(ptr == nullptr) {
        cout << "Aucune adresse n'a ete attribuee au pointeur" << endl;
    }
    else {
        cout << "Une adresse a ete attribuee au pointeur" << endl;
        cout << ptr << " = " << *ptr << endl;
    }

    return 0;
}