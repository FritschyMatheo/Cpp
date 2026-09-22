#include <iostream>

using namespace std;

int main() {
    // Ordre comme en arithmétique classique :
    // Parenthèses -> multiplications & divisions -> additions & soustractions

    int skylanders = 20;
    cout << skylanders;
    skylanders = skylanders + 3;
    cout << endl << skylanders;  
    skylanders += 2; 
    cout << endl << skylanders;
    skylanders++;
    cout << endl << skylanders;

    skylanders--;
    cout << endl << skylanders;
    skylanders-=2;
    cout << endl << skylanders;
    skylanders = skylanders - 3;
    cout << endl << skylanders;

    skylanders*=2;
    cout << endl << skylanders;
    skylanders = skylanders * 3;
    cout << endl << skylanders;

    skylanders/=2;
    cout << endl << skylanders;
    skylanders = skylanders / 3;
    cout << endl << skylanders;

    // La division sur un int tronque la partie décimale :
    int exemple1 = 6;
    double exemple2 = 6;

    cout << endl << exemple1/4;
    cout << endl << exemple2/4;

    // Le reste c'est avec le modulo (%)

    int reste = exemple1%2;
    cout << endl << reste;

    return 0;
}