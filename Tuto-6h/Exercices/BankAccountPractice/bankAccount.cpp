#include <iostream>
#include <limits>
using namespace std;

void montrerSolde(double solde);
double deposer();
double retirer(double compte);

int main() {

    double compte = 500;
    int choix;

    cout << "\n**********************\n";
    cout << "*       Banque       *\n";
    cout << "**********************\n\n";

    do {
        cout << "\n----------------------\n";
        cout << "1. Montrer le solde\n";
        cout << "2. Deposer\n";
        cout << "3. Retirer\n";
        cout << "4. Quitter\n";
        cout << "----------------------\n";
        cout << "Choix : ";
        cin >> choix;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(choix){
            case 1:
                montrerSolde(compte);
                break;
            case 2:
                compte += deposer();
                break;
            case 3:
                compte -= retirer(compte);
                break;
            case 4:
                cout << "Au revoir";
                break;
            default:
                cout << "Choix invalide\n";
                break;
        }
    } while(choix != 4);
    

    return 0;
}

void montrerSolde(double solde){
    cout << "\nVotre solde est de " << solde << " euros.\n";
}
double deposer() {
    double depot;
    cout << "Combien voulez vous deposer : ";
    cin >> depot;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (depot > 0) {
        return depot;
    }
    else {
        cout << "Montant de depot invalide.\n";
        return 0;
    }

}
double retirer(double compte) {
    double retrait;
    cout << "Combien voulez vous retirer : ";
    cin >> retrait;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (retrait < 0){
        cout << "Montant de retrait invalide.\n";
        return 0;
    }
    else if (retrait > compte) {
        cout << "Montant de retrait trop grand compare au compte.\n";
        return 0;
    }
    else {
        return retrait;
    }
}