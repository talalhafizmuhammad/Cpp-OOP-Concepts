// Static Data members & Static methods in OOP

/*In C++, static data members and static methods belong to the class itself, not to any specific object. A static data member is shared across all instances of a class, meaning only one copy exists regardless of how many objects are created. It must be declared inside the class and defined outside. A static method can be called without creating an object and can only access static members, since it doesn’t have access to pointer.

Key Points:

    static data members:
        Shared among all objects (one copy only)
        Declared in class, defined outside
        Accessed using (ClassName::member)

    static methods (or functions):
        Belong to the class, not object
        Can be called without creating an object (direct thru class)
        Cannot access non-static members,
        No access to (this) pointer

*/

#include <iostream>

using namespace std;
// here in program, count is the static data member of class Employee
class Employee
{
private:
    int id;
    static int count; // static data member, have same value for all objects, I can't initialize it

public:
    void getData(void)
    {
        cout << "Enter the ID of employee: ";
        cin >> id;
        count += 1;
    }
    void displayData(void)
    {
        cout << "The ID of employee " << count << " is " << id << endl;
    }
    static void Counter(void) // static method (function), can only access static members
    {
        cout << "The employee count is now: " << count << endl;
    }
};

// Static members must be defined outside the class
int Employee ::count; // defaultvalue is 0, can be initialized like count = 1000; here
int main()
{
    Employee talal, ali, asghar; // all objects sharing same count variable
    talal.getData();
    talal.displayData();
    talal.Counter(); // can be called with object (Not recommended)
    // Employee::getData();   // throws an error, cannot call it without object
    ali.getData();
    ali.displayData();
    Employee::Counter(); // can be called with class directly (Recommended and best practice)
    asghar.getData();
    asghar.displayData();
    Employee::Counter();

    return 0;
}
