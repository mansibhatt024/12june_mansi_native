//Write a program to find the max number from given two numbers using friend function
#include <iostream>
using namespace std;

// Define a class called Number
class Number {
private:
    int num;

public:
    // Constructor that initializes the private member 'num'
    Number(int n) : num(n) {}

    // Declare the 'findMax' function as a friend of the class
    friend int findMax(Number num1, Number num2);
};

// Define a standalone function 'findMax' to find the maximum of two Number objects
int findMax(Number num1, Number num2) {
    // Ternary operator to compare 'num1' and 'num2' and return the maximum
    return (num1.num > num2.num) ? num1.num : num2.num;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Create two Number objects 'num1' and 'num2' with user-provided values
    Number num1(a);
    Number num2(b);

    // Call the 'findMax' function to find the maximum of 'num1' and 'num2'
    int maxNum = findMax(num1, num2);

    // Display the maximum number
    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}

