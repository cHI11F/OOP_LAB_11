#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Trapezoid.h"

int main() {
    const int size = 3;
    Shape* shapes[size]; 
    int choice;

    for (int i = 0; i < size; ++i) {
        std::cout << "Choose shape (1: Circle, 2: Rectangle, 3: Trapezoid): ";
        std::cin >> choice;

        if (choice == 1) {
            double radius;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            shapes[i] = new Circle(radius);
        }
        else if (choice == 2) {
            double width, height;
            std::cout << "Enter width and height: ";
            std::cin >> width >> height;
            shapes[i] = new Rectangle(width, height);
        }
        else if (choice == 3) {
            double base1, base2, height;
            std::cout << "Enter base1, base2 and height: ";
            std::cin >> base1 >> base2 >> height;
            shapes[i] = new Trapezoid(base1, base2, height);
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
            --i; 
        }
    }

   
    for (int i = 0; i < size; ++i) {
        shapes[i]->display();
        delete shapes[i]; 
    }

    return 0;
}
