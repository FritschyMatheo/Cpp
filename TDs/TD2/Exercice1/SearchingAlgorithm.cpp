#include "SearchingAlgorithm.h"
using namespace std;

SearchingAlgorithm::SearchingAlgorithm():numberComparisons(0) {}

void SearchingAlgorithm::displaySearchResults(ostream& os, int result, int target) {
    totalSearch++;
    totalComparisons += numberComparisons;
    averageComparisons = (double)totalComparisons / (double)totalSearch;
    os << "Indice dans le vecteur : " << result << " Target : " << target << " Nombre de comparaisons : " << numberComparisons << " Moyenne : " << averageComparisons << "\n";
}

int SearchingAlgorithm::totalComparisons = 0;
int SearchingAlgorithm::totalSearch = 0;
double SearchingAlgorithm::averageComparisons = 0;