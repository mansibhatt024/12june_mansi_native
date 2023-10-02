//Define a class to represent lecture details. Include the following members and the program should handle at least details of 5 lecturers. Data members:
//a) Name of the lecturer b) Name of the subject c) Name of course d) Number of lecturers
#include <iostream>
#include <string>
using namespace std;

// Define the LectureDetails class
class LectureDetails {
private:
    string name;
    string subject;
    string course;
    int numLectures;

public:
    // Constructor to initialize lecture details
    LectureDetails() : numLectures(0) {}

    // Function to add lecture details
    void addLectureDetails(string lecturerName, string lectureSubject, string lectureCourse, int lectures) {
        name = lecturerName;
        subject = lectureSubject;
        course = lectureCourse;
        numLectures = lectures;
    }

    // Function to display name and lecture details
    void displayLectureDetails() {
        cout << "Lecturer Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Course: " << course << endl;
        cout << "Number of Lectures: " << numLectures << endl;
        cout << "--------------------" << endl;
    }
};

int main() {
    // Creating lecture details objects for 5 lecturers
    LectureDetails lecturers[5];

    // Taking input for lecturer details and adding them to the objects
    for (int i = 0; i < 5; ++i) {
        string name, subject, course;
        int numLectures;
        cout << "Enter Lecturer Name: ";
        cin >> name;
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Course: ";
        cin >> course;
        cout << "Enter Number of Lectures: ";
        cin >> numLectures;
        lecturers[i].addLectureDetails(name, subject, course, numLectures);
    }

    // Displaying lecture details for all lecturers
    cout << "\nLecture Details:" << endl;
    for (int i = 0; i < 5; ++i) {
        lecturers[i].displayLectureDetails();
    }

    return 0;
}


