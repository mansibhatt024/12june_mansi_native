//Assume that the test results of a batch of students are stored in three different  classes. Class Students are storing the roll number. Class Test stores the  marks obtained in two subjects and class result contains the total marks  obtained in the test. The class result can inherit the details of the marks  Obtained in the test and roll number of students. (Multilevel Inheritance)
#include <iostream>

using namespace std;

// Base class: Students
class Students {
protected:
    int rollNumber;

public:
    Students(int roll) : rollNumber(roll) {}

    void displayStudent() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class: Test (inherits from Students)
class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    Test(int roll, int marks1, int marks2)
        : Students(roll), subject1Marks(marks1), subject2Marks(marks2) {}

    void displayMarks() {
        displayStudent(); // Inherited function to display roll number
        cout << "Marks in Subject 1: " << subject1Marks << endl;
        cout << "Marks in Subject 2: " << subject2Marks << endl;
    }
};

// Derived class: Result (inherits from Test)
class Result : public Test {
public:
    Result(int roll, int marks1, int marks2)
        : Test(roll, marks1, marks2) {}

    void displayResult() {
        displayMarks(); // Inherited function to display roll number and marks
        int totalMarks = subject1Marks + subject2Marks;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    // Create an instance of the Result class
    Result studentResult(101, 85, 92);

    // Display the student's result
    studentResult.displayResult();

    return 0;
}

