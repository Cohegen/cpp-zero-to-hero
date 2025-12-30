#include <iostream>

int main()
{
    int localVariable = 5;
    int *pLocal = &localVariable;
    int *pHeap = new int; // allocating space on heap for an int

    if (pHeap == NULL)
    {
        std::cout<<"Error! No memory for pHeap!";
        return 1;
    }
    *pHeap = 7; //assigning 7 to the newly allocated memory
    std::cout<<"localVariable: "<<localVariable << "\n";
    std::cout<< "*pLocal: " << *pLocal<< "\n";
    std::cout<< "*pHeap: " << *pHeap<< "\n";
    delete pHeap; //deleting the pointed memory

    pHeap = new int;
    if (pHeap == NULL)
    {
        std::cout<< "Error! No memory for pHeap";
        return 1;
    }
    *pHeap = 9;
    std::cout << "*pHeap: "<< *pHeap<< "\n";
    delete pHeap;




    return 0;
}
