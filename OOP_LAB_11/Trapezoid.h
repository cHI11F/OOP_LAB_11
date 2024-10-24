#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Shape.h"
#include <iostream>
#include <cmath>

class Trapezoid : public Shape {
private:
    double base1;
    double base2;
    double height;
public:
    Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}
    double area() const override {
        return 0.5 * (base1 + base2) * height; 
    }
    double perimeter() const override {
        return base1 + base2 + 2 * sqrt(height * height + pow((base2 - base1) / 2, 2)); 
    }
    void display() const override {
        std::cout << "Trapezoid: base1 = " << base1 << ", base2 = " << base2
            << ", height = " << height << ", area = " << area()
            << ", perimeter = " << perimeter() << std::endl;
    }
};

#endif
