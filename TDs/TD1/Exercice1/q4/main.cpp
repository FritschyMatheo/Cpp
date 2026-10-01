// Exercice 1 question 4

#include <string>
#include "ex1-4.h"

using namespace std;

int main() {
    My_Class objet;
    objet.print_my_element();
    My_Class objet2("Message test, parametre");
    objet2.print_my_element();
    return 0;
}