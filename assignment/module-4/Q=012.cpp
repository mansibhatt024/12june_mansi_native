//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;
class Matrix {
public:
    int size;
    int* data;
    // Constructor
    Matrix(int n) : size(n) {
        data = new int[size];
    }
    // Destructor
    ~Matrix() {
        delete[] data;
    }
    // Overload the + operator for matrix addition
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            cerr << "Matrix sizes are not compatible for addition." << endl;
            return *this; // Return an empty matrix
        }
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }
    // Function to display the matrix
    void display() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    int size = 5; // Adjust the size as needed
    Matrix matrix1(size);
    Matrix matrix2(size);
    // Initialize matrix1 and matrix2 with some values
    for (int i = 0; i < size; i++) {
        matrix1.data[i] = i + 1;
        matrix2.data[i] = 2 * (i + 1);
    }
    cout << "Matrix 1: ";
    matrix1.display();
    cout << "Matrix 2: ";
    matrix2.display();
    Matrix result = matrix1 + matrix2;
    cout << "Matrix Addition Result: ";
    result.display();
    return 0;
}

