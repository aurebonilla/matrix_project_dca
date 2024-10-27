// matrix.h
#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>

class Matrix {
public:
    Matrix(int rows, int cols);
    void fill(double value);
    Matrix multiply(const Matrix &other);
    void print();

private:
    int rows_, cols_;
    std::vector<std::vector<double>> data_;
};

#endif
