/*
Class 1 -> Structs: Data structure (type) use to combine/use different data types
#include <iostream>
using namespace std;
typedef struct employee  
{
    int empId;
    char favChar;
    string name;
} emp ;   //typedef with name here, will let us not to write whole struct employee, just emp is used


Unious: When one of the all features of the struct elements we wanna use, we will use union

typedef union moneyType
{
    int rice;
    float pounds;
    char carType;
} mT;
int main()
{

    mT money;
    money.carType = 'B';
    money.pounds = 20;                            //Union usage
    cout << money.carType << endl;


    struct employee talal;
    emp ali;
    ali.name = "Ali";                             //Struct usage
    talal.empId = 1;
    cout << talal.empId << endl << ali.name;


    Enum: enum is used when we want to define a set of named integers, better than variables, better in checking conditions like a == 2 (should not gonna use),,, a == dinner (better hehe)
    enum Meal{breakfast, lunch, dinner};   //{0, 1, 2}
    Meal m1 = breakfast;
    cout << m1;

}
*/
