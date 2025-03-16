#include <iostream>
using namespace std;

// Structure Implementation
struct DateStruct {
    int day, month, year;
    
    void initDate() {
        day = 1; month = 1; year = 2000;
    }
    
    void printDateOnConsole() {
        cout << "Date: " << day << "-" << month << "-" << year << endl;
    }
    
    void acceptDateFromConsole() {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
    }
    
    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

// Class Implementation
class DateClass {
private:
    int day, month, year;
public:
    void initDate() {
        day = 1; month = 1; year = 2000;
    }
    
    void printDateOnConsole() {
        cout << "Date: " << day << "-" << month << "-" << year << endl;
    }
    
    void acceptDateFromConsole() {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
    }
    
    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    DateStruct ds;
    DateClass dc;
    int choice;
    
    do {
        cout << "\nMenu:";
        cout << "\n1. Initialize Date";
        cout << "\n2. Accept Date";
        cout << "\n3. Print Date";
        cout << "\n4. Check Leap Year";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                ds.initDate();
                dc.initDate();
                cout << "Date initialized to default." << endl;
                break;
            case 2:
                ds.acceptDateFromConsole();
                dc.acceptDateFromConsole();
                break;
            case 3:
                cout << "Structure Date: ";
                ds.printDateOnConsole();
                cout << "Class Date: ";
                dc.printDateOnConsole();
                break;
            case 4:
                cout << "Structure: " << (ds.isLeapYear() ? "Leap Year" : "Not a Leap Year") << endl;
                cout << "Class: " << (dc.isLeapYear() ? "Leap Year" : "Not a Leap Year") << endl;
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);
    
    return 0;
}
