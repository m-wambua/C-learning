/*
Floating-point type

A number with a fraction is called a floating point in C++. To make computation effecient, C++ defines three different floating-point sizes:
    float
    double
    long double
All floating point numbers are signed.

Flaoting-Point Literals

*/

// Calculating area and perimeter of a circle
#include <iostream>
using namespace std;

int main()
{

    //Defining a stored constant
    const double PI=3.14159;

    // Defining three variables
    double radius;
    double perimeter;
    double area;

    //inputting value of radius
    cout <<"Enter the radius of the circle";
    cin >> radius;

    // calculating perimeter and area and storing them in variables
    perimeter=2*PI*radius;
    area=PI*PI*radius;

    //Outputting the value of radius, perimeter, and area
    cout << "The radius is: " << radius <<endl;
    cout << "The perimeter is: " << perimeter << endl;
    cout << " The area is:  " << area << endl;
    return 0;
}