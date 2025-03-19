#include <iostream>
#include <string>
using namespace std;

// Class for Date
class Date {
private:
    int day;
    int month;
    int year;

public:
    // Default constructor
    Date() : day(0), month(0), year(0) {}

    // Parameterized constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Function to set date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to display the date
    void displayDate() const {
        cout << day << "/" << month << "/" << year;
    }
};

// Class for Person
class Person {
private:
    string name;
    string address;
    Date birthdate; // Birthdate is of type Date

public:
    // Constructor
    Person(string n, string addr, int d, int m, int y)
        : name(n), address(addr), birthdate(d, m, y) {}

    // Function to display person details
    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Birthdate: ";
        birthdate.displayDate();
        cout << endl;
    }
};

// Class for Student
class Student {
private:
    int id;
    float marks;
    string course;
    Date joiningDate; // Joining date is of type Date
    Date endDate;     // End date is of type Date

public:
    // Constructor
    Student(int i, float m, string c, int jd, int jm, int jy, int ed, int em, int ey)
        : id(i), marks(m), course(c), joiningDate(jd, jm, jy), endDate(ed, em, ey) {}

    // Function to display student details
    void displayStudent() const {
        cout << "ID: " << id << endl;
        cout << "Marks: " << marks << endl;
        cout << "Course: " << course << endl;
        cout << "Joining Date: ";
        joiningDate.displayDate();
        cout << endl;
        cout << "End Date: ";
        endDate.displayDate();
        cout << endl;
    }
};

int main() {
    // Create a Person object
    Person person("Alice", "123 Main Street", 15, 5, 1995);
    cout << "Person Details:\n";
    person.displayPerson();

    // Create a Student object
    Student student(101, 85.5, "Computer Science", 1, 6, 2022, 31, 5, 2025);
    cout << "\nStudent Details:\n";
    student.displayStudent();

    return 0;
}
