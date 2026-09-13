#include <iostream>
using namespace std;
class Shape
{
    float radius, length, width;
public:
    // Constructor
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
    }
    // Function to calculate circle perimeter
    void circlePerimeter()
    {
        cout << "Perimeter of Circle = " << 2 * 3.14 * radius << endl;
    }
    // Function to calculate rectangle perimeter
    void rectanglePerimeter()
    {
        cout << "Perimeter of Rectangle = "
             << 2 * (length + width) << endl;
    }
    // Destructor
    ~Shape()
    {
        cout << "Destructor called";
    }
};
int main()
{
    float r, l, w;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    // Creating object and passing values to constructor
    Shape s(r, l, w);
    s.circlePerimeter();
    s.rectanglePerimeter();
    return 0;
}