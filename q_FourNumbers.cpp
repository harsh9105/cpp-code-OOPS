#include <iostream> // Including input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float n1, n2, n3, n4, tot, avrg; // Declaring float variables for four numbers, total, and average

    cout << "\n\n Compute the total and average of four numbers :\n"; // Outputting a message indicating the purpose of the program
    cout << "----------------------------------------------------\n"; // Outputting a separator line

    cout << " Input 1st two numbers (separated by space) : "; // Prompting the user to input the first two numbers
    cin >> n1 >> n2; // Taking input for the first two numbers from the user

    cout << " Input last two numbers (separated by space) : "; // Prompting the user to input the last two numbers
    cin >> n3 >> n4; // Taking input for the last two numbers from the user

    tot = n1 + n2 + n3 + n4; // Calculating the total of all four numbers
    avrg = tot / 4; // Calculating the average of all four numbers

    cout << " The total of four numbers is : " << tot << endl; // Displaying the calculated total
    cout << " The average of four numbers is : " << avrg << endl; // Displaying the calculated average
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
