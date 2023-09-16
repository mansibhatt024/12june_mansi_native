//Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define two string variables
    string str1 = "Hello, ";
    string str2 = "world!";

    // Concatenate the two strings using the + operator
    string concatenated = str1 + str2;

    // Display the concatenated string
    cout << "Concatenated String: " << concatenated << endl;

    return 0;
}

