// matrix.cpp
#include "matrix.h"

Matrix::Matrix(int rows, int cols) : rows_(rows), cols_(cols), data_(rows, std::vector<double>(cols, 0)) {}

void Matrix::fill(double value) {
    for (auto &row : data_)
        std::fill(row.begin(), row.end(), value);
}

Matrix Matrix::multiply(const Matrix &other) {
    Matrix result(rows_, other.cols_);
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < other.cols_; ++j) {
            for (int k = 0; k < cols_; ++k) {
                result.data_[i][j] += data_[i][k] * other.data_[k][j];
            }
        }
    }
    return result;
}

void Matrix::print() {
    for (const auto &row : data_) {
        for (double val : row) std::cout << val << " ";
        std::cout << std::endl;
    }
}
