//copying strings

#include <iostream>
#include <string.h>

int main()
{

    char string1[] = "Free the bound periodicals! ";
    char string2[80];


    //copying the contents of string1 into string2
    //arguments in format (new location, original location)
    strcpy(string2,string1);

    std::cout<<"String1: "<<string1<<std::endl;
    std::cout<<"String2: "<<string2<< std::endl;





    return 0;
}
