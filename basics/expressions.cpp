#include <iostream>

int main()
{

    int x = 0,y=72,z=0;
    std::cout<<"Before\n\nx: "<<x<<"y: "<<y;
    std::cout<<"z: "<<z<<"\n\n";

    z= x= y+13;

    std::cout<<"After\n\nx: "<<x<<"y: "<<y;
    std::cout<<"z: "<<z<<"\n";


    return 0;
}
