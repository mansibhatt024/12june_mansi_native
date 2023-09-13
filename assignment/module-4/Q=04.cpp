//WAP to create simple calculator using class.
#include<iostream>
using namespace std;

// Define a class named "calculator"
class calculator{
public:
    // Function to add two numbers
    double add(double a, double b) {
        return a + b;
    }

    // Function to subtract two numbers
    double subtract(double a, double b) {
        return a - b;
    }
    // Function to multiply two numbers
    double multiply(double a, double b) {
        return a * b;
    }
    // Function to divide two numbers
    double divide(double a, double b) {
        return a / b;
    }
};
int main() {
    // Create an instance of the "calculator" class
    calculator calc;
    // Declare variables to hold user inputs
    double num1, num2;
    char operation;
    // Prompt the user to input the first number
    cout << "Enter first number: ";
    cin >> num1;
    // Prompt the user to input the second number
    cout << "Enter second number: ";
    cin >> num2;
    // Prompt the user to input an operator (+, -, *, /)
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    // Use a switch statement to perform the selected operation
    switch (operation) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

