#include <iostream>
#include<cmath>
using namespace std;

class Shape {
protected:
    double height, width;
public:
    Shape(double h, double w) : height(h), width(w) {}
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double area() { return height * width; }
    double perimeter() { return 2 * (height + width); }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double area() { return 0.5 * height * width; }
    double perimeter() { return height + width + sqrt(height * height + width * width); }
};

int main() {
    Rectangle rect(10, 5);
    Triangle tri(10, 5);

    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    cout << "Triangle Area: " << tri.area() << endl;
    cout << "Triangle Perimeter: " << tri.perimeter() << endl;

    return 0;
}
