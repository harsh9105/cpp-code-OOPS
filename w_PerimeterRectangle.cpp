#include <iostream> // Including the input-output stream header file
using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float ar, peri, width, height = 0; // Declaration of variables for area, perimeter, width, and height with initialization
    cout << "\n\n Print the area and perimeter of a rectangle:\n"; // Outputting a message indicating the purpose of the program
    cout << "----------------------------------------------\n";
    cout << " Input the width of the rectangle: "; // Prompting the user to input the width of the rectangle
    cin >> width; // Taking user input for the width of the rectangle
    cout << " Input the height of the rectangle: "; // Prompting the user to input the height of the rectangle
    cin >> height; // Taking user input for the height of the rectangle

    peri = 2 * (width + height); // Calculating the perimeter of the rectangle
    ar = height * width; // Calculating the area of the rectangle

    cout << "The area of the rectangle is: " << ar << "\n"; // Outputting the calculated area of the rectangle
    cout << "The perimeter of the rectangle is: " << peri << "\n"; // Outputting the calculated perimeter of the rectangle
}
