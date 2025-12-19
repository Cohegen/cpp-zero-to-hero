#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    // Public attributes
    string color;
    string brand;

    // Constructor: Using a member initializer list
    Car(string c, string b, string o) : color(c), brand(b), owner(o) {}

    // Getter methods (to view data)
    string getColor() {
        return color;
    }

    string getOwner() {
        return owner;
    }

    // Setter method (to modify private data safely)
    void setOwner(string newOwner) {
        owner = newOwner;
    }

private:
    // Private attribute (hidden from direct access)
    string owner;
};

int main() {
    // 1. Creating an object of Car
    Car myCar("Red", "Toyota", "Alice");

    // 2. Accessing data using Getters
    cout << "The car color is: " << myCar.getColor() << endl;
    cout << "The brand is: " << myCar.brand << endl; // Public, can be accessed directly
    cout << "The original owner is: " << myCar.getOwner() << endl;

    cout << "--- Ownership Change ---" << endl;

    // 3. Using a Setter to update the private owner variable
    myCar.setOwner("Bob");
    cout << "The new owner is: " << myCar.getOwner() << endl;

    return 0;
}
