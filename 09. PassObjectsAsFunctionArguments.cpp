/*
# Representing on HOW WE CAN PASS OBJECTS AS ARGUMENTS IN FUNCTIONS
    Complex Number Addition using Class and Object Passing in C++
    This program demonstrates the concept of passing objects as function arguments in C++ using a class Complex that models complex numbers. 
    The program allows the user to input two complex numbers, and then it computes and displays their sum.

    Key Concepts Covered:
    - Class definition with private data members
    - Public member functions to set and print complex numbers
    - Passing objects to a member function by value
    - Object manipulation using user-defined functions
*/

#include <iostream>
using namespace std;

// Class to represent a complex number of the form a + bi
class Complex
{
private:
    int a, b; // Private members: real part (a) and imaginary part (b)

public:
    // Sets the values of a and b
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    // Sets current object's data as the sum of two Complex objects
    void setDataBySum(Complex obj1, Complex obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }

    // Prints the complex number in a + bi format
    void print(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    int a, b, c, d;

    // Input values for two complex numbers
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> a >> b;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> c >> d;

    // Set values for c1 and c2
    c1.setData(a, b);
    c2.setData(c, d);

    // Display c1 and c2
    c1.print();
    c2.print();

    // Set c3 as sum of c1 and c2 using object-passing function
    c3.setDataBySum(c1, c2);

    // Display result
    cout << "After addition: ";
    c3.print();

    return 0;
}
