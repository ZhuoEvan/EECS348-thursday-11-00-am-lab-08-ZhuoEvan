#include "matrix.hpp"
#include <iostream>

// implementation of functions declared in matrix.hpp goes here
// function definitions for a class have their names prefixed with
// the class name and "::"

// e.g. for the constructor:

Matrix::Matrix(size_t N) {
    std::vector<std::vector<int>> myMatrix;
    // initialize an empty NxN matrix
}

Matrix::Matrix(std::vector<std::vector<int>> nums) {

}

// e.g. for a member function:
Matrix Matrix::operator+(const Matrix &rhs) const {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrixA.nums[i][j] = this.nums[i][j] + rhs.nums[i][j];
        }
    }
}
Matrix Matrix::operator*(const Matrix &rhs) const {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrixA.nums[i][j] = this.nums[i][j] * rhs.nums[j][i];
        }
    }
}
void Matrix::set_value(std::size_t i, std::size_t j, int n) {
    nums[i][j] = n;
}
int Matrix::get_value(std::size_t i, std::size_t j) const {
    int value = nums[i][j];
    return value;
}
int Matrix::get_size() const {
    return N;
}
int Matrix::sum_diagonal_major() const {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum = sum + myMatrix[i][i];
    }
    return sum;
}
int Matrix::sum_diagonal_minor() const {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum = sum + myMatrix[i][N - i];
    }
    return sum;
}
void Matrix::swap_rows(std::size_t r1, std::size_t r2); {}
void Matrix::swap_cols(std::size_t c1, std::size_t c2); {}

void Matrix::print_matrix() const {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << nums[i][j];
        }
        std::cout << std::endl;
    }
}
