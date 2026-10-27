/*
Utilisation de l'algo de Luhn :
Base :  6011 0009 9013 9424

Doubler chaque 2 valeurs de droite à gauche :
    ->  12 2  0 0  18 2  18 4

Si le resultat est en 2 valeurs, les separer :
    ->  1 2 2  0 0  1 8 2  1 8 4

Tout additionner :
    ->  29

Additionner tous les autres valeurs de gauche à droite :
         0 1  0 9  0 3  4 4
    ->  21

Additionner les deux resultats :
    ->  50

Valide si le résultat est divisible par 10 (%10)
    50%10 -> Oui

*/

#include <iostream>
using namespace std;

int getDigit(const int number);
int sommeDigitImpair(string cc);
int sommeDigitPair(string cc);

int main() {

    string creditCard = "6011000990139424";
    int somme;

    cout << "Carte : " << creditCard << endl;

    cout << "Somme Impaire : " << sommeDigitImpair(creditCard) << endl;
    cout << "Somme Paire : " << sommeDigitPair(creditCard) << endl;

    somme = sommeDigitImpair(creditCard) + sommeDigitPair(creditCard);
    cout << "Somme totale : " << somme << endl;

    if((somme%10) == 0) {
        cout << "Numero de carte valide.";
    } else {
        cout << "Numero de carte non valide.";
    }

    return 0;
}

int getDigit(const int number){
    return ((number / 10) % 10) + number % 10;
}

int sommeDigitImpair(string cc){
    int sommeImpair = 0;
    for(int i = cc.size()-1; i >=0; i-=2) {
        sommeImpair += (cc[i] - '0');   // Le - '0' c'est pour avoir la bonne valeur car dans la table ascii 0 c'est 48, pas 0. Et avec - '0' ca remet à 0 (ca fait -48...)
    }
    return sommeImpair;
}

int sommeDigitPair(string cc){
    int sommePair = 0;
    for(int i = cc.size()-2; i >=0; i-=2) {
        sommePair += getDigit((cc[i] - '0') * 2);
    }

    return sommePair;
}