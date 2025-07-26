// Union: memory shared between members, use only one member at a time
#include <iostream>
using namespace std;

typedef union moneyType {
    int rice;
    float pounds;
    char carType;
} mT;

int main() {
    mT money;

    money.carType = 'B';      // Assigned carType
    money.pounds = 20;        // Now overwrites carType

    // Only pounds is reliable now
    cout << "Money in pounds: " << money.pounds << endl;

    return 0;
}
