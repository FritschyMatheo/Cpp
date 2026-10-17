#include "JumpSearch.h"
#include <cmath>
#include <algorithm>

// Ne marche que sur un vecteur trier en amont

using namespace std;

int JumpSearch::search(const std::vector<int>& vecteur, int recherche) {
    numberComparisons = 0;
    size_t n = vecteur.size();
    if (n==0) {
        return -1;
    }

    size_t pas = static_cast<size_t>(sqrt(n));
    size_t  precedent = 0, i = 0;

    while (i < n) {
        numberComparisons++;
        if (vecteur[i] >= recherche) {
            break;
        }
        precedent = i;
        i+= pas;
    }
    size_t fin = min(i, n-1);

    for (size_t j = precedent; j <= fin; j++) {
        numberComparisons++;
        if (vecteur[j] == recherche) {
            return j;
        }
    }
    return -1;
}