#include <iostream>
using namespace std;

class Tollbooth {
private:
    unsigned int totalCars;      // Total number of cars
    double totalMoney;           // Total amount of money collected
    unsigned int payingCars;     // Count of paying cars
    unsigned int nonPayingCars;  // Count of non-paying cars

public:
    // Constructor to initialize all members to 0
    Tollbooth() : totalCars(0), totalMoney(0.0), payingCars(0), nonPayingCars(0) {}

    // Function for a paying car
    void payingCar() {
        totalCars++;
        totalMoney += 0.50; // Add 50 cents
        payingCars++;
    }

    // Function for a non-paying car
    void nopayCar() {
        totalCars++;
        nonPayingCars++;
    }

    // Function to display the details
    void printOnConsole() const {
        cout << "\nTollbooth Statistics:\n";
        cout << "Total Cars: " << totalCars << endl;
        cout << "Paying Cars: " << payingCars << endl;
        cout << "Non-Paying Cars: " << nonPayingCars << endl;
        cout << "Total Money Collected: $" << totalMoney << endl;
    }
};

int main() {
    Tollbooth tollbooth;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Record a Paying Car\n";
        cout << "2. Record a Non-Paying Car\n";
        cout << "3. Display Tollbooth Statistics\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            tollbooth.payingCar();
            cout << "Recorded a paying car.\n";
            break;
        case 2:
            tollbooth.nopayCar();
            cout << "Recorded a non-paying car.\n";
            break;
        case 3:
            tollbooth.printOnConsole();
            break;
        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
