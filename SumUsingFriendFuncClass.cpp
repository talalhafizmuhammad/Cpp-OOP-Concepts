#include <iostream>

using namespace std;
class Y;
class X
{
    int x;
    public:
    void val1()
    {
        cout << "Enter 1st value: ";
        cin >> x;
    }
    friend void printSum(X t, Y u);

};
class Y
{
    int y;
    public:
    void val2()
    {
        cout << "Enter 2nd value: ";
        cin >> y;
    }
    friend void printSum(X t, Y u);

};

void printSum(X t, Y u)
{
    cout << "Addition is " << t.x + u.y;
}
int main() 
{
    X o1;
    Y o2;
    o1.val1();
    o2.val2();
    printSum(o1, o2);
   
   return 0;
}