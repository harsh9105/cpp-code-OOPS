#include <iostream> // Including the input-output stream header file

#define PI 3.14159 // Defining the constant value of PI

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float radius, area, circum; // Declaring floating-point variables for radius, area, and circumference

    cout << "\n\n Find the area and circumference of any circle :\n"; // Outputting a message indicating the calculation of circle area and circumference
    cout << "----------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the radius(1/2 of diameter) of a circle : "; // Prompting the user to input the radius of the circle
    cin >> radius; // Taking input for the radius from the user

    circum = 2 * PI * radius; // Calculating the circumference of the circle: 2 * PI * radius
    area = PI * (radius * radius); // Calculating the area of the circle: PI * radius^2

    cout << " The area of the circle is : " << area << endl; // Displaying the calculated area of the circle
    cout << " The circumference of the circle is : " << circum << endl; // Displaying the calculated circumference of the circle
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
