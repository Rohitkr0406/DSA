#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14159

#define AREA_CIRCLE(r) (PI * pow(r, 2))

#define AREA_RECTANGLE(l, w) (l * w)

#define AREA_TRIANGLE(b, h) (0.5 * b * h)

int main()
{
    double radius, length, width, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    cout << "Area of the circle: " << AREA_CIRCLE(radius) << endl;
    cout << "Area of the rectangle: " << AREA_RECTANGLE(length, width) << endl;
    cout << "Area of the triangle: " << AREA_TRIANGLE(base, height) << endl;

    return 0;
}