#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846 
#endif

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius; 
    }
    double perimeter() const override {
        return 2 * M_PI * radius; 
    }
    void display() const override {
        std::cout << "Circle: radius = " << radius << ", area = " << area()
            << ", perimeter = " << perimeter() << std::endl;
    }
};

#endif
