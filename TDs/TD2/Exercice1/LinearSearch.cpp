#include "LinearSearch.h"
using namespace std;

int LinearSearch::search(const std::vector<int>& vecteur, int recherche) {
    numberComparisons = 0;

    for (size_t i = 0; i < vecteur.size(); i++) {
        numberComparisons++;
        if (vecteur[i] == recherche) {
            return i;
        }
    }
    return -1;
}
