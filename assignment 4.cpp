#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Default constructor
    Time() : hour(0), minute(0), second(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    // Getters
    int getHour() const {
        return hour;
    }

    int getMinute() const {
        return minute;
    }

    int getSeconds() const {
        return second;
    }

    // Setters
    void setHour(int h) {
        hour = h;
    }

    void setMinute(int m) {
        minute = m;
    }

    void setSeconds(int s) {
        second = s;
    }

    // Function to print time
    void printTime() const {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    int n; // Number of Time objects
    cout << "Enter the number of Time objects: ";
    cin >> n;

    // Dynamically allocate memory for an array of Time objects
    Time* timeArray = new Time[n];

    // Accept time values for each object
    for (int i = 0; i < n; i++) {
        int h, m, s;
        cout << "Enter time for object " << (i + 1) << " (hour minute second): ";
        cin >> h >> m >> s;
        timeArray[i].setHour(h);
        timeArray[i].setMinute(m);
        timeArray[i].setSeconds(s);
    }

    // Display the time for each object
    cout << "\nDisplaying Times:\n";
    for (int i = 0; i < n; i++) {
        cout << "Time for object " << (i + 1) << ": ";
        timeArray[i].printTime();
    }

    // Deallocate memory
    delete[] timeArray;

    return 0;
}
