/*
A destructor is a special member function of a class that is called automatically when an object is destroyed (goes out of scope or is deleted).
It has some main points:-
    -->> Its job is to clean up resources used by the object.
    -->> Always starts with ~ (tilde) followed by the class name.
    -->> Takes no parameters and has no return type.
    -->> Have no arguments at all.
*/

#include <iostream>
using namespace std;

int count = 0;

class Number
{
public:
    Number()
    {
        count++;
        cout << "This is the time when constructor is called for object number: " << count << endl;
    }

    ~Number()
    {
        cout << "This is the time when my destructor is called for object number: " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    Number n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Number n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
