#include <iostream>

using namespace std;

class SimpleStorage {
private:
    int value;

public:
    // Constructor to initialize with user input
    SimpleStorage(int initialValue) {
        value = initialValue;
    }

    // Increment function
    void increment() {
        value += 1;
    }

    // Decrement function
    void decrement() {
        value -= 1;
    }

    // Getter function to read value
    int getValue() const {
        return value;
    }
};

int main() {
    int userValue;

    // Ask user for initial value
    cout << "Enter initial value: ";
    cin >> userValue;

    // Create object with user input
    SimpleStorage storage(userValue);

    // Show initial value
    cout << "Initial value: " << storage.getValue() << endl;

    // Perform increment
    storage.increment();
    cout << "After increment: " << storage.getValue() << endl;

    // Perform decrement
    storage.decrement();
    cout << "After decrement: " << storage.getValue() << endl;

    return 0;
}
