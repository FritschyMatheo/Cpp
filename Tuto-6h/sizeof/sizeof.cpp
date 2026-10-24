#include <iostream>
using namespace std;

int main() {
    // sizeof() determine la taille en octet de : variables, data types, class, objet...

    double prix = 7.99;

    cout << "7.99 : " << sizeof(prix) << " octet(s)\n";
    cout << "1 : " << sizeof(1) << " octet(s)\n";

    int tab[] = {6, 8, 4, 3, 50};
    cout << "tab : " << sizeof(tab) << " octet(s)\n";
    cout << "tab[4] : " << sizeof(tab[4]) << " octet(s)\n";

    string str = "Test octets";
    cout << "str : " << sizeof(str) << " octet(s)\n";

    cout << "char a : " << sizeof('a') << " octet(s)\n";
    char a = 'a';
    cout << "char 'a' (variable) : " << sizeof(a) << " octet(s)\n";
    cout << "string \"a\" : " << sizeof("a") << " octet(s)\n";
    string ab = "ab";
    cout << "string ab (variable) : " << sizeof(ab) << " octet(s)\n";
    cout << "string \"ab\" : " << sizeof("ab") << " octet(s)\n";

    cout << "\n--- Variables vides ---\n";
    string name;
    cout << "\nstring : " << sizeof(name);
    int test;
    cout << "\nint : " << sizeof(test);
    bool boolean;
    cout << "\nbool : " << sizeof(boolean);
    char caractete;
    cout << "\nchar : " << sizeof(caractete);
    float fl;
    cout << "\nfloat : " << sizeof(fl);
    double dbl;
    cout << "\ndouble : " << sizeof(dbl) << endl;

    // Compter les elements d'une liste grace a la taille du type :
    float liste[] = {6, 5.2, 8.12, 3.14};
    cout << sizeof(liste)/sizeof(float) << " elements\n";

    char liste2[] = {'a', 'U'};
    cout << sizeof(liste2)/sizeof(char) << " elements";

    return 0;
}