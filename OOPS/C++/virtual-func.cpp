#include <iostream>

class Shape
{
public:
    void printArea()
    {
        std::cout << "Area: " << area() << std::endl;
    }

    // Function to calculate area
    virtual double area()
    {
        return 0.0; // Default implementation for base class
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Overridden function to calculate area for Circle
    double area() override
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Overridden function to calculate area for Rectangle
    double area() override
    {
        return length * width;
    }
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Overridden function to calculate area for Triangle
    double area() override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 8.0);

    // Print areas
    circle.printArea();
    rectangle.printArea();
    triangle.printArea();

    return 0;
}
