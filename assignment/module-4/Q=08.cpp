//Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)
#include <iostream>
using namespace std;

// Base class for Cricketer
class Cricketer {
public:
    string name;
    int age;

    // Function to input common data for a Cricketer
    void inputdata() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter cricketer's age: ";
        cin >> age;
    }
};

// Derived class Batsman, inheriting from Cricketer
class Batsman : public Cricketer {
public:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

    // Function to input Batsman-specific data
    void batsmanData() {
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter average runs: ";
        cin >> averageRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    // Function to display Batsman's information
    void displayData() {
        cout << "\nBatsman Information\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;

    // Input common Cricketer data
    batsman.inputdata();

    // Input Batsman-specific data
    batsman.batsmanData();

    // Display Batsman's information
    batsman.displayData();

    return 0;
}

