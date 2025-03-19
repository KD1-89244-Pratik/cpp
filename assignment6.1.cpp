#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string id, title;
    float price;
public:
    virtual void input() = 0;
    virtual float getDiscountedPrice() = 0;
    virtual ~Product() {}
};

class Book : public Product {
private:
    string author;
public:
    void input() override {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }
    float getDiscountedPrice() override {
        return price - (price * 0.10); // 10% discount
    }
};

class Tape : public Product {
private:
    string artist;
public:
    void input() override {
        cout << "Enter Tape ID: ";
        cin >> id;
        cout << "Enter Tape Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Artist Name: ";
        getline(cin, artist);
        cout << "Enter Price: ";
        cin >> price;
    }
    float getDiscountedPrice() override {
        return price - (price * 0.05); // 5% discount
    }
};

int main() {
    Product* arr[3]; // Array of Product pointers
    int choice;
    float totalBill = 0;

    for (int i = 0; i < 3; i++) {
        cout << "\nChoose Product Type (1. Book, 2. Tape): ";
        cin >> choice;
        if (choice == 1) {
            arr[i] = new Book();
        } else if (choice == 2) {
            arr[i] = new Tape();
        } else {
            cout << "Invalid choice. Please choose again.\n";
            i--;
            continue;
        }
        arr[i]->input();
        totalBill += arr[i]->getDiscountedPrice();
    }

    // Display total bill
    cout << "\nTotal Bill after Discount: " << totalBill << endl;

    // Clean up memory to prevent leaks
    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    return 0;
}
