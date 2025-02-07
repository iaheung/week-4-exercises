#include <iostream>
#include "Polynomial.h"
#include "Fraction.h"

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

    return 0;
}