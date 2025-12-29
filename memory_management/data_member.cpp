#include <iostream>

class SimpleCat {
public:
    SimpleCat();
    ~SimpleCat();

    // Corrected typo from GeAge to GetAge
    int GetAge() const { return *itsAge; }
    void SetAge(int age) { *itsAge = age; }

    int GetWeight() const { return *itsWeight; }
    void SetWeight(int weight) { *itsWeight = weight; }

private:
    int *itsAge;
    int *itsWeight;
};

SimpleCat::SimpleCat() {
    itsAge = new int(2);
    itsWeight = new int(5);
}

SimpleCat::~SimpleCat() {
    delete itsAge;
    delete itsWeight;
    std::cout << "Cleaning up internal pointers...\n";
}

int main() {
    // Allocate Cat on the heap
    SimpleCat *Frisky = new SimpleCat;

    std::cout << "Frisky is " << Frisky->GetAge() << " years old\n";
    Frisky->SetAge(5);
    std::cout << "Frisky is " << Frisky->GetAge() << " years old\n";

    // Trigger destructor and free memory
    delete Frisky;

    return 0;
}
