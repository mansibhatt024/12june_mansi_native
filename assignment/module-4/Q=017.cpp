//Write a program of to swap the two values using templates
#include <iostream>

// Define a template function 'swapValues' that swaps two values of the same type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a; // Create a temporary variable to store the value of 'a'
    a = b;      // Assign the value of 'b' to 'a'
    b = temp;   // Assign the value of the temporary variable to 'b' (effectively swapping the values)
}

int main() {
    using namespace std;

    int a, b;
    double x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter two doubles: ";
    cin >> x >> y;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Swap integers using the 'swapValues' template function
    swapValues(a, b);

    // Swap doubles using the 'swapValues' template function
    swapValues(x, y);

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

