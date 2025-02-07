//Write a C++ program to create a new text file and write some text into it.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outfile("example.txt");
    if(outfile.is_open()){
            outfile<<"good morning harsh lets start writing"<<endl;
            outfile<<"its correct code"<<endl;
            cout<<"the file created successful"<<endl;
    }else{
        cout<<"  error ! ,the file is not open "<<endl;

    }
    
    return 0;
}