#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    int rad1; // Declaring an integer variable to store the radius of the sphere
    float volsp; // Declaring a floating-point variable to store the volume of the sphere

    cout << "\n\n Calculate the volume of a sphere :\n"; // Outputting a message indicating the purpose of the program
    cout << "---------------------------------------\n"; // Displaying a separator line

    cout << " Input the radius of a sphere : "; // Prompting the user to input the radius of the sphere
    cin >> rad1; // Reading the radius of the sphere from the user

    // Calculating the volume of the sphere using the formula: (4 * π * r^3) / 3
    volsp = (4 * 3.14 * rad1 * rad1 * rad1) / 3;

    cout << " The volume of a sphere is : " << volsp << endl; // Outputting the calculated volume of the sphere

    cout << endl; // Displaying an empty line for better readability
    return 0; // Return statement indicating successful completion of the program
}
