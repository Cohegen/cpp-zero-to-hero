#include <iostream>

int main()
{
    //a variable
    int myAge;

    //a pointer
    int *pAge = NULL;


    myAge = 5;
    pAge = &myAge;

    std::cout<<"myAge: " <<myAge << "\n";
    std::cout<<"*pAge: "<<*pAge<< "\n\n";

    std::cout<<"*pAge =7\n";
    *pAge = 7; // setts myAge to 7
    std::cout<<"*pAge: "<<*pAge <<"\n";
    std::cout<<"myAge: "<<myAge<<"\n\n";

    std::cout<<"myAge = 9\n";
    myAge = 9;

    std::cout<<"myAge: "<<myAge<<"\n";
    std::cout<<"*pAge: "<<*pAge<<"\n";




    return 0;
}
