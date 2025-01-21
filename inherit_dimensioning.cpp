
//Implement a base class Shape with a method to set dimensions. 
//Derive two classes, Rectangle and Triangle, that calculate and display their areas using the dimensions.
#include <iostream>
using namespace std;


class Shape {
protected:
    double width, height;

public:
    
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
};


class Rectangle : public Shape {
public:
    
    void calculateArea() {
        double area = width * height;
        cout << "Area of Rectangle: " << area << endl;
    }
};


class Triangle : public Shape {
public:
    
    void calculateArea() {
        double area = 0.5 * width * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    
    Rectangle rect;
        rect.setDimensions(10, 5); 
        rect.calculateArea();      


    Triangle tri;
    tri.setDimensions(10, 5); 
    tri.calculateArea();     

    return 0;
}
