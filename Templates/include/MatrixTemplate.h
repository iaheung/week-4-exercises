#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>

// Matrix class template
template<typename T>
class Matrix {
private:
    std::vector<std::vector<T>> data;
    size_t rows, cols;

public:
    // Constructor: Initialize matrix with given dimensions and an optional default value
    Matrix(size_t rows, size_t cols, T default_value = T()) : rows(rows), cols(cols) {
        data.resize(rows, std::vector<T>(cols, default_value));
    }

    // Access element (read & write) using operator()
    T& operator()(size_t i, size_t j) {
        if (i >= rows || j >= cols) {
            throw std::out_of_range("Matrix index out of bounds");
        }
        return data[i][j];
    }

    // Read-only access
    const T& operator()(size_t i, size_t j) const {
        if (i >= rows || j >= cols) {
            throw std::out_of_range("Matrix index out of bounds");
        }
        return data[i][j];
    }

    // Get number of rows
    size_t getRows() const { return rows; }

    // Get number of columns
    size_t getCols() const { return cols; }

    // Overload + for matrix addition
    Matrix<T> operator+(const Matrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions must match for addition");
        }
        Matrix<T> result(rows, cols);
        for (size_t i = 0; i < rows; i++) {
            for (size_t j = 0; j < cols; j++) {
                result(i, j) = data[i][j] + other(i, j);
            }
        }
        return result;
    }

    // Overload * for matrix multiplication
    Matrix<T> operator*(const Matrix<T>& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrix multiplication dimension mismatch");
        }
        Matrix<T> result(rows, other.cols);
        for (size_t i = 0; i < rows; i++) {
            for (size_t j = 0; j < other.cols; j++) {
                result(i, j) = T(); // Initialize to zero-like value
                for (size_t k = 0; k < cols; k++) {
                    result(i, j) = result(i, j) + data[i][k] * other(k, j);
                }
            }
        }
        return result;
    }

    // Print matrix using <<
    friend std::ostream& operator<<(std::ostream& os, const Matrix<T>& mat) {
        for (size_t i = 0; i < mat.rows; i++) {
            for (size_t j = 0; j < mat.cols; j++) {
                os << mat(i, j) << " ";
            }
            os << std::endl;
        }
        return os;
    }
};
