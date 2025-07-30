/*
Memory Allocation and Arrays in C++ Classes

Key Concepts Covered:
- Memory for class arrays is allocated only when an object is instantiated.
- Arrays as data members are initialized in stack memory (for static allocation).
- Class methods control access and operations on private arrays.
- Demonstrates encapsulation and proper object-oriented structure.
- Demonstrates how arrays behave as class data members
- Shows that memory is allocated only when an object is instantiated
- Illustrates class encapsulation, array manipulation, and object interaction
*/
/*
This example demonstrates memory allocation and the use of arrays in C++ classes. It highlights that memory for class arrays is allocated only when an object of the class
is instantiated. The arrays used as data members are statically allocated in stack memory. The class methods provide controlled access to these private arrays, illustrating
encapsulation and proper object-oriented design principles.
*/


#include <iostream>
using namespace std;

// Constant to define maximum number of items
const int SIZE = 100;

// A simple Shop class to manage item IDs and their prices
class Shop {
private:
    int itemID[SIZE];      // Array to store item IDs (memory allocated per object)
    int itemPrice[SIZE];   // Array to store item prices (memory allocated per object)
    int counter;           // Counter to keep track of number of entered items
    int itemNum;           // Total number of items to be entered (input from user)

public:
    void initCounter();      // Initializes the counter to 0
    void setPrice();         // Takes input for one item's ID and price
    void displayPrice();     // Displays prices of all entered items
    int itemNo();            // Takes input for total number of items to be entered
};

// Initializes the item counter to 0
void Shop::initCounter() {
    counter = 0;
}

// Asks user how many items they want to enter and returns that number
int Shop::itemNo() {
    cout << "Enter how many products: ";
    cin >> itemNum;
    return itemNum;
}

// Takes input for the current item: ID and price
void Shop::setPrice() {
    cout << "Enter the ID of the desired item: ";
    cin >> itemID[counter];
    cout << "Enter the price of the desired item: ";
    cin >> itemPrice[counter];
    counter++;
}

// Displays the prices of all entered items
void Shop::displayPrice() {
    for (int i = 0; i < counter; i++) {
        cout << "\nThe price of item number " << i + 1 << " is: " << itemPrice[i];
    }
}

// Main function: drives the program using the Shop class
int main() {
    Shop shop;                    // Object creation: memory for arrays is allocated here
    shop.initCounter();           // Reset counter
    int items = shop.itemNo();    // Get number of items from user

    for (int j = 0; j < items; j++) {
        shop.setPrice();          // Input item ID and price
    }

    shop.displayPrice();          // Output all item prices

    return 0;
}
