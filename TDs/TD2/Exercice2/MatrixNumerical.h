#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H
#include "MatrixBase.h"
#include <stdexcept>
#include <type_traits>
#include <cmath>

template <typename T>
class MatrixNumerical : public MatrixBase<T> {
    static_assert(std::is_arithmetic<T>::value, "MatrixNumerical : T doit etre numerique");
    public:
        MatrixNumerical();
        MatrixNumerical(size_t rows, size_t cols);
        MatrixNumerical(size_t rows, size_t cols, const T& valeur);

        MatrixNumerical<T> operator+(const MatrixNumerical<T>& autre) const;
        MatrixNumerical<T> operator-(const MatrixNumerical<T>& autre) const;
        MatrixNumerical<T> operator*(const MatrixNumerical<T>& autre) const;

        static MatrixNumerical<T> getIdentity(int n);

        T getDeterminant() const;
        MatrixNumerical<double> getInverse() const;
        MatrixNumerical<double> operator/(const MatrixNumerical<T>& autre) const;
};

template <typename T>
MatrixNumerical<T> getCoFactor(const MatrixNumerical<T>& m, size_t p, size_t q) {
    MatrixNumerical<T> sous(m.getRows() - 1, m.getCols() - 1);
    size_t ii = 0;
    for (size_t i = 0; i < m.getRows(); i++) {
        if (i == p) {
            continue;
        }
        size_t jj = 0;
        for (size_t j = 0; j < m.getCols(); j++) {
            if (j == q) {
                continue;
            }
            sous.addElement(ii, jj, m.getElement(i, j));
            jj++;
        }
        ii++;
    }
    return sous;
}

template <typename T>
MatrixNumerical<T>::MatrixNumerical() : MatrixBase<T>() {}

template <typename T>
MatrixNumerical<T>::MatrixNumerical(size_t rows, size_t cols) : MatrixBase<T>(rows, cols) {}

template <typename T>
MatrixNumerical<T>::MatrixNumerical(size_t rows, size_t cols, const T& valeur)
    : MatrixBase<T>(rows, cols, valeur) {}

template <typename T>
MatrixNumerical<T> MatrixNumerical<T>::operator+(const MatrixNumerical<T>& autre) const {
    if (this->rows != autre.rows || this->cols != autre.cols) {
        throw std::invalid_argument("operator+ : dimensions differentes");
    }
    MatrixNumerical<T> resultat(this->rows, this->cols);
    for (size_t i = 0; i < this->rows; i++) {
        for (size_t j = 0; j < this->cols; j++) {
            resultat.data[i][j] = this->data[i][j] + autre.data[i][j];
        }
    }
    return resultat;
}

template <typename T>
MatrixNumerical<T> MatrixNumerical<T>::operator-(const MatrixNumerical<T>& autre) const {
    if (this->rows != autre.rows || this->cols != autre.cols) {
        throw std::invalid_argument("operator- : dimensions differentes");
    }
    MatrixNumerical<T> resultat(this->rows, this->cols);
    for (size_t i = 0; i < this->rows; i++) {
        for (size_t j = 0; j < this->cols; j++) {
            resultat.data[i][j] = this->data[i][j] - autre.data[i][j];
        }
    }
    return resultat;
}

template <typename T>
MatrixNumerical<T> MatrixNumerical<T>::operator*(const MatrixNumerical<T>& autre) const {
    if (this->cols != autre.rows) {
        throw std::invalid_argument("operator* : cols de A != rows de B");
    }
    MatrixNumerical<T> resultat(this->rows, autre.cols);
    for (size_t i = 0; i < this->rows; i++) {
        for (size_t j = 0; j < autre.cols; j++) {
            T somme = T();
            for (size_t k = 0; k < this->cols; k++) {
                somme += this->data[i][k] * autre.data[k][j];
            }
            resultat.data[i][j] = somme;
        }
    }
    return resultat;
}

template <typename T>
MatrixNumerical<T> MatrixNumerical<T>::getIdentity(int n) {
    MatrixNumerical<T> identite(n, n);
    for (int i = 0; i < n; i++) {
        identite.data[i][i] = T(1);
    }
    return identite;
}

template <typename T>
T MatrixNumerical<T>::getDeterminant() const {
    if (this->rows != this->cols) {
        throw std::invalid_argument("getDeterminant : matrice non carree");
    }
    if (this->rows == 0) {
        return T(1);
    }
    if (this->rows == 1) {
        return this->data[0][0];
    }
    T det = T();
    int signe = 1;
    for (size_t j = 0; j < this->cols; j++) {
        det += signe * this->data[0][j] * getCoFactor(*this, 0, j).getDeterminant();
        signe = -signe;
    }
    return det;
}

template <typename T>
MatrixNumerical<double> MatrixNumerical<T>::getInverse() const {
    double det = static_cast<double>(getDeterminant());
    if (std::fabs(det) < 1e-9) {
        throw std::invalid_argument("getInverse : matrice non inversible (det = 0)");
    }
    size_t n = this->rows;
    MatrixNumerical<double> inverse(n, n);
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            double signe = ((i + j) % 2 == 0) ? 1.0 : -1.0;
            double cofacteur = signe * static_cast<double>(getCoFactor(*this, i, j).getDeterminant());
            inverse.addElement(j, i, cofacteur / det);
        }
    }
    return inverse;
}

template <typename T>
MatrixNumerical<double> MatrixNumerical<T>::operator/(const MatrixNumerical<T>& autre) const {
    MatrixNumerical<double> gauche(this->rows, this->cols);
    for (size_t i = 0; i < this->rows; i++) {
        for (size_t j = 0; j < this->cols; j++) {
            gauche.addElement(i, j, static_cast<double>(this->data[i][j]));
        }
    }
    return gauche * autre.getInverse();
}

#endif
