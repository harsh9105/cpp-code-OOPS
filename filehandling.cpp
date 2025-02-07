/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outfile("harsh.txt"); //ofstream  is class   used for create  outfile  object
    if (outfile.is_open())
    {
        outfile << "hello harsh how are you" << endl;
        outfile << "my regestration number is 1234" << endl;
        cout << "the file created successfully!" << endl;
    }
    else
    {
        cout << "not open" << endl;
    }
    outfile.close();
    return 0;
}*/

//"not open file for reading "
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile("harsh.txt"); // ifstream is class  is used for reading  
    string line;   //-----> it is a variable declration
    if (infile.is_open())
    {
        while(getline(infile,line)){   // getline is used for reading data line by line 
            cout<< line << endl;
        }
    }
        
    else
    {
        cout << "not open file for reading " << endl;
    }
    infile.close();
    return 0;
}
