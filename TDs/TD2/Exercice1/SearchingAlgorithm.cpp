#include "SearchingAlgorithm.h"
using namespace std;

SearchingAlgorithm::SearchingAlgorithm():numberComparisons(0) {}

void SearchingAlgorithm::displaySearchResult(ostream& os, int result, int target) {
    os << "Resultat : " << result << " Target : " << target;
}

int totalComparisons = 0;
int totalSearch = 0;
double averageComparaisons = 0;

