#include <iostream>
using namespace std;

/*
  This program demonstrates dynamic initialization of objects using constructors.
  --->>  Dynamic initialization means initializing objects at runtime using parameters
  (e.g., user input) instead of fixed values in the code.
  example:  Complex(int p) {data = p;}
  instead of:  Complex() {data = 0;}
*/

class BankDeposit
{
   int principal;      
   int years;         
   float interestRate;
   float returnValue; 

public:
   // BankDeposit() {}                     // Default constructor (empty).. used when we need to initialize the constructor with separate constraints, as given below
   BankDeposit(int p, int y, float r);    // Parameterized constructor with float rate
   BankDeposit(int p, int y, int r);      // Parameterized constructor with int rate
   void show();                           // Display principal and return value
};

// Constructor with float interest rate
BankDeposit ::BankDeposit(int p, int y, float r)
{
   principal = p;
   years = y;
   interestRate = r;
   returnValue = principal;

   // Calculate compound interest for 'years' years
   for (int i = 0; i < y; i++)
   {
      returnValue = returnValue * (1 + interestRate);
   }
}

// Constructor with int interest rate (converted to float percentage)
BankDeposit ::BankDeposit(int p, int y, int r)
{
   principal = p;
   years = y;
   interestRate = float(r) / 100; // Convert percentage to decimal
   returnValue = principal;

   // Calculate compound interest for 'years' years
   for (int i = 0; i < y; i++)
   {
      returnValue = returnValue * (1 + interestRate);
   }
}

// Display principal and return value
void BankDeposit ::show()
{
   cout << endl
        << "Principal amount was " << principal
        << ". Return value after " << years
        << " years is " << returnValue << endl;
}

int main()
{
   int p, y;
   float r;
   int R;

   // Input for float interest rate
   cout << "Enter the value of principal, years and interest rate (float): " << endl;
   cin >> p >> y >> r;

   BankDeposit bd1(p, y, r); // Direct Dynamic initialization using float constructor
   // BankDeposit bd1, bd2, bd3;  We can use this also, while using empty constructor above
   // bd1 = BankDeposit(x, y, r);
   bd1.show();               
   
   // Input for int interest rate
   cout << "Enter the value of principal, years and interest rate (int): " << endl;
   cin >> p >> y >> R;

   BankDeposit bd2(p, y, R); // Direct Dynamic initialization using int constructor
   bd2.show();                 

   return 0;
}
