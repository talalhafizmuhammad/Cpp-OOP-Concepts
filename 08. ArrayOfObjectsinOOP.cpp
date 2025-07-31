/*
# Array of Objects in C++

In C++, an array of objects allows us to manage multiple instances of a class using indexed notation, just like arrays of primitive types. This is helpful for managing structured collections such as students, employees, or products. Each element in the array is a separate object that can access its own data and member functions.

Key Points:

-->> Used to store and manage multiple objects of the same class.
-->> Syntax: ClassName objArray[size];
-->> Each object in the array can use its own data and functions using the index.
-->> Useful for handling lists like student records, employee details, etc.
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    string department;
    float salary;
    static int c;

public:
    // Member function to input employee details

        void setData()
    {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // clear input buffer before getline()

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void showData(void)
    {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary << "\n";
    }

};
int Employee ::c;
int main()
{
    // Employee talal, ali, saba, ahmad;
    // harry.setId();
    // harry.getId();
    Employee Company[4]; // using array as multiple objects
    // Taking input for each employee
    for (int i = 0; i < 4; i++)
    {
        cout << endl << "Enter info of employee " << (i + 1) << ":" << endl;
        Company[i].setData();
    }

    // Displaying all employee records
    for (int i = 0; i < 4; i++)
    {
        cout << endl << "Displaying info of employee " << (i + 1) << ":" << endl;
        Company[i].showData();
    }

    return 0;
}
