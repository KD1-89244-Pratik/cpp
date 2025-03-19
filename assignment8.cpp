#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size = 5) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == capacity - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push " << value << "." << endl;
        } else {
            arr[++top] = value;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop." << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot peek." << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    void print() const {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack(10);

    stack.push(5);
    stack.push(10);
    stack.push(15);

    stack.print();

    cout << "Top element: " << stack.peek() << endl;

    cout << "Popped element: " << stack.pop() << endl;

    stack.print();

    return 0;
}
