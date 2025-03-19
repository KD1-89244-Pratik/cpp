#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
protected:
    string name, empID;
public:
    virtual void inputDetails() = 0;
    virtual void displayDetails() const = 0;
    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    void inputDetails() override {
        cout << "Enter Manager ID: ";
        cin >> empID;
        cout << "Enter Manager Name: ";
        cin.ignore();
        getline(cin, name);
    }
    void displayDetails() const override {
        cout << "Manager ID: " << empID << ", Name: " << name << endl;
    }
};

class Salesman : public Employee {
public:
    void inputDetails() override {
        cout << "Enter Salesman ID: ";
        cin >> empID;
        cout << "Enter Salesman Name: ";
        cin.ignore();
        getline(cin, name);
    }
    void displayDetails() const override {
        cout << "Salesman ID: " << empID << ", Name: " << name << endl;
    }
};

class SalesManager : public Employee {
public:
    void inputDetails() override {
        cout << "Enter SalesManager ID: ";
        cin >> empID;
        cout << "Enter SalesManager Name: ";
        cin.ignore();
        getline(cin, name);
    }
    void displayDetails() const override {
        cout << "SalesManager ID: " << empID << ", Name: " << name << endl;
    }
};

int main() {
    vector<Manager> managers;
    vector<Salesman> salesmen;
    vector<SalesManager> salesManagers;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Manager\n";
        cout << "2. Add Salesman\n";
        cout << "3. Add SalesManager\n";
        cout << "4. Display count of all employees by designation\n";
        cout << "5. Display All Managers\n";
        cout << "6. Display All Salesmen\n";
        cout << "7. Display All SalesManagers\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Manager m;
                m.inputDetails();
                managers.push_back(m);
                break;
            }
            case 2: {
                Salesman s;
                s.inputDetails();
                salesmen.push_back(s);
                break;
            }
            case 3: {
                SalesManager sm;
                sm.inputDetails();
                salesManagers.push_back(sm);
                break;
            }
            case 4: {
                cout << "Count of Managers: " << managers.size() << endl;
                cout << "Count of Salesmen: " << salesmen.size() << endl;
                cout << "Count of SalesManagers: " << salesManagers.size() << endl;
                break;
            }
            case 5: {
                cout << "Managers:\n";
                for (const auto& m : managers) {
                    m.displayDetails();
                }
                break;
            }
            case 6: {
                cout << "Salesmen:\n";
                for (const auto& s : salesmen) {
                    s.displayDetails();
                }
                break;
            }
            case 7: {
                cout << "SalesManagers:\n";
                for (const auto& sm : salesManagers) {
                    sm.displayDetails();
                }
                break;
            }
            case 8: {
                cout << "Exiting program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != 8);

    return 0;
}
