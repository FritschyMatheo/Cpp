#include <iostream>
using namespace std;

const double PI = 3.1415926535897932384626;

void description(string nom, int age, int tailleCm);
double airCarre(double l);
double volumeCube(double l);
string formatAir(double air);
string formatVolume(double volume);

int main() {
    
    //description("Matteo", 21, 161);
    string ju = "Julien";
    int ageJu = 21;
    description(ju, ageJu, 192);

    double longueur1 = 8.0;
    double longueur2 = 13.5;

    double air1 = airCarre(longueur1);
    double volume1 = volumeCube(longueur1);

    double air2 = airCarre(longueur2);
    double volume2 = volumeCube(longueur2);
    

    cout << formatAir(air1);
    cout << formatVolume(volume1);
    cout << formatAir(air2);
    cout << formatVolume(volume2);

    return 0;
}

void description(string nom, int age, int tailleCm) {
    cout << "Le nom de l'individu est " << nom << ", il a " << age << " ans et mesure " << (double)tailleCm/100 << "m..?\n";
}

double airCarre(double l) {
    double air = l*l;
    return air;
}

double volumeCube(double l) {
    double volume = l*l*l;
    return volume;
}

string formatAir(double air) {
    string format = "Une face du cube a pour air : " + to_string(air) + " cm^2\n";
    return format;
}

string formatVolume(double volume) {
    string format = "Le volume du cube est de : " + to_string(volume) + " cm^3\n";
    return format;
}