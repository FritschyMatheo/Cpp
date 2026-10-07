#include <iostream>
using namespace std;

void kebab();
void kebab(string accompagnement);
//          ^ Signature de la fonction dans les parenthèses -> Mêmes nom mais pas les mêmes paramètres
void kebab(string accompagnement1, string accompagnement2);

int main() {

    kebab();
    kebab("salade");
    kebab("salade", "oignons");

    return 0;
}

void kebab(){
    cout << "Voila un kebab\n";
}

void kebab(string accompagnement){
    cout << "Voila un kebab + " << accompagnement << "\n";
}

void kebab(string accompagnement1, string accompagnement2){
    cout << "Voila un kebab + " << accompagnement1 << " + " << accompagnement2 << "\n";
}