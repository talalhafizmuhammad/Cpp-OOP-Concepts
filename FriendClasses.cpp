#include <iostream>
using namespace std;

// Forward declaration of class Complex
class Complex;

// Calculator class to operate on Complex numbers
class Calculator
{
public:
    // Normal function to add two integers
    int add(int a, int b)
    {
        return (a + b);
    }

    // These functions will access private members of Complex class
    int sumComplexNum(Complex, Complex);    // Sum of real parts
    int sumCompComplex(Complex, Complex);   // Sum of imaginary parts

    // Note: Without friend declaration in Complex, the above functions cannot access private members
};

// Complex number class
class Complex
{
private:
    int a, b;  // 'a' is the real part, 'b' is the imaginary part

public:
    // Method to set the values of real and imaginary parts
    void setValue(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    // Method to print the complex number in standard form
    void print()
    {
        cout << "The values of complex number are " << a << " + " << b << "i" << endl;
    }

    // Declare Calculator class as a friend
    // This allows all Calculator class methods to access private members of Complex
    friend class Calculator;

    // Alternatively, you could also individually declare friend functions like:
    // friend int Calculator::sumComplexNum(Complex, Complex);
    // friend int Calculator::sumCompComplex(Complex, Complex);
};

// Definition of sumComplexNum - sums the real parts of two complex numbers
int Calculator::sumComplexNum(Complex o1, Complex o2)
{
    return (o1.a + o2.a);  // Direct access to private members due to friendship
}

// Definition of sumCompComplex - sums the imaginary parts of two complex numbers
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);  // Direct access to private members due to friendship
}

int main()
{
    // Create two Complex number objects
    Complex o1, o2;
    o1.setValue(1, 2);
    o2.setValue(3, 4);

    // Create a Calculator object to perform operations
    Calculator calc;

    // Use Calculator to sum real and imaginary parts of complex numbers
    int res = calc.sumComplexNum(o1, o2);
    int res2 = calc.sumCompComplex(o1, o2);

    // Output the results
    cout << "Sum of real parts of both complex numbers is " << res;
    cout << "\nSum of imaginary parts of both complex numbers is " << res2;

    // Optional: print the complex numbers
    // o1.print();
    // o2.print();

    return 0;
}
