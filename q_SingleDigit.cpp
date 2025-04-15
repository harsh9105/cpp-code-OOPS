#include <iostream> // Including input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    int x; // Declaring an integer variable x

    cout << "\n\n Make a rectangular shape by a single digit number :\n"; // Outputting a message indicating the purpose of the program
    cout << "--------------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the number : "; // Prompting the user to input a number
    cin >> x; // Taking input for the variable x from the user

    // Outputting the rectangular shape using the input number
    cout << " " << x << x << x << x << endl; // Outputting a row of the input number repeated four times
    cout << " " << x << " " << " " << x << endl; // Outputting a row with the input number separated by spaces
    cout << " " << x << " " << " " << x << endl; // Outputting a row with the input number separated by spaces
    cout << " " << x << " " << " " << x << endl; // Outputting a row with the input number separated by spaces
    cout << " " << x << " " << " " << x << endl; // Outputting a row with the input number separated by spaces
    cout << " " << x << x << x << x << endl; // Outputting a row of the input number repeated four times

    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
