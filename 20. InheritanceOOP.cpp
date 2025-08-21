// This program determines the use of an inheritance with explanation

#include <iostream>
using namespace std;


// This is a base class
class Employee 
{
    public:
    int id;
    int age;
    float salary;
    Employee(){}
    Employee(int ID)
    {
        id = ID;
        age = 23;
        salary = 55000;
    }
}; 

// DERIVED CLASS SYNTAX:
/*
class {{derived-class}} : {{visibility-mode(can be private, protected or public)}} {{base-class}}
{
     Members, methods, etc, etc.....
}
*/

/*
Note:

    -->> Default visibility mode is private
    -->> Public Visibility Mode: Public members of the base class becomes Public members of the derived class
    -->> Private Visibility Mode: Public members of the base class become private members of the derived class
    -->> Private members are never inherited

*/

class Programmer : public Employee
{
    public:
    int languageCode;
    Programmer (int ID) : Employee(ID) 
    {
        id = ID;
        languageCode = 9;
    }
    void getData();
};

void Programmer ::getData()
{
    cout << "Your data: " << endl;
    cout << "Your ID is " << id 
         << ", Age: " << age 
         << ", Salary: " << salary 
         << ", LanguageCode: " << languageCode << endl;
}
int main() 
{
    Employee talal(1), ali(2);
    Programmer skillF(10);
    cout << "ID: "<< skillF.id<<endl;
    cout << "Age: " << skillF.age << endl;
    cout << "Salary: " << talal.salary << endl;
    cout << "Language Code: " << skillF.languageCode<<endl;
    skillF.getData();
    return 0;

}
