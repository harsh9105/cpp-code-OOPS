#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    int num = 57; // Initializing an integer variable 'num' with the value 57
    cout << "\n\n Display the operation of pre and post increment and decrement :\n"; // Outputting a message for demonstrating increment and decrement operations
    cout << "--------------------------------------------------------------------\n"; // Outputting a separator line    
    cout <<" The number is : " << num << endl; // Displaying the initial value of 'num' 
    num++; // Post-incrementing 'num' by 1
    cout <<" After post increment by 1 the number is : " << num << endl; // Displaying 'num' after post-incrementing
    ++num; // Pre-incrementing 'num' by 1
    cout <<" After pre increment by 1 the number is : " << num << endl; // Displaying 'num' after pre-incrementing
    num = num + 1; // Increasing 'num' by 1
    cout <<" After increasing by 1 the number is : " << num << endl; // Displaying 'num' after increasing by 1
    num--; // Post-decrementing 'num' by 1
    cout <<" After post decrement by 1 the number is : " << num << endl; // Displaying 'num' after post-decrementing
    --num; // Pre-decrementing 'num' by 1
    cout <<" After pre decrement by 1 the number is : " << num << endl; // Displaying 'num' after pre-decrementing
    num = num - 1; // Decreasing 'num' by 1
    cout <<" After decreasing by 1 the number is : " << num << endl; // Displaying 'num' after decreasing by 1
    cout << endl; // Outputting a blank line for better readability
    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
