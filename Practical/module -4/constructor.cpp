//constructor
#include<iostream>
using namespace std;

class construct {
public:
    int a, b;

    construct() // default constructor
    {
        a = 103; // Set static values for a and b
        b = 20;
    }

    void display() {
        cout << "Addition of a and b is: " << a + b << endl;
        cout << "subtraction of a and b is:"<< a - b <<endl;
        cout << "multiplication of and b is: "<< a * b << endl;
        cout <<"divison of a and b is:"<< a / b << endl;
        cout << "modulo of a and b is:"<< a % b << endl;
    }
};

int main() {
    construct obj;
    obj.display();
    return 0;
}

