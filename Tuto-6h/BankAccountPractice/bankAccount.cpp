#include <iostream>
using namespace std;

void montrerSolde(double solde);
double deposer();
double retirer(double compte);

int main() {

    double compte = 500;
    int choix;

    cout << "**********\n";
    cout << "* Banque *\n";
    cout << "**********\n";
    cout << "1. Montrer le solde\n";
    cout << "2. Deposer\n";
    cout << "3. Retirer\n";
    cout << "4. Quitter\n";
    cout << "----------\n";

    do {
        cout << "Choix : ";
        cin >> choix;
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