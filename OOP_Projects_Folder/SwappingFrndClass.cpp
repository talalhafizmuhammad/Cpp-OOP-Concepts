#include <iostream>

using namespace std;

class c2;
class c1
{
    int a;
    public:
    void val1(int Val1)
    {
        a = Val1;
    }
    friend void swap(c1 &x, c2 &y);

};
class c2
{
    int b;
    public:
    void val2(int Val2)
    {
        b = Val2;
    }
    friend void swap(c1 &x, c2 &y);


};

void swap(c1 &x, c2 &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
    cout << "Swapped values are: " << x.a << " , " << y.b;
}
int main() 
{
    c1 o1;
    c2 o2;
    int t, u;
    cout << "Enter first number: ";
    cin >> t;
    o1.val1(t);
    
    cout << "Enter second number: ";
    cin >> u;
    o2.val2(u);

    swap(o1, o2);

   
   return 0;
}
