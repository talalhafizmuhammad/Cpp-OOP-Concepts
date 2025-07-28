// OOPs -->> Classes And Objects

// C++ -->> was initially called C with classes by stroustroup
// class (in C++): extension of structures (in C)
// Structures were limited, like:
//   -->> No methods
//   -->> Thy have all public members
// Classes -->> Structures and much more!
// Classes -->> Can have methods and properties, can make few of the members as private & few as public ones
// Structures in C++ are typedefed, means when we use the class, we can declare objects also, at the time of class declaration, like we did in our structs, example:
/*class Employee
{
  //class declaration
}talal, ali, ahmad;*/
// objects
// Exampled: talal.salary = 8000000 makes no sense, when salary is private variable

//NESTED MEMBER FUNCTIONS: When a member function of a class calls another member function of the same class without using the object name, it's a form of nested usage.

#include <iostream>
#include <string>

using namespace std;

class binary   //creating a binary class
{
private:
    string s;  
    void checkBin(void);

public:
    void getBin(void);
    //void checkBin(void);   // If used as nested member functions, then can be declared as private as well as public
    void onesCompliment(void);
    void display(void);
};

void binary ::getBin(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
    checkBin();    //nested member function used
}

void binary ::checkBin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        while (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Binary Format!" << endl;
            cout << "Enter again: ";
            cin >> s;

        }
        // else
        // {
        //     cout << "Binary number: " << s;
        //     exit(0);
        // }
    }
}

void binary :: onesCompliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
    cout << "Your number in 1's compliment is: " << s << endl;
    exit(0);
}

void binary :: display(void)
{
    cout << "Your binary number is: " << s << endl;

} 
int main()
{
    cout << "\n----- BINARY NUMBER HANDLER -----\n";
    binary b;
    b.getBin();
    // b.checkBin(); throws error, as private.
    char choice;
    cout << endl << "Enter your choice whether you want 1's compliment or not? (Y/N): ";
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
        b.onesCompliment();
    }
    else if (choice == 'N' || choice == 'n')
    {
        b.display();
    }
    else{
        cout << "Invalid choice" << endl;
        b.display();

    }
    return 0;
}
