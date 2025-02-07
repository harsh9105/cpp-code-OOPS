// #include<iostream>
// using namespace std;
// int mani(){
//     int numerator, deneominator ;
//     cout<<"enter the numerator"<<endl;
//     cin>>numerator;
//     cout<<"enter the deneominator "<<endl
//     cin>>deneominator;
//     try{
//         if (deneominator==0);
//         throw "deneominator cannot be zero";
    
//     };
//     cout<<"result"<<  numerator/deneominator<<endl;

// } 
#include <iostream>
using namespace std;
int main(){
    int numerator, denominator;
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
    try{
        if(denominator == 0){
            throw "Denominator cannot be zero";
        
        }
        cout << "Result: " <<  numerator / denominator << endl;
    }
    catch(const char* error){
        cout << "Error: " << error << endl;
    }
    return 0;
}