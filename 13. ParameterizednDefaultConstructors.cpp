/*

-->>  Default Constructor
1. A constructor that takes no arguments.
2. It is called automatically when an object is created without parameters.
3. If you don’t define any constructor, C++ automatically provides a default constructor.

-->>  Parameterized Constructors
1. A constructor that takes arguments/parameters to initialize objects.
2. Allows initializing objects with custom values at the time of creation.

*/

#include <iostream>

using namespace std;

class Complex
{

private:
    int a, b;

public:
    Complex(void); //----->> This is a default constructor, as it takes no parameters (void)
    Complex(int, int); //----->> This is a parameterized constructor, as it takes more than 0 params
    void print(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)  // Default constructor used
{
    a = 4;
    b = 5;
    cout << "Using default constructors: \n";

}
Complex ::Complex(int x, int y)  // Parameterized constructor used
{
    a = x;
    b = y;
    cout << "Using parameterized constructors: \n";
}
int main()
{
    Complex c1;          // Default constructor
    c1.print();
    Complex c2(5, 7);   // Parameterized constructor
    c2.print();
    
    return 0;
}
