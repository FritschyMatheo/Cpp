#include <iostream>
#include <ctime>
using namespace std;

int main() {

    srand(time(NULL));
    int guess;
    int tries = 0;
    int randNum = rand() % 50 + 1;
    
    cout << "\n------ Devine le nombre ------\n\n";
    do {
        cout << "Essaie de deviner le nombre entre 0 et 50 : ";
        cin >> guess;
        tries++;
        if(guess > randNum) {
            cout << "Plus petit\n";
        }
        else if(guess < randNum) {
            cout << "Plus grand\n";
        }
    } while(guess != randNum);
    cout << "\nBien joue, tu as trouve le nombre " << randNum << " en " << tries << " essais !";

    return 0;
}