// Exercice 2

// Pour tester, créer deux objets et tester toutes les opérations

#include <iostream>
#include "Complex2D.h"
using namespace std;

int main() {

    cout << "\n---- Constructeurs ----\n";
    Complex2D parDefaut;
    cout << "Constructeur par defaut : " << parDefaut << "\n";
    Complex2D parametre(-2.0,5.0);
    cout << "Constructeur deux parametre : " << parametre << "\n";
    Complex2D unParametre(1.0);
    cout << "Constructeur un parametre : " << unParametre << "\n";
    Complex2D copie(parDefaut);
    cout << "Constructeur par copie (du default) : " << copie << "\n";

    cout << "\n---- Getters et Setters ----\n";
    Complex2D s;
    s.setRe(9.0);
    s.setIm(-4.0);
    cout << "Re = " << s.getRe() << ", Im = " << s.getIm() << "\n";

    cout << "\n---- Operations ----\n";
    cout << parDefaut << " + " << parametre << " = " << parDefaut + parametre << "\n";
    cout << parDefaut << " - " << parametre << " = " << parDefaut - parametre << "\n";
    cout << parDefaut << " * " << parametre << " = " << parDefaut * parametre << "\n";
    cout << parDefaut << " / " << parametre << " = " << parDefaut / parametre << "\n";

    Complex2D c1(6.0,6.0), c2(2.0,5.0) ;

    cout << "\nResultat bool :";
    cout << "\nc1 < c2 : " << (c1 < c2) << endl;
    cout << "c1 > c2 : " << (c1 > c2);

    return 0;

}