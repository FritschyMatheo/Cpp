// Exercice 2

// A faire en premier
// les 4 Constructeurs à faire
// Part réelle et imaginaire double de types private
// Setters et getters public
// Opérateurs de surcharge

#ifndef COMPLEX2D_H
#define COMPLEX2D_H
#include <iostream>

class Complex2D {
    private:
        double _re, _im;

    public:
        Complex2D();
        Complex2D(double a, double b);
        Complex2D(double ab);
        Complex2D(Complex2D &copie);

        double getRe() const;
        double getIm() const;

        void setRe(double a);
        void setIm(double b);

        
};

#endif