#include <iostream>
#include <string>
using namespace std;

// Define namespace NStudent
namespace NStudent {
    class Student {
    private:
        int rollNo;
        string name;
        float marks;

    public:
        // Function to accept student details from the console
        void acceptStudentFromConsole() {
            cout << "Enter Roll Number: ";
            cin >> rollNo;
            cin.ignore(); // To handle newline character after integer input
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Marks: ";
            cin >> marks;
        }

        // Function to display student details on the console
        void printStudentOnConsole() const {
            cout << "\nStudent Details:\n";
            cout << "Roll Number: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
    };
}

int main() {
    // Use the NStudent namespace
    NStudent::Student student;

    // Accept details and display them
    student.acceptStudentFromConsole();
    student.printStudentOnConsole();

    return 0;
}
