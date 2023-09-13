///Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data.Write also Main function (Multiple Inheritance)
#include <iostream>
#include <string>
using namespace std;

// Base class for a person
class Person {
protected:
    string name;
    int age;

public:
    // Default and parameterized constructors for Person
    Person() : name(""), age(0) {}
    Person(string n, int a) : name(n), age(a) {}

    // Function to read data for a person
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display data for a person
    void displayData() {
        cout << "Name: " << name << ", Age: " << age;
    }
};

// Derived class for a student, inheriting from Person
class Student : public Person {
private:
    float percentage;

public:
    // Default constructor for Student
    Student() : percentage(0.0) {}

    // Function to read data for a student, overriding the base class method
    void readData() {
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    // Function to display data for a student, overriding the base class method
    void displayData() {
        Person::displayData();
        cout << ", Percentage: " << percentage << "%" << endl;
    }
};

// Derived class for a teacher, inheriting from Person
class Teacher : public Person {
private:
    float salary;

public:
    // Default constructor for Teacher
    Teacher() : salary(0.0) {}

    // Function to read data for a teacher, overriding the base class method
    void readData() {
        Person::readData();
        cout << "Enter salary: $";
        cin >> salary;
    }

    // Function to display data for a teacher, overriding the base class method
    void displayData() {
        Person::displayData();
        cout << ", Salary: $" << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter student information:" << endl;
    student.readData();

    cout << "\nEnter teacher information:" << endl;
    teacher.readData();

    cout << "\nStudent Information:" << endl;
    student.displayData();

    cout << "\nTeacher Information:" << endl;
    teacher.displayData();

    return 0;
}

