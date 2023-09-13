//Write a program to find the multiplication values and the cubic values using inline function
#include <iostream>

using namespace std;

// Inline function to calculate the product of two numbers
inline double multiply(double a, double b) {
    return a * b;
}

// Inline function to calculate the cube of a number
inline double cube(double x) {
    return x * x * x;
}

int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display the product of the two numbers
    double product = multiply(num1, num2);
    cout << "Multiplication result: " << product << endl;

    // Calculate and display the cube of each number
    double cube1 = cube(num1);
    double cube2 = cube(num2);
    cout << "Cube of " << num1 << ": " << cube1 << endl;
    cout << "Cube of " << num2 << ": " << cube2 << endl;

    return 0;
}

