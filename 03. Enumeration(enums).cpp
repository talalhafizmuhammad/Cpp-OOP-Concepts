// Enum: define a set of named integer constants
#include <iostream>
using namespace std;

enum Meal { breakfast, lunch, dinner }; // breakfast = 0, lunch = 1, dinner = 2

int main() {
    Meal m1 = breakfast; //accessing the element of enum

    cout << "Enum value of m1 (breakfast): " << m1 << endl;

    return 0;
}
