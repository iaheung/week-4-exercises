#include <iostream>
#include "Polynomial.h"
#include "Fraction.h"
#include "MatrixTemplate.h"

int main()
{
    int n_int = 5;
    int quad_int = quadratic(0, 2, 9, n_int);
    float quad_float = quadratic(0.0, 2.0, 9.0, 5.1);
    double quad_double = quadratic(0.0, 2.0, 9.0, 5.1);
    double d_quad = quadratic<double>(1.4, 2, 3.9, 0.1);
    std::cout << quad_int << std::endl;
    std::cout << quad_float << std::endl;
    std::cout << quad_double << std::endl;
    std::cout << d_quad << std::endl;

    Fraction a(1, 2);  
    Fraction b(3, 4);  
    Fraction c(2, 3);  
    Fraction x(5, 10); 

    Fraction quad_fraction = quadratic(a, b, c, x);
    
    std::cout << "Quadratic result (Fraction): " << quad_fraction << std::endl;

    Matrix<int> mat1(2, 2, 1);
    Matrix<int> mat2(2, 2, 2);
    Matrix<int> mat3 = mat1 + mat2;
    std::cout << "Matrix<int> Addition:\n" << mat3 << std::endl;

    // Matrix with double values
    Matrix<double> mat4(2, 2, 1.5);
    Matrix<double> mat5(2, 2, 2.5);
    Matrix<double> mat6 = mat4 * mat5;
    std::cout << "Matrix<double> Multiplication:\n" << mat6 << std::endl;

    // Matrix with Fraction values
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    
    Matrix<Fraction> matFrac1(2, 2, f1);
    Matrix<Fraction> matFrac2(2, 2, f2);
    Matrix<Fraction> matFrac3 = matFrac1 + matFrac2;
    std::cout << "Matrix<Fraction> Addition:\n" << matFrac3 << std::endl;

    return 0;
}