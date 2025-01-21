#include <iostream>5
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Multiplication Table for " << n << ":" << endl;

    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}