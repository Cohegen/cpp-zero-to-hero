#include <iostream>
#include <string>

std::string name_function(const std::string& first_name,const std::string& last_name)
{


    std:: string full_name = first_name + "  "  +last_name;
    std::cout<<"Hello"<<full_name<<" nice to meet you"<<std::endl;

    return first_name;




}

int main()
{


    name_function("Samuel","Musau");
    return 0;
}
