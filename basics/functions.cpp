/* A function is a block of code which execute certain tasks when it
is called. A function consists of a header and body. The header consists of
the type of data the functions returns, the functions's name and the
parameters received by the function. When a function does not return a value,
it used data type 'void' which means nothing. Arguments are data sent to the function that control what it does.
*/
// example program that adds to integers

#include <iostream>

int add(int x, int y)
{

    int sum;
    sum = x + y;

    std::cout<<sum<<std::endl;
    return sum;
}

int main()
{

    add(5,9);
    return 0;
}
