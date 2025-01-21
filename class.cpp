// 1. Write a C++ program to implement a class called Circle that has private member variables for radius.
// Include member functions to calculate the circle's area and circumference.
/*#include <iostream>
#include <cmath>
using namespace std;
class circle
{
private:
    float radius;

public:
    circle(float r)
    {
        radius = r;
    }
    float calculatearea()
    {
        return M_PI * radius * radius;
    }
    float calculatecircumfrance()
    {
        return 2 * M_PI * radius;
    }
};

int main()
{
    float radius;
    cout << "enter the number";
    cin >> radius;
    circle H(radius);
    cout << "the  area of the  circle " << H.calculatearea() << endl;
    cout << "the circufrance of the circle" << H.calculatecircumfrance() << endl;
    return 0;
}*/
// 2. Write a C++ program to create a class called Rectangle that has private member variables for length and width.
//  Implement member functions to calculate the rectangle's area and perimeter.
#include <iostream>
#include <cmath>
using namespace std;
class rectangle
{
private:
    int length;
    int width;

public:
    rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int calculatearea()
    {
        return length * width;
    }
    int calculateperimeter()
    {
        return 2 * (length + width);
    }
};
int main()
{
    int length;
    int width;
    cout << "enter the lenght";
    cin >> length;
    cout << "enter the width";
    cin >> width;

    rectangle A(length, width);

    cout << "the area of rectangle" << A.calculatearea() << endl;
    cout << "the  perimeter of rectangle" << A.calculateperimeter() << endl;
    return 0;
}
