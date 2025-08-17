// This program simply takes two points as input from user and display the distances betweeen them, uses friend functions and parameterized constructors

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point
{
private:
    int x, y;
    friend void distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint(void) const
    {
        cout << "The point is: (" << x << ", " << y << ")" << endl;
    }
};
void distance(Point point1, Point point2)
{
    double diffX = (point2.x - point1.x);
    double diffY = (point2.y - point1.y);
    double diffXY = sqrt(diffX * diffX + diffY * diffY);
    cout << fixed << setprecision(2) << "The distance is " << diffXY << endl;
}

int main()
{
    int a, b, c, d;
    cout << "Enter x, y coordinates of point 1: ";
    cin >> a >> b;
    cout << "Enter x, y coordinates of point 2: ";
    cin >> c >> d;
    Point p1(a, b), p2(c, d);

    p1.displayPoint();
    p2.displayPoint();
    distance(p1, p2);

    return 0;
}

