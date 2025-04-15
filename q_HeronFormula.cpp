#include <iostream> // Including the input-output stream header file
#include <math.h>   // Including the math library for mathematical functions

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float side1, side2, side3, area, s; // Declaring floating-point variables for the sides, area, and semi-perimeter

    cout << "\n\n Find the area of any triangle using Heron's Formula :\n"; // Outputting a message indicating the calculation of triangle area
    cout << "----------------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the length of 1st side  of the triangle : "; // Prompting the user to input the length of the 1st side of the triangle
    cin >> side1; // Taking input for the 1st side from the user

    cout << " Input the length of 2nd side  of the triangle : "; // Prompting the user to input the length of the 2nd side of the triangle
    cin >> side2; // Taking input for the 2nd side from the user

    cout << " Input the length of 3rd side  of the triangle : "; // Prompting the user to input the length of the 3rd side of the triangle
    cin >> side3; // Taking input for the 3rd side from the user

    s = (side1 + side2 + side3) / 2; // Calculating the semi-perimeter of the triangle
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); // Calculating the area using Heron's formula: sqrt(s * (s - side1) * (s - side2) * (s - side3))

    cout << " The area of the triangle is : " << area << endl; // Displaying the calculated area of the triangle
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
