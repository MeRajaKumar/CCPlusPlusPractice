// Create a Student class with:

// Private members: rollNo, name, and marks

// Inline functions to:

// Set student details

// Display student details

// An overloaded function calculateGrade():

// One version uses the student's stored marks

// Another version accepts marks as an argument

// Grade calculation logic:

// >=90 → A

// >=75 → B

// >=60 → C

// <60 → D

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    inline void setDetails(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    inline void displayDetails() {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
    }

    inline void calculateGrade() {
        cout << "Grade   : " << getGrade(marks) << endl;
    }
    inline void calculateGrade(float customMarks) {
        cout << "Custom Grade for " << customMarks << ": " << getGrade(customMarks) << endl;
    }

private:
    char getGrade(float m) {
        if (m >= 90) return 'A';
        else if (m >= 75) return 'B';
        else if (m >= 60) return 'C';
        else return 'D';
    }
};


int main() {
    Student s1;

    
    s1.setDetails(101, "Aayush Gupta", 82.5);

    s1.displayDetails();

    s1.calculateGrade();

    s1.calculateGrade(91.2);

    return 0;
}

// Output:
// Roll No : 101
// Name    : Aayush Gupta
// Marks   : 82.5
// Grade   : B
// Custom Grade for 91.2: A
