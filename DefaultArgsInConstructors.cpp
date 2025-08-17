#include <iostream>
using namespace std;

class Numbers 
{
    private:
    int d1, d2;
    public:
    Numbers(int, int);
    void print(void);

};
Numbers :: Numbers(int a = 4, int b = 7)  // Default argument in b = 7, will give 7 as default if no argument is passed while calling it in the object
{
    d1 = a;
    d2 = b;
}
void Numbers :: print(void)
{
    cout << "The numbers are: " << d1 << " & " << d2 << endl;
}
int main() 
{
    Numbers obj1; // Two default arguments 4 and 7
    obj1.print();  // 4 & 7
    Numbers obj2(2); // One default argument 7 and one assigned (2)
    obj2.print();  // 2 & 7
    Numbers obj3(5, 9); // Both arguments assigned by own, overwrited default ones
    obj3.print();  // 5 & 9
   
   return 0;
}