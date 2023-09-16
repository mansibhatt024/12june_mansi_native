//Write a program to Mathematic operation like //Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading
#include <iostream>
using namespace std;
class Calculator {
public:
    // Function to perform addition
    int calculate(int a, int b) {
        return a + b;
    }
    // Function to perform subtraction
    int calculate(int a, int b, char operation) {
        return (operation == '-') ? a - b : 0;
    }
    // Function to perform multiplication
    int calculate(int a, int b, double factor) {
        return static_cast<int>(a * b * factor);
    }
    // Function to perform division
    double calculate(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Division by zero is not allowed!" << endl;
            return 0.0;
        }
    }
};
int main() {
    Calculator calculator;
    int num1 = 10, num2 = 5;
    char operation = '-';
    double factor = 1.5;
    // Function Overloading Examples
    cout << "Addition: " << calculator.calculate(num1, num2) << endl;
    cout << "Subtraction: " << calculator.calculate(num1, num2, operation) << endl;
    cout << "Multiplication: " << calculator.calculate(num1, num2, factor) << endl;
    cout << "Division: " << calculator.calculate(static_cast<double>(num1), static_cast<double>(num2)) << endl;
    return 0;
}
 
