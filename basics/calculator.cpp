#include <iostream>

int add(int x, int y)
{

    std::cout<<"Running calculator....\n";
    return (x+y);
}

int main()
{
    /* this program calls an add() function which adds two different numbers*/
    std::cout<<"What is the sum of 10 and 500?, sum is \n"<<add(100,500)<<std::endl;

}
