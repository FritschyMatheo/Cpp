// Exercice 2

#include <iostream>
#include "Complex2D.h"
using namespace std;

// Constructeur par défaut
Complex2D::Complex2D() {
    _re = 6.0;
    _im = 2.0;
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
Complex2D::Complex2D(Complex2D &copie) {
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