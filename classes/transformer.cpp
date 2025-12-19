#include <iostream>
#include <string>

#include <iostream>
#include <string>

using namespace std;

class Transformer {
public:
    string group;
    string name;
    string color;

    // Constructor (Now Public)
    // Changed parameters to g, n, c to match your logic
    Transformer(string g, string n, string c) {
        group = g;
        name = n;
        color = c;
    }

    // Member function (Now Public)
    void transforming() {
        cout << "The " << group << " are transforming!" << endl;
        cout << "His name is " << name << "." << endl;
        cout << "His color is " << color << "." << endl;
    }

private:
    int year; // This remains hidden from main()
};

int main() {
    // Now this works because the constructor is public
    Transformer bot("Autobots", "Optimus Prime", "Blue");

    // Calling the correct function name
    bot.transforming();

    return 0;
}
