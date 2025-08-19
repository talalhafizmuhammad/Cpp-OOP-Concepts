#include <iostream>
// Copy constructors help us in copying the exact value of an object to another object or objects
using namespace std;

class Numbers
{
private:
    int a;

public:
    Numbers(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor, so, not using a copy constructor and then calling it with objects in main() will not raiseError.

    Numbers(Numbers &obj)
    {
        a = obj.a;
    }
    void print(void)
    {
        cout << "The number is " << a << endl;
    }
};
int main()
{
    Numbers a1(23), a2(45), a3(37);
    Numbers b(a2); // copying a2 to b, since it can resemble any of a1, a2 and a3
    a1.print();    // 23
    a2.print();    // 45
    a3.print();    // 37
    b.print();     // 45 (same as a2 (copy constructor))
    return 0;
}

