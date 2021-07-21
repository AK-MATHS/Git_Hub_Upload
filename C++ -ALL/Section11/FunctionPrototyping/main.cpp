//section 11
//Function Prototyping
//Area of Circle and Volume of a Cylinder

#include <iostream>

using namespace std;





const double pi {3.14159};


//Function prototype
double calc_area_circle(double radius);
double calc_volume_cylinder (double radius, double height);
void area_circle();
void volume_cylinder();




int main() {
    
    area_circle();
    volume_cylinder();
    
    
    return 0;
}


double calc_area_circle(double radius) {
    
    double area {pi * radius * radius};
    
    return area;
}

double calc_volume_cylinder (double radius, double height) {
//    double volume {pi * radius * radius * height};
    return calc_area_circle(radius)*height;
}


void area_circle() {
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "This area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
    
}




void volume_cylinder() {
    double radius {};
    double height {};
    
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    cout << "This volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}


