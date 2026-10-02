#include <iostream>
using namespace std;

int main() {

    string name;

    while(name.empty()) {
        cout << "Quel est ton nom : ";
        getline(cin, name);
    }

    cout << "Salut " << name << " !!!\n";

    int nombre;

    do{
        cout << "Entre un nombre negatif : ";
        cin >> nombre;
    } while(nombre >= 0);

    cout << "C'est bon, " << nombre << " est negatif.";

    return 0;

    return 0;
}