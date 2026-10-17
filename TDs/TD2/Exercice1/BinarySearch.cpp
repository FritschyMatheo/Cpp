#include "BinarySearch.h"
using namespace std;

int BinarySearch::search(const std::vector<int>& vecteur, int recherche) {
    numberComparisons = 0;

    int gauche = 0;
    int droite = static_cast<int>(vecteur.size()) - 1;

    while (gauche <= droite) {
        numberComparisons++;
        int milieu = (gauche + droite)/2;

        if(vecteur[milieu] == recherche) {
            return milieu;
        }
        else if(vecteur[milieu] < recherche) {
            gauche = milieu+1;
        }
        else {
            droite = milieu-1;
        }
    }
    return -1;
}