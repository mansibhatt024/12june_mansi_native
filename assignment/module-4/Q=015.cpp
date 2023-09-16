//Write a program to swap the two numbers using friend function without using third variable 
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    // Swap the numbers without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

