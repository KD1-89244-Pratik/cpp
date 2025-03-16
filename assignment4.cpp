#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    // Parameterless constructor
    Box() {
        length = width = height = 1.0; // Default values
    }

    // Single parameterized constructor
    Box(double side) {
        length = width = height = side; // All dimensions set to the same value
    }

    // Parameterized constructor with 3 parameters
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate volume
    double calculateVolume() const {
        return length * width * height;
    }
};

int main() {
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Calculate Volume with Default Values\n";
        cout << "2. Calculate Volume with Same Value for Length, Width, and Height\n";
        cout << "3. Calculate Volume with Different Length, Width, and Height Values\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // Using parameterless constructor
            Box box;
            cout << "Volume of Box (Default Values): " << box.calculateVolume() << endl;
            break;
        }
        case 2: {
            // Using single parameterized constructor
            double side;
            cout << "Enter the same value for Length, Width, and Height: ";
            cin >> side;
            Box box(side);
            cout << "Volume of Box: " << box.calculateVolume() << endl;
            break;
        }
        case 3: {
            // Using parameterized constructor with 3 parameters
            double length, width, height;
            cout << "Enter Length, Width, and Height: ";
            cin >> length >> width >> height;
            Box box(length, width, height);
            cout << "Volume of Box: " << box.calculateVolume() << endl;
            break;
        }
        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
