// Create a base class Shape with a virtual function area(). Derive classes Circle and Rectangle:
// Override the area() function to calculate the area of a circle (using radius)
//  and a rectangle (using length and breadth).
// Use a pointer of type Shape to call the area() function for both derived classes.
#include <iostream>
#include <cmath>
using namespace std;
class Shape
{
public:
    virtual double area() = 0;
    virtual ~Shape(){} 
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() override
    {
        return M_PI * radius * radius;
    }
};
class Rectangle : public Shape
{
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double area() override
    {
        return length * breadth;
    }
};

int main()
{
    Shape *shapePtr;
    

        // Create a Circle object
        Circle circle(5.0); // Circle with radius 5
    shapePtr = &circle;
    cout << "Area of Circle: " << shapePtr->area() << endl;

    // Create a Rectangle object
    Rectangle rectangle(4.0, 6.0); // Rectangle with length 4 and breadth 6
    shapePtr = &rectangle;
    cout << "Area of Rectangle: " << shapePtr->area() << endl;

    return 0;
}
