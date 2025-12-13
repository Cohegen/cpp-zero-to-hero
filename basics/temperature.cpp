#include <iostream>

float convert(float);

int main()
{
    float fahrenheit;
    float celsius;

    std::cout<<"Please enter the temperature in Fahrenheit: ";
    std::cin>>fahrenheit;
    celsius = convert(fahrenheit);
    std::cout<<"\nHere's the temperature in celsius:";
    std::cout<<celsius<<"\n";
    return 0;
}

//function to convert fahrenhet to celsius
float convert(float fahrenheit)
{
    float celsius;
    celsius = ((fahrenheit - 32) * 5) /9;
    return celsius;


}
