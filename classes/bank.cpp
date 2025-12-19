#include <iostream>
#include <string>
using namespace std;

class Bank
{
public:
    string name;
    int age;

    //constructor
    Bank(string name, int age, string accountNumber, string password)
        : name(name), age(age), accountNumber(accountNumber), password(password)
    {
        balance = 0.0; // Initialize balance to zero
    }

    void getName()
    {
        std::cout<<"Your name is: "<<name<<std::endl;
    }

    void getAge()
    {
        std::cout<<"You are "<<age<<" years old."<<std::endl;

    }
    void getPassword()
    {
        std::cout<<"Your password is "<<password<<std::endl;

    }

    void getAccountNumber()
    {
        std::cout<<"Your account number is"<<accountNumber<<std::endl;
    }

private:
    string password;
    string accountNumber;
    double balance;

};

int main()
{
    Bank my_bank("Anthony",18,"15566","miamoja");
    my_bank.getName();
    my_bank.getAge();
    my_bank.getPassword();
    my_bank.getAccountNumber();
    return 0;
}
