/*
Definir la classe
Utiliser les templates pour pouvoir utiliser n'importe quel type dans les matrices
Definir les fonctions
*/

#include "MatrixBase.h"
#include "MatrixNumerical.h"
#include <string>
using namespace std;

int main() {
    // MatrixBase<int>
    MatrixBase<int> m1(3, 3);
    m1.addElement(0, 0, 7);
    m1.addElement(0, 1, 6);
    m1.addElement(0, 2, 7);
    m1.addElement(1, 1, 7);

    cout << "\nMatrixBase<int> 3x3 :\n";
    m1.Display(cout);
    cout << "Rows = " << m1.getRows() << ", Cols = " << m1.getCols() << "\n";
    cout << "getElement(1, 1) = " << m1.getElement(1, 1) << "\n";

    // MatrixBase<string>
    MatrixBase<string> m2(2, 2, "x");
    m2.addElement(1, 0, "abc");

    cout << "\nMatrixBase<string> 2x2 :\n";
    m2.Display(cout);

    // Matrice vide (par defaut)
    MatrixBase<double> m3;
    m3.Display(cout); // Rien ne s'affiche du coup
    cout << "\nMatrice vide : Rows = " << m3.getRows() << ", Cols = " << m3.getCols() << "\n";

    // MatrixNumerical : operateurs + - *
    MatrixNumerical<int> a(2, 2);
    a.addElement(0, 0, 1);
    a.addElement(0, 1, 2);
    a.addElement(1, 0, 3);
    a.addElement(1, 1, 4);

    MatrixNumerical<int> b(2, 2);
    b.addElement(0, 0, 5);
    b.addElement(0, 1, 6);
    b.addElement(1, 0, 7);
    b.addElement(1, 1, 8);

    cout << "\nA :\n";
    a.Display(cout);
    cout << "\nB :\n";
    b.Display(cout);
    cout << "\nA + B (attendu 6 8 / 10 12) :\n";
    (a + b).Display(cout);
    cout << "\nA - B (attendu -4 -4 / -4 -4) :\n";
    (a - b).Display(cout);
    cout << "\nA * B (attendu 19 22 / 43 50) :\n";
    (a * b).Display(cout);

    // Produit de matrices non carrees : (2x3) * (3x2) = 2x2
    MatrixNumerical<int> c(2, 3, 1);
    MatrixNumerical<int> d(3, 2, 2);
    cout << "\nC(2x3, que des 1) * D(3x2, que des 2) (attendu 6 6 / 6 6) :\n";
    (c * d).Display(cout);

    // Identite (static)
    MatrixNumerical<double> id = MatrixNumerical<double>::getIdentity(3);
    cout << "\nIdentite 3x3 :\n";
    id.Display(cout);
    cout << "\nA * I (attendu A) :\n";
    (a * MatrixNumerical<int>::getIdentity(2)).Display(cout);

    // Determinant
    MatrixNumerical<int> m(3, 3);
    m.addElement(0, 0, 2);
    m.addElement(0, 2, 1);
    m.addElement(1, 0, 1);
    m.addElement(1, 1, 3);
    m.addElement(1, 2, 2);
    m.addElement(2, 0, 1);
    m.addElement(2, 1, 1);
    m.addElement(2, 2, 2);

    cout << "\nM :\n";
    m.Display(cout);
    cout << "det(A) = " << a.getDeterminant() << " (attendu -2)\n";
    cout << "det(M) = " << m.getDeterminant() << " (attendu 6)\n";
    cout << "det(I4) = " << MatrixNumerical<int>::getIdentity(4).getDeterminant() << " (attendu 1)\n";

    // Inverse
    cout << "\ninverse(A) (attendu -2 1 / 1.5 -0.5) :\n";
    a.getInverse().Display(cout);
    cout << "\ninverse(M) :\n";
    m.getInverse().Display(cout);

    // Division : X / Y = X * inverse(Y)
    cout << "\nM / M (attendu identite) :\n";
    (m / m).Display(cout);
    cout << "\nB / A (attendu -1 2 / -2 3) :\n";
    (b / a).Display(cout);

    // Cas d'erreur
    MatrixNumerical<int> singuliere(2, 2);
    singuliere.addElement(0, 0, 1);
    singuliere.addElement(0, 1, 2);
    singuliere.addElement(1, 0, 2);
    singuliere.addElement(1, 1, 4);
    try {
        singuliere.getInverse();
    }
    catch (const invalid_argument& e) {
        cout << "Erreur attendue : " << e.what() << "\n";
    }
    try {
        c.getDeterminant();
    }
    catch (const invalid_argument& e) {
        cout << "Erreur attendue : " << e.what() << "\n";
    }

    return 0;
}
