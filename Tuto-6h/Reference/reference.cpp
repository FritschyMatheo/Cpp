#include <iostream>
using namespace std;

void swapSansref(string x, string y);
void swapAvecref(string &x, string &y);
int main() {

    string x = "Hello X";
    string y = "Goodbye Y";

    cout << "Valeurs de base :\n";
    cout << "x : " << x << " (" << &x << ")" << '\n';
    cout << "y : " << y << " (" << &y << ")"  << '\n';

    cout << "\nValeurs apres swapSansref :\n";

    swapSansref(x, y);  // Ici c'est juste dans la fonction que ca les modifie car ca fait une copie des valeurs
    cout << "x : " << x << " (" << &x << ")"  << '\n';
    cout << "y : " << y << " (" << &y << ")"  << '\n';

    cout << "\nValeurs apres swapAvecref :\n";

    swapAvecref(x, y);  // Ici on agit sur l'adresse memoire mais elle ne bouge pas
    cout << "x : " << x << " (" << &x << ")"  << '\n';
    cout << "y : " << y << " (" << &y << ")"  << '\n';

    return 0;
}

void swapSansref(string x, string y) {
    string temp = x;
    x = y;
    y = temp;
}

void swapAvecref(string &x, string &y) {
    string temp = x;
    x = y;
    y = temp;
}