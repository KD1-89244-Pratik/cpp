#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string empID, name;
    float salary;
public:
    Employee() : salary(0.0f) {}
    void inputEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displayEmployeeDetails() const {
        cout << "Employee ID: " << empID << "\n"
             << "Name: " << name << "\n"
             << "Salary: " << salary << endl;
    }
    virtual void displayRole() const {
        cout << "Role: General Employee" << endl;
    }
    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    int numTeams;
public:
    Manager() : numTeams(0) {}
    void inputManagerDetails() {
        inputEmployeeDetails();
        cout << "Enter Number of Teams Managed: ";
        cin >> numTeams;
    }
    void displayManagerDetails() const {
        displayEmployeeDetails();
        cout << "Number of Teams: " << numTeams << endl;
    }
    void displayRole() const override {
        cout << "Role: Manager" << endl;
    }
};

class Salesman : public Employee {
private:
    float salesTarget;
public:
    Salesman() : salesTarget(0.0f) {}
    void inputSalesmanDetails() {
        inputEmployeeDetails();
        cout << "Enter Sales Target: ";
        cin >> salesTarget;
    }
    void displaySalesmanDetails() const {
        displayEmployeeDetails();
        cout << "Sales Target: " << salesTarget << endl;
    }
    void displayRole() const override {
        cout << "Role: Salesman" << endl;
    }
};

int main() {
    Manager m;
    Salesman s;

    cout << "Enter details for Manager:\n";
    m.inputManagerDetails();
    cout << "\nManager Details:\n";
    m.displayManagerDetails();
    m.displayRole();

    cout << "\nEnter details for Salesman:\n";
    s.inputSalesmanDetails();
    cout << "\nSalesman Details:\n";
    s.displaySalesmanDetails();
    s.displayRole();

    return 0;
}
