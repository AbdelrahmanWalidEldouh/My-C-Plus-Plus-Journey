#include <string>

#ifndef QUADRATIC_H
#define QUADRATIC_H

class Quadratic {
public:
    Quadratic(double = 1, double = 0, double = 0, char = 'x');
    
    void add(const Quadratic&);
    void subtract(const Quadratic&);
    std::string toString() const;
    void solve() const;

private:
    double a;
    double b;
    double c;
    char variable;
};

#endif