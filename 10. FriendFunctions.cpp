// Friend Functions in C++
// Demonstrates how a non-member function can access private members of a class using the 'friend' keyword.

#include <iostream>
using namespace std;

// Class to represent a Complex number of the form a + bi
class Complex {
private:
    int a, b;  // Private data members: 'a' is real part, 'b' is imaginary part

public:
    // Member function to set values of complex number
    void setValue(int a1, int b1) {
        a = a1;
        b = b1;
    }

    // Member function to print complex number in proper format
    void print() {
        cout << "The value of the complex number is " << a << " + " << b << "i" << endl;
    }

    // Declaration of friend function
    // This function is not a member of this class but can access its private members
    friend Complex Sum(Complex o1, Complex o2);
};

// Definition of friend function
// Note: It can directly access private members 'a' and 'b' of both objects o1 and o2
Complex Sum(Complex o1, Complex o2) {
    Complex o3;
    o3.setValue(o1.a + o2.a, o1.b + o2.b);  // Accessing private data directly
    return o3;
}

/*
 Below function would produce an error because it's a **normal function** (not a friend),
so it cannot access private members 'a' and 'b' of the Complex class.

Complex sum(Complex n1, Complex n2) {
    Complex o3;
    o3.setValue(n1.a + n2.a, n1.b + n2.b);  // Error: private member access
    return o3;
}
*/

int main() {
    Complex n1, n2, total;

    // Set values for two complex numbers
    n1.setValue(1, 2);  // 1 + 2i
    n2.setValue(3, 4);  // 3 + 4i

    // Call friend function to get the sum of two complex numbers
    total = Sum(n1, n2);  // Should return 4 + 6i

    // Print the result
    total.print();

    return 0;
}
