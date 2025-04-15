#include <iostream> // Including the input-output stream header file
#include <iomanip>  // Including the header file for formatting

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    int m1 = 5, m2 = 7; // Declaring and initializing two integers
    double d1 = 3.7, d2 = 8.0; // Declaring and initializing two doubles

    cout << "\n\n Display arithmetic operations with mixed data type :\n"; // Outputting a message for arithmetic operations
	cout << "---------------------------------------------------------\n"; // Outputting a separator line

    cout << fixed << setprecision(1); // Setting floating-point output to fixed with 1 decimal place

    // Performing arithmetic operations and displaying results
    cout <<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl;  // Addition of integers
    cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;  // Addition of doubles
    cout <<" "<< m1 << " + " << d2 << " = " << m1+d2 << endl;  // Addition of an integer and a double

    cout <<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl;  // Subtraction of integers
    cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;  // Subtraction of doubles
    cout <<" "<< m1 << " - " << d2 << " = " << m1-d2 << endl;  // Subtraction of an integer and a double

    cout <<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl;  // Multiplication of integers
    cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  // Multiplication of doubles
    cout <<" "<< m1 << " * " << d2 << " = " << m1*d2 << endl;  // Multiplication of an integer and a double

    cout <<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl;  // Integer division
    cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  // Division of doubles
    cout <<" "<< m1 << " / " << d2 << " = " << m1/d2 << endl;  // Division of an integer by a double

    cout << endl; // Outputting a blank line for better readability
    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
