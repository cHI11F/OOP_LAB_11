#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <iostream>

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height; 
    }
    double perimeter() const override {
        return 2 * (width + height); 
    }
    void display() const override {
        std::cout << "Rectangle: width = " << width << ", height = " << height
            << ", area = " << area() << ", perimeter = " << perimeter() << std::endl;
    }
};

#endif
