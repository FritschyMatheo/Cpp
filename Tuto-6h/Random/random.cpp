#include <iostream>
#include <ctime>
using namespace std;

int main() {

    srand(time(NULL)); // srand change la graine, qui est actualisée chaque seconde sur le temps actuel
    
    // Variable random
    int num;
    for(int i=0; i<=3; i++) {
        num = (rand() % 6)+1; // Pour avoir entre 1 et 6 car les valeurs du rand peuvent être enormes
        cout << num << '\n';
    }

    // Evenement random
    int randOperation;

    for(int i=0; i<=5; i++) {
        randOperation = (rand() % 5) + 1;
        switch(randOperation){
            case 1: cout << "Cas 1";
                    break;
            case 2: cout << "Cas 2";
                    break;
            case 3: cout << "Cas 3";
                    break;
            case 4: cout << "Cas 4";
                    break;
            case 5: cout << "Cas 5";
                    break;
        }
        cout << endl;
    }
    

    return 0;
}