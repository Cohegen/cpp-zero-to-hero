#include <iostream>

int main()
{
    int grade;

    std::cout<<"Enter your grade"<<std::endl;
    std::cin>>grade;

    if(grade >= 50)
        std::cout<<"You have passed"<<std::endl;
    else
            std::cout<<"You have failed"<<std::endl;



    return 0;
}
