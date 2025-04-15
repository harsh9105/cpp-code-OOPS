#include <iostream> // Including the input-output stream header file
using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    cout << "\n\n Print a mystery series:\n"; // Outputting a message indicating the purpose of the program
    cout << "-------------------------\n";
    cout << " The series are: \n"; // Outputting a message indicating the series to be printed

    int nm1 = 1; // Initializing variable nm1 to 1

    while (true) // Starting an infinite loop
    {
        ++nm1; // Incrementing nm1 by 1 in each iteration

        if ((nm1 % 3) == 0) // Checking if nm1 is divisible by 3
            continue; // Skipping further execution of the loop if nm1 is divisible by 3

        if (nm1 == 50) // Checking if nm1 is equal to 50
            break; // Exiting the loop if nm1 is equal to 50

        if ((nm1 % 2) == 0) // Checking if nm1 is even
        {
            nm1 += 3; // Adding 3 to nm1 if it's even
        }
        else
        {
            nm1 -= 3; // Subtracting 3 from nm1 if it's odd
        }

        cout << nm1 << " "; // Outputting the current value of nm1 followed by a space
    }

    cout << endl; // Adding a new line after printing the series
    return 0; // Returning 0 to indicate successful program execution
}
