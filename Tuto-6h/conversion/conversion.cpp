#include <iostream>
using namespace std;

int main() {

    int x = 3.14; // 3.14 emplicitement converti en int est donc tronqué
    double y = 3.14;

    cout << x << endl << y;
    y = (int) 3.14; // 3.14 est explicitement converti en int et aussi tronqué
    cout << endl << y;

    // Exemple
    int correct = 8;
    int questions = 10;
    double score = correct/questions * 100; // Marhce pas car la division de deux int donne un int et donc 0 ici car la partie décimale est tronquée
    cout << endl << score;
    // Faut faire un cast :
    score = (double)correct/questions * 100;
    cout << endl << score;




    return 0;
}