#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Function to accept student data from the console
    void acceptStudentFromConsole() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); // To ignore the newline character after integer input
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to print student data on the console
    void printStudentOnConsole() const {
        cout << "\nStudent Details:\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Accept Student Details\n";
        cout << "2. Display Student Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            student.acceptStudentFromConsole();
            break;
        case 2:
            student.printStudentOnConsole();
            break;
        case 3:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
