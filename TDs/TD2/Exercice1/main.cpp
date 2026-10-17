#include "LinearSearch.h"
#include "JumpSearch.h"
using namespace std;

int main() {
    vector<int> valeurs1 = {1, 6, 7, 13, 24, 117, 42, 10};
    vector<int> valeursNulles = {};

    LinearSearch rechercheLin;

    int r1, r2, r3;

    r1 = rechercheLin.search(valeurs1, 13);
    rechercheLin.displaySearchResults(cout, r1, 13);
    r2 = rechercheLin.search(valeurs1, 404);
    rechercheLin.displaySearchResults(cout, r2, 404);
    r3 = rechercheLin.search(valeurs1, 10);
    rechercheLin.displaySearchResults(cout, r3, 10);

    vector<int> valeursTriees = {1, 6, 7, 10, 13, 24, 42, 117};
    JumpSearch rechercheJump;

    int r4, r5, r6;

    r4 = rechercheJump.search(valeursNulles, 2);
    rechercheJump.displaySearchResults(cout, r4, 2);
    r5 = rechercheJump.search(valeursTriees, 7);
    rechercheJump.displaySearchResults(cout, r5, 7);
    r6 = rechercheJump.search(valeursTriees, 7);
    rechercheJump.displaySearchResults(cout, r6, 117);

    return 0;
}