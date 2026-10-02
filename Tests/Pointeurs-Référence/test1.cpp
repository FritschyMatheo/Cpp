#include <iostream>

int x = 5;      // Variable
int* px = &x;   // Pointeur vers variable
int& r = x;     // Référence à la variable      (= variable)
int* pr = &r;   // Pointeur vers la référence   (= pointeur variable)


void afficherValeurs(int a, int* b, int c, int* d) {
        std::cout << std::endl << "Valeurs :" << std::endl;
        std::cout << x << std::endl;
        std::cout << *px << std::endl;
        std::cout << r << std::endl;
        std::cout << *pr << std::endl;
    }

void afficherAddresses(int a, int* b, int c, int* d) {
        std::cout << "Adresses :" << std::endl;
        std::cout << &x << std::endl;
        std::cout << px << std::endl;
        std::cout << &r << std::endl;
        std::cout << pr << std::endl;
    }

// void f(int& a) Ne marche pas
void f(const int& a) {
    std::cout << a << '\n';
}

int main(){

    afficherValeurs(x , px, r, pr);
    //afficherAddresses(x , px, r, pr);

    *px = 6;

    afficherValeurs(x , px, r, pr);
    //afficherAddresses(x , px, r, pr);

    r = 7;

    afficherValeurs(x , px, r, pr);
    //afficherAddresses(x , px, r, pr);

    f(5);


    return 0;
}