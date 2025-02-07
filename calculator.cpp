#include <iostream>
using namespace std;
int main()

{
    int num1;
    int num2;
    cout << "enter the first digit " << endl;
    cin>>num1;
    cout << "enter the secound number " << endl;
    cin>>num2;

    char ope;
    cout << "enter the operator + - * /" << endl;
    cin>>ope;
    switch(ope)
    {
    case '+':
        cout<<"the sum of two number is "<< num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
    if (num2 != 0)
        cout << num1 / num2 << endl;
        else
        cout<<"division by zero is not allowed"<<endl;
        break;
    default:
        cout << "invalid operator" << endl;
        break;
    }
    return 0;
}