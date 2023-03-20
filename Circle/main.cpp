#include"circle.h"
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circle Circle(radius);
    cout << "Area: " << Circle.getArea() << endl;
    cout << "Diameter: " << Circle.getDiameter() << endl;
    cout << "Circumference: " << Circle.getCircumference() << endl;

    return 0;
}