#include <iostream>
#include <string>
using namespace std;

class SmartLight
{
private:
    bool isOn;
    int brightness;
    string color;
public:
    //Constructor
     SmartLight() : isOn(false), brightness(0), color("White") {}

    void toggle()
    {
        if(isOn == true)
        {
            isOn = false;
            brightness = 0;

        }
        else
        {
            isOn = true;
            brightness = 50;
        }
    }
    void setBrightness(int level)
    {

        if (isOn == false) {
            cout << "Cannot change brightness. The light is OFF!" << endl;
            return;
        }

        // Logic to keep brightness between 0 and 100
        if (level < 0) {
            brightness = 0;
        } else if (level > 100) {
            brightness = 100;
        } else {
            brightness = level;
        }
        cout << "Brightness set to " << brightness << "%" << endl;
    }
    void displayStatus()
    {
        std::cout<<"The light is "<<isOn<<std::endl;
        std::cout<<"The current brightness is: "<<brightness<<std::endl;
        std::cout<<"The color is: "<<color<<std::endl;
    }
};

int main()
{
    SmartLight myLamp;

    myLamp.toggle();
    myLamp.setBrightness(85);
    myLamp.displayStatus();

    return 0;
}
