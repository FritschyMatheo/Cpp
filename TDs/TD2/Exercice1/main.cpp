#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"
#include <algorithm>
using namespace std;

int main() {
    vector<int> valeurs1 = {1, 6, 7, 13, 24, 117, 42, 10};
    vector<int> valeursNulles = {};
    vector<int> valeursTriees = {1, 6, 7, 10, 13, 24, 42, 117};

    // Linear Search
    LinearSearch rechercheLin;

    int r1, r2, r3;

    cout << "\nLinear Search\nVecteur 1 (pas dans l'ordre) : {1, 6, 7, 13, 24, 117, 42, 10}\n";

    r1 = rechercheLin.search(valeurs1, 13);
    rechercheLin.displaySearchResults(cout, r1, 13);
    r2 = rechercheLin.search(valeurs1, 404);
    rechercheLin.displaySearchResults(cout, r2, 404);
    r3 = rechercheLin.search(valeurs1, 10);
    rechercheLin.displaySearchResults(cout, r3, 10);

    // Jump Search
    JumpSearch rechercheJump;

    int r4, r5, r6;

    cout << "\nJump Search\nVecteur 2 dans l'ordre : {1, 6, 7, 10, 13, 24, 42, 117}\n";

    r4 = rechercheJump.search(valeursNulles, 2);
    rechercheJump.displaySearchResults(cout, r4, 2);
    r5 = rechercheJump.search(valeursTriees, 7);
    rechercheJump.displaySearchResults(cout, r5, 7);
    r6 = rechercheJump.search(valeursTriees, 117);
    rechercheJump.displaySearchResults(cout, r6, 117);

    // Binary Search
    BinarySearch rechercheBin;

    int r7, r8, r9, r10, r11, r12;

    cout << "\nBinary Search\nVecteur 2 dans l'ordre : {1, 6, 7, 10, 13, 24, 42, 117}\n";

    r7 = rechercheBin.search(valeursTriees, 117);       // dernier element
    rechercheBin.displaySearchResults(cout, r7, 117);
    r8 = rechercheBin.search(valeursTriees, 500);       // absent, plus grand que tout
    rechercheBin.displaySearchResults(cout, r8, 500);
    r9 = rechercheBin.search(valeursTriees, 0);         // absent, plus petit que tout
    rechercheBin.displaySearchResults(cout, r9, 0);
    r10 = rechercheBin.search(valeursTriees, 1);        // premier element
    rechercheBin.displaySearchResults(cout, r10, 1);
    r11 = rechercheBin.search(valeursTriees, 13);       // element au milieu
    rechercheBin.displaySearchResults(cout, r11, 13);
    r12 = rechercheBin.search(valeursNulles, 2);        // vecteur vide
    rechercheBin.displaySearchResults(cout, r12, 2);

    return 0;
}
