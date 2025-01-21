/*1.Write a program where a base class Person contains a method to display a person's name.
Derive a class Student that adds an additional method to display the student ID.
Demonstrate calling methods from both the base and derived classes.*/
/*#include<iostream>
using namespace std;
class person{
    public:
    void name(){
        cout<<"the name of the person is harsh"<<endl;
    }

};
class student:public person{
    public:
    void id(){
        cout<<"the id of the student is 12207128"<<endl;

    }
};
int main(){
    person myperson;
    student mystudent;
    myperson.name();
    mystudent.id();
    return 0;
}
*/

/*Create a base class Animal with a method speak(). Derive a class Dog that adds a method bark().
Further, derive a class Puppy that has a method play().
Show how each method can be accessed from an object of the Puppy class.*/
#include <iostream>

using namespace std;
class animal
{
    public: void speak()
    {
        cout << "my dog is very good" << endl;
    }
};
class dog: public animal
{
    public: void bark()
    {
        cout << "it is very faithful" << endl;
    }
};
class puppy: public dog
{
    public: void play()
    {
        cout << "name of the dog is titu " << endl;
    }
};
int main()
{
    puppy mypuppy;
    mypuppy.speak();
    mypuppy.bark();
    mypuppy.play();
    return 0;
}