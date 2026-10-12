
#include <iostream>
#include <cmath>
using namespace std;
//Circle
float AREA(float r)
{
    return 3.14 * r * r;
}
//Rectangle
float AREA(float l, float b)
{
    return l * b;
}
//Triangle
float AREA(float side1, float side2, float side3)
{
    float s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
int main()
{
    float r, l, b, side1, side2, side3;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << AREA(r) << endl;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << AREA(l, b) << endl;
    cout << "Enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;
    cout << "Area of triangle = " << AREA(side1, side2, side3) << endl;
    return 0;
}
