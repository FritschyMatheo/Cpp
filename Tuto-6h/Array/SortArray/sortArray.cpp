#include <iostream>
#include <string>
using namespace std;

void trier(int tableau[], int taille);

int main() {
    int tableauNonTrie[] = {7,6,1,3,2,5,10,8,9,4};
    int taille = static_cast<int>(sizeof(tableauNonTrie)/sizeof(tableauNonTrie[0]));

    for(int nombre : tableauNonTrie) {
        cout << nombre << " ";
    }

    cout << "\nTableau apres fonction trier :\n";
    trier(tableauNonTrie, taille);
    for(int nombre : tableauNonTrie) {
        cout << nombre << " ";
    }

    return 0;
}

void trier(int tableau[], int taille) {
    int temp;
    for(int i = 0; i < taille - 1; i++) {
        for(int j = 0; j < taille - i - 1; j++) {
            if(tableau[j] > tableau[j + 1]) {   // Si on change le signe ici, ca change l'ordre du trie
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}