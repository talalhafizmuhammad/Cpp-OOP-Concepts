// Demonstration of classes with public and private access modifiers in C++

#include <iostream>
using namespace std;

class Employee
{
private:
    // These variables are private and cannot be accessed directly outside the class
    int a, b, c;

public:
    // These variables can be accessed and modified directly
    int d, e;

    // Public method to set private data, using function
    void setData(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }

    // Public method to display all data, using function
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

// We can also define the function outside the class like this (instead of using it in public class):
// void Employee::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

int main()
{
    Employee talal;

    // talal.a = 5; //Error: since 'a' is private,we cannot access it directly

    talal.setData(1, 2, 4); // setting private data via public function
    talal.d = 3;            // d and e are public
    talal.e = 5;

    talal.getData();        // display all values
    return 0;
}
