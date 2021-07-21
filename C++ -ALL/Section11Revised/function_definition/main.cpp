#include <iostream>

using namespace std;

const double pi {3.14159};

double calc_area(double radius) {
    return pi*radius* radius;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area(radius) * height;
}



void area_circle() {
    double radius{};
    cout <<"\nEnter the radius of the circle: ";
    cin>> radius;
    
    cout << "The area of a circle with radius " << radius << " is " << calc_area(radius) << endl;
}


void volume_cylinder() {
    double radius{};
    double height {};
    
    cout <<"\nEnter the radius of the circle: ";
    cin>> radius;
    cout <<"\nEnter the height of the circle: ";
    cin>> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    
    area_circle();
    volume_cylinder();
    
    
    cout << endl;
    return 0;
}