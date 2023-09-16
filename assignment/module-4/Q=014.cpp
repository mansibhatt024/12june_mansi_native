//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading Rectangle: Area * breadth Triangle: ½ *Area* breadth  Circle: Pi * Area *Area 
 #include <iostream>
#include <cmath>
using namespace std;
// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double breadth) {
    return length * breadth;
}
// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}
// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return 3.14159265359 * radius * radius;
}
int main() {
    char choice;
    cout << "Choose a shape (R for Rectangle, T for Triangle, C for Circle): ";
    cin >> choice;
    if (choice == 'R' || choice == 'r') {
        double length, breadth;
        cout << "Enter length and breadth of the rectangle: ";
        cin >> length >> breadth;
        cout << "Area of Rectangle: " << calculateRectangleArea(length, breadth) << endl;
    } else if (choice == 'T' || choice == 't') {
        double base, height;
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of Triangle: " << calculateTriangleArea(base, height) << endl;
    } else if (choice == 'C' || choice == 'c') {
        double radius;
        cout << "Enter radius of the circle: ";
        cin >> radius;
        cout << "Area of Circle: " << calculateCircleArea(radius) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }
    return 0;
}

