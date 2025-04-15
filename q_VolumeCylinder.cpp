#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    int rad1, hgt; // Declaring integer variables rad1 and hgt to store the radius and height of the cylinder respectively
    float volcy; // Declaring a floating-point variable volcy to store the volume of the cylinder
    cout << "\n\n Calculate the volume of a cylinder :\n"; // Outputting a message indicating the calculation of cylinder volume
    cout << "-----------------------------------------\n"; // Outputting a separator line

    cout << " Input the radius of the cylinder : "; // Prompting the user to input the radius of the cylinder
    cin >> rad1; // Taking input for the radius from the user

    cout << " Input the height of the cylinder : "; // Prompting the user to input the height of the cylinder
    cin >> hgt; // Taking input for the height from the user

    // Calculating the volume of the cylinder using the formula: π * radius^2 * height
    volcy = (3.14 * rad1 * rad1 * hgt);

    cout << " The volume of a cylinder is : "<< volcy << endl; // Displaying the calculated volume of the cylinder
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
