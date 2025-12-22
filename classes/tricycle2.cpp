#include "tricycle.hpp"

//constructor for object
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

//deconstructor for the object
Tricycle::~Tricycle()
{
    //do nothing
}

//set bikes's speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

//create a trike and ride it
int main()
{
    Tricycle bike(5);
    bike.pedal();
    bike.pedal();
    bike.brake();
    bike.brake();
    bike.brake();
    return 0;
}
