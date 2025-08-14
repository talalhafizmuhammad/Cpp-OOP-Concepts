#include <iostream>

using namespace std;

class Complex
{
    // Creating a constructor
    // These are some special type of member functions, which have same name as of the class
    // It is used to initialize the objects of the class
    // It is automatically invoked, whenever an object is created
    //It has no return type, so no need to explicitly call it

private:
    int a, b;

public:
    Complex(void); //----->> This is a default constructor, as it takes no parameters (void)
    void print(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex :: Complex(void)   //-->>constructor used
{
    a = 4;
    b = 7;
}
int main()
{
    Complex c;
    c.print();

    return 0;
}

// CHARACTERISTICS OF CONSTRUCTORS:-
   
    // 1. It shall be declared inside the public part of the class
    // 2. They are automatically invoked whenever the object is created
    // 3. They cannot have return values and do not have return types (not even void)
    // 4. It can have default arguments, as it behaves like a simple member function
    // 5. We cannot refer to their address


