#include <iostream>

int findArea(int length,int width)
{
    //int length,width,area;



    int area = length * width;

    std::cout<<"Area is: "<<area<<std::endl;

    return area;




}


int main()
{
    int result = findArea(100, 200);
    return 0;
}
