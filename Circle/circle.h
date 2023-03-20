#include <iostream>
using namespace std;
class circle {
    double radius;
    const double pi = 3.14159;
public:
 circle() {
    radius = 0;
 }
 circle(double r) {
     radius = r;
 }
 void setRadius(double r) {
    radius = r;
 }
double getRadius() const {
     return radius;

}
double getArea() const {
    return pi * radius * radius;
}
double getDiameter() const {
return radius * 2;
}
double getCircumference() const {
    return 2 * pi * radius;
}

};