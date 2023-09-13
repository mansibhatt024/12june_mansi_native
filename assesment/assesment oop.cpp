//Define a class to represent lecture details. Include the following members and the program should handle at least details of 5 lecturers. Data members:
//a) Name of the lecturer b) Name of the subject c) Name of course d) Number of lecturers
#include <iostream>
#include <string>

using namespace std; // Using the standard namespace for easier access to standard library components

class Lecture {
private:
    std::string lecturerName;
    std::string subjectName;
    std::string courseName;
    int numLectures;

public:
    // Constructor to initialize data members
    Lecture() : lecturerName(""), subjectName(""), courseName(""), numLectures(0) {}

    // Method to assign initial values
    void assignInitialValues(std::string lecturer, std::string subject, std::string course, int num) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = num;
    }

    // Method to add lecture details
    void addLectureDetails() {
        cout << "Enter lecturer name: ";
        cin.ignore(); // Ignore any previous newline characters in the input buffer
        getline(cin, lecturerName); // Read a line of text for lecturerName

        cout << "Enter subject name: ";
        getline(cin, subjectName); // Read a line of text for subjectName

        cout << "Enter course name: ";
        getline(cin, courseName); // Read a line of text for courseName

        cout << "Enter number of lectures: ";
        cin >> numLectures; // Read an integer for numLectures
    }

    // Method to display lecture details
    void displayLectureDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numLectures << endl;
    }
};

int main() {
    Lecture lecturers[5]; // Create an array of Lecture objects to handle 5 lecturers

    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for lecturer " << i + 1 << ":" << endl;
        lecturers[i].addLectureDetails(); // Call the addLectureDetails method to input data
        cout << endl;
    }

    cout << "Lecture Details:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Lecturer " << i + 1 << ":\n";
        lecturers[i].displayLectureDetails(); // Call the displayLectureDetails method to display data
        cout << endl;
    }

    return 0;
}

