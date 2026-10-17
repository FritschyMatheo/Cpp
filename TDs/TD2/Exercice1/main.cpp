#include "LinearSearch.h"
using namespace std;

int main() {
    vector<int> valeurs1 = {1, 6, 7, 13, 24, 117, 42, 10};
    LinearSearch rechercheLin;

    int r1, r2, r3;

    r1 = rechercheLin.search(valeurs1, 13);
    rechercheLin.displaySearchResults(cout, r1, 13);
    r2 = rechercheLin.search(valeurs1, 404);
    rechercheLin.displaySearchResults(cout, r2, 404);
    r3 = rechercheLin.search(valeurs1, 10);
    rechercheLin.displaySearchResults(cout, r3, 10);

    return 0;
}