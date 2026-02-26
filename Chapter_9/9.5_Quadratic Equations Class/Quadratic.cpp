#include "Quadratic.h"
#include <iostream>
#include <sstream>
#include <cmath>

Quadratic::Quadratic(double aVal, double bVal, double cVal, char var) :
    a(aVal == 0 ? 1.0 : aVal),
    b(bVal),
    c(cVal),
    variable(var) {}

void Quadratic::add(const Quadratic& other) {
    a += other.a;
    b += other.b;
    c += other.c;
}

void Quadratic::subtract(const Quadratic& other) {
    a -= other.a;
    b -= other.b;
    c -= other.c;
}

std::string Quadratic::toString() const {
    std::ostringstream output;
    output << a << variable << "^2 + " << b << variable << " + " << c << " = 0";
    return output.str();
}

void Quadratic::solve() const {
    double discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0) {
        double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Solutions: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else {
        std::cout << "No Real Roots" << std::endl;
    }
}