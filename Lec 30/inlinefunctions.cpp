#include <iostream>
using namespace std;

inline double areaCircle(double radius) {
    return 3.14159 * radius * radius;
}

inline double areaRectangle(double length, double width) {
    return length * width;
}

inline double areaTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, width, base, height;
    cout << "1. Area of a circle\n2. Area of a rectangle\n3. Area of a triangle\n";
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << areaCircle(radius) << endl;
            break;
        case 2:
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << areaRectangle(length, width) << endl;
            break;
        case 3:
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle: " << areaTriangle(base, height) << endl;
            break;
        default:
            cout << "Invalid choice\n";
    }
    
    return 0;
}