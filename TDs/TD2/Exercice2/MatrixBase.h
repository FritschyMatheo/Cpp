#ifndef MATRIXBASE_H
#define MATRIXBASE_H
#include <iostream>
#include <vector>

template <typename T>
class MatrixBase {
    protected:
        std::vector<std::vector<T>> data;
        size_t rows, cols;
    public:
        MatrixBase();
        MatrixBase(size_t rows, size_t cols);
        MatrixBase(size_t rows, size_t cols, const T& valeur);
        virtual ~MatrixBase() = default;

        void addElement(size_t i, size_t j, const T& valeur);
        T getElement(size_t i, size_t j) const;
        size_t getRows() const;
        size_t getCols() const;
        void Display(std::ostream& os) const;
};

template <typename T>
MatrixBase<T>::MatrixBase() : rows(0), cols(0) {}

template <typename T>
MatrixBase<T>::MatrixBase(size_t rows, size_t cols)
    : data(rows, std::vector<T>(cols, T())), rows(rows), cols(cols) {}

template <typename T>
MatrixBase<T>::MatrixBase(size_t rows, size_t cols, const T& valeur)
    : data(rows, std::vector<T>(cols, valeur)), rows(rows), cols(cols) {}

template <typename T>
void MatrixBase<T>::addElement(size_t i, size_t j, const T& valeur) {
    data.at(i).at(j) = valeur;
}

template <typename T>
T MatrixBase<T>::getElement(size_t i, size_t j) const {
    return data.at(i).at(j);
}

template <typename T>
size_t MatrixBase<T>::getRows() const {
    return rows;
}

template <typename T>
size_t MatrixBase<T>::getCols() const {
    return cols;
}

template <typename T>
void MatrixBase<T>::Display(std::ostream& os) const {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            os << data[i][j] << "\t";
        }
        os << "\n";
    }
}

#endif
