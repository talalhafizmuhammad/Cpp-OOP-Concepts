#include <iostream>
using namespace std;
class Account
{
    int account, balance;
    public:
    void setData(int acc, int bal)
    {
        account = acc;
        balance = bal;
    }
    void Display()
    {
        cout << "Account Number: " << account << ", Amount: " << balance << endl;
    }
    friend void func(Account &from, Account &to, int amount);

};

void func(Account &from, Account &to, int amount)
{
    if (from.balance >= amount)
    {
        from.balance -= amount;
        to.balance += amount;
    }
    else
    {
        cout << "Insufficient ammount in the account " << from.account;
    }
    cout << "Amount after transfer: \nAccount number: " << from.account << ", Balance: " << from.balance << endl; 
    cout << "Account number: " << to.account << ", Balance: " << to.balance; 
    
}
int main() 
{
    Account a1, a2;
    int c1, c2;
    int acc1, acc2;
    cout << "Enter 1st account number: ";
    cin >> acc1;
    cout << "Enter amount in 1st account: ";
    cin >> c1;
    cout << "Enter 2nd account number: ";
    cin >> acc2;
    cout << "Enter amount in 2nd account: ";
    cin >> c2;
    a1.setData(acc1, c1);
    a2.setData(acc2, c2);

    cout << "Amount before transfer: \n";
    a1.Display();
    a2.Display();
    int amt; 
    cout << "Enter amount to transfer from account " << acc1 << " to " << acc2 << ": ";
    cin >> amt;
    func(a1, a2, amt);
   
   return 0;
}