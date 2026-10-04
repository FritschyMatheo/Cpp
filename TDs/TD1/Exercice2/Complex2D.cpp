// Exercice 2

#include <iostream>
#include "Complex2D.h"
#include <cmath>
#include <stdexcept>
using namespace std;

// Constructeur par défaut
Complex2D::Complex2D() {
    _re = 1.0;
    _im = -3.0;
}

// Constructeur paramétrable
Complex2D::Complex2D(double a, double b) {
    _re = a;
    _im = b;
}

// Constructeur qui met la même valeur aux deux attributs
Complex2D::Complex2D(double ab) {
    _re = ab;
    _im = ab;
}

// Constructeur par copie d'un autre complex
Complex2D::Complex2D(const Complex2D &copie) {
    _re = copie._re;
    _im = copie._im;
}


double Complex2D::getRe() const {
    return _re;
}

double Complex2D::getIm() const {
    return _im;
}

void Complex2D::setRe(double a) {
    _re = a;
}

void Complex2D::setIm(double b) {
    _im = b;
}

Complex2D Complex2D::operator+(const Complex2D &autre) const{
    Complex2D resultat;
    resultat._re = _re + autre._re;
    resultat._im = _im + autre._im;
    return resultat;
}

Complex2D Complex2D::operator-(const Complex2D &autre) const{
    Complex2D resultat;
    resultat._re = _re - autre._re;
    resultat._im = _im - autre._im;
    return resultat;
}

Complex2D Complex2D::operator*(const Complex2D &autre) const{
    Complex2D resultat;
    resultat._re = (_re * autre._re) - (_im * autre._im);
    resultat._im = _re * autre._im + _im * autre._re;
    return resultat;
}

Complex2D Complex2D::operator/(const Complex2D &autre) const{
    if (autre._re == 0.0 && autre._im == 0.0) throw invalid_argument("Le denominateur sera egal a 0\
         car ls parties reel et imaginaire sont nulles -> erreur de division par 0");
    Complex2D conjugue(autre._re, -autre._im);
    Complex2D num = *this * conjugue;
    Complex2D denom = autre * conjugue;
    Complex2D resultat(num._re/denom._re, num._im/denom._re);
    return resultat;
}

bool Complex2D::operator<(const Complex2D &autre) const{
    double module1 = sqrt(pow(_re, 2) + pow(_im, 2));
    double module2 = sqrt(pow(autre._re, 2) + pow(autre._im, 2));
    return module1<module2;
}

bool Complex2D::operator>(const Complex2D &autre) const{
    double module1 = sqrt(pow(_re, 2) + pow(_im, 2));
    double module2 = sqrt(pow(autre._re, 2) + pow(autre._im, 2));
    return module1>module2;
}

// Ajout de la surcharge d'opérateur "<<" pour les prints qui change selon la valeur de i
ostream& operator<<(ostream& os, const Complex2D& nombrec) {
    if(nombrec.getIm() == 1) {
        os << nombrec.getRe() << " + i";
    }
    else if(nombrec.getIm() == -1) {
        os << nombrec.getRe() << " - i";
    }
    else if(nombrec.getIm() > 0) {
        os << nombrec.getRe() << " + " << nombrec.getIm() << "i";
    }
    else if(nombrec.getIm() < 0) {
        os << nombrec.getRe() << " - " << -nombrec.getIm() << "i";
    }
    else{
        os << nombrec.getRe();
    }
    return os;
}