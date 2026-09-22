#include <iostream>
using namespace std;

int main() {
    string name;
    string age;
    cout << "Quel est ton age : ";
    cin >> age;    // Prend pas en compte la suite après un espace
    // Faut utiliser getline(cin, variable);
    cout << "Tu as " << name << "ans";
    cout << endl << "Entre ton nom + prenom : ";
    getline(cin >> ws, name);   // Mais bizarre avec le buffer et les \n
    cout << "Ton nom est " << name;

    return 0;
}
