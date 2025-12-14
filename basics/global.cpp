#include <iostream>

// Declaring global variables
void convert();

float fahrenheit;
float celsius;

int main()
{
    std::cout << "Please enter the temperature in Fahrenheit: ";
    std::cin >> fahrenheit;  // Read input into the fahrenheit variable

    convert();

    std::cout << "\nHere's the temperature in Celsius: ";
    std::cout << celsius << "\n";

    return 0;
}

void convert()
{
    celsius = ((fahrenheit - 32) * 5) / 9;
}

