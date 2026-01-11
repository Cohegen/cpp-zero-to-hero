#include <iostream>

class SimpleCat
{
public:
    SimpleCat(int age, int weight);
    ~SimpleCat() = default;

    int GetAge() const { return itsAge; }
    int GetWeight() const { return itsWeight; }

private:
    int itsAge;
    int itsWeight;
};

// Constructor definition
SimpleCat::SimpleCat(int age, int weight)
    : itsAge(age), itsWeight(weight)
{
}

// Function returns by value
SimpleCat TheFunction()
{
    SimpleCat frisky(5, 9);
    std::cout << "frisky address: " << &frisky << "\n";
    return frisky;   // copy elision / move semantics
}

int main()
{
    SimpleCat rCat = TheFunction();

    std::cout << "rCat is " << rCat.GetAge() << " years old\n";
    std::cout << "rCat address: " << &rCat << "\n";

    return 0;
}

