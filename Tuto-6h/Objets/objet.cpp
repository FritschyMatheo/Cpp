#include <iostream>
using namespace std;

class Arme{
    public:
        // Attributs (ici, publiques)
        string nom;
        string rarete;
        int nbrBalles;
        int tailleChargeur;
        int degats;

        // Methodes
        void tirer(){
            if(nbrBalles > 0){
                cout << "*piou piou*\n";
                nbrBalles--;
            } else {
                cout << "Chargeur vide...\n";
            }
        }
        void recharger(){
            if(nbrBalles < tailleChargeur){
                cout << "*Recharge*\n";
                nbrBalles = tailleChargeur;
            } else {
                cout << "Chargeur deja plein.\n";
            }
        }
        void afficherStats(){
            cout << "\n- Nom : " << nom << endl;
            cout << "- Rarete : " << rarete << endl;
            cout << "- Nombre de balles actuel : " << nbrBalles << endl;
            cout << "- Taille du chargeur : " << tailleChargeur << endl;
            cout << "- Degats : " << degats << '\n' << endl;
        }
        void afficherBalles(){
            cout << nbrBalles << '/' << tailleChargeur << " balles" << endl;
        }
};

int main(){

    Arme scar;

    scar.nom = "Scar H";
    scar.rarete = "Legendaire";
    scar.nbrBalles = 30;
    scar.tailleChargeur = 30;
    scar.degats = 35;

    scar.afficherStats();
    
    scar.afficherBalles();

    scar.tirer();
    scar.tirer();
    scar.tirer();
    scar.tirer();

    scar.afficherBalles();

    scar.recharger();
    scar.afficherBalles();
    scar.recharger();
    scar.recharger();

    for(int i = 0; i < 33; i++){
        scar.tirer();
    }
    scar.recharger();
    scar.afficherBalles();
    scar.tirer();
    scar.tirer();

    Arme rpg;

    rpg.nom = "Lance-roquettes";
    rpg.rarete = "Rare";
    rpg.nbrBalles = 1;
    rpg.tailleChargeur = 1;
    rpg.degats = 110;

    rpg.afficherStats();
    rpg.recharger();

    return 0;
}