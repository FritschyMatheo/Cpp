#include <iostream>
using namespace std;

class Animal{
    protected:      // Protected plutot que private pour que les classes filles puissent voir
        string nom;
        string espece;
        int age;
        int poids;
        bool enVie;
    public:
        Animal() :
            nom("Sans nom"),
            espece("Animal par defaut"),
            age(0),
            poids(1),
            enVie(true)
        {};

        Animal(string _nom, string _espece, int _age, int _poids) :
            nom(_nom),
            espece(_espece),
            age(_age),
            poids(_poids),
            enVie(true)
        {};

        void manger(){
            cout << nom << " *mange*\n";
        }

        void stats(){
            cout << "\n- Nom : " << nom << '\n';
            cout << "- Espece : " << espece << '\n';
            cout << "- Age : " << age << '\n';
            cout << "- Poids : " << poids << '\n';
            if(enVie){
                cout << "- Etat : En vie\n";
            }
            else{
                cout << "- Etat : Mort\n";
            }
        }
};

class Chat : public Animal{
    private:
        string couleurPoils;
        int nbrVies;
    public:
        Chat() : Animal(), couleurPoils("Inconnue"), nbrVies(9) {}; // Constructeur par défaut qui hérite du constructeur par défaut parent

        Chat(string _nom, int _age, int _poids, string _poils, int _nbrVies) :
            Animal(_nom, "Chat", _age, _poids),
            couleurPoils(_poils),
            nbrVies(_nbrVies)
        {};

    void miauler(){
        cout << nom << " *miaule*";
    }
};

int main(){

    Animal nul;
    nul.stats();
    nul.manger();
    //nul.miauler();

    Chat chat2("Sacha", 15, 4, "Gris/Noirs", 5);
    chat2.stats();
    chat2.manger();
    chat2.miauler();

    return 0;
}