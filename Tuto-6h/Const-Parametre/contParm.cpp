#include <iostream>
using namespace std;

void printInfo(const string name, const int age);
int main() {

    string name = "Charlo";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const string name, const int age) {  // Le const de l'argument empeche que sa valeur soit modifiée dans la fonction encore plus important si c'est une ref
    // Interdit ca :
    //name = "autre";
    //age = 7777
    cout << name << '\n';
    cout << age << " ans" << '\n';
}