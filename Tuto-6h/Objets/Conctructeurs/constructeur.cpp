#include <iostream>
using namespace std;

class Arme{
    public:
        // Attributs (ici, publiques)
        string nom;
        string rarete;
        int tailleChargeur;
        int nbrBalles;
        int degats;

        // Constructeur, il a le nom de la classe
        // Constructeur valué
        Arme(string nom_, string rarete_, int tailleChargeur_, int degats_) :
            nom(nom_),
            rarete(rarete_),
            tailleChargeur(tailleChargeur_),
            nbrBalles(tailleChargeur_),
            degats(degats_)
        {};

        // Constructeur par défaut
        Arme() :
            nom("Default"),
            rarete("Default"),
            tailleChargeur(0),
            nbrBalles(tailleChargeur),
            degats(0)
        {};

        /*
        Revient à faire :
        Arme(string nom, string rarete, int tailleChargeur, int degats){
            this->nom = nom;
            this->rarete = rarete;
            this->tailleChargeur = tailleChargeur;
            this->nbrBalles = tailleChargeur;
            this->degats = degats;            
        }

        Mais en plus propre, plus performant et moins de chance d'erreurs.
        */

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

    /*
    Au lieu de ca :
    scar.nom = "Scar H";
    scar.rarete = "Legendaire";
    scar.nbrBalles = 30;
    scar.tailleChargeur = 30;
    scar.degats = 35;

    On fait juste appelle au constructeur avec les valeurs en argument :
    */

    // Constructeur valué pour la scar et le rpg :
    Arme scar("Scar H", "Legendaire", 30, 35);
    scar.afficherStats();

    Arme rpg("Lance-roquettes", "Rare", 1, 110);
    rpg.afficherStats();

    // Constructeur par défaut :
    Arme parDefaut;
    parDefaut.afficherStats();  // A donc les caracteristiques du constructeur par défaut

    return 0;
}