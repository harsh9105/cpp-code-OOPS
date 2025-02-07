#include<iostream>
using namespace std;
int main(){
    cout<<"lets swap two number"<<endl;
    int num1, num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the secound number"<<endl;
    cin>>num2;
   int temp=num1;
    num1=num2;
    num2= temp;
    cout<<"first number is "<<num1<<endl;
    cout<<"secound number is "<<num2<<endl;



}