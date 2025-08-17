/*
Constructor overloading is the method of using one or more default and parameterized constructors for the same class (or one or more classes)
*/

#include <iostream>
using namespace std;

class Numbers
{
private:
    int a, b;

public:
    Numbers() // Default constructor
    {
        a = 0;
        b = 0;
    }
    Numbers(int x, int y) // Two parameter constructor
    {
        a = x;
        b = y;
    }
    Numbers(int x) // Single parameter constructor
    {
        a = 0;
        b = x;
    }
    void Print(void) const
    {
        cout << "Numbers are: " << a << " & " << b << endl;
    }
};
int main()
{
    // Using all constructors

    Numbers n1;  
    n1.Print();

    Numbers n2(7);
    n2.Print();

    Numbers n3(3, 5);
    n3.Print();

    return 0;
}