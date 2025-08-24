
#include <iostream>
using namespace std;

class Base
{
    int data1; // private member (only accessible inside Base)
public:
    int data2; // public member (accessible outside & in derived classes)

    // Function to initialize private and public data members
    void setData();

    // Getter functions
    int getData1();
    int getData2();
};

// Definition of Base class member functions
void Base::setData(void)
{
    data1 = 10; // initialize private member
    data2 = 20; // initialize public member
}

int Base::getData1()
{
    return data1; // return private member
}

int Base::getData2()
{
    return data2; // return public member
}

// Inheriting Base publicly, public members remain public
class Derived : public Base
{
    int data3; // extra data member in derived
public:
    void process(); // calculates something using Base class data
    void display(); // prints results
};

// Definition of Derived class member functions
void Derived::process()
{
    // getData1() is needed for private data1
    // data2 is directly accessible since it's public in Base
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout << "Value of data1 is " << getData1() << endl;
    cout << "Value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
}

int main()
{
    Derived der;

    der.setData(); // Initialize Base class data
    der.process(); // Perform calculation in Derived
    der.display(); // Display results

    return 0;
}
