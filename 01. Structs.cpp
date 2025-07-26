// Class 1 -> Structs: Data structure to combine different data types
#include <iostream>
using namespace std;

typedef struct employee {
    int empId;
    char favChar;
    string name;
} emp; // using typedef so we can use 'emp' directly instead of 'struct employee'

int main() {
    employee talal;
    talal.empId = 1;

    emp ali;
    ali.name = "Ali";

    cout << "Talal's Employee ID: " << talal.empId << endl;
    cout << "Ali's Name: " << ali.name << endl;

    return 0;
}
