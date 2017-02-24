//
// Created by Alice Easter on 2/23/17.
//

#include "functions.h"

void mainMenu()
{
    DynamicArray* myArray;
    //Creating first user modifiable array
    std::string name;
    int size;
    bool ridiculous = true;

    while(ridiculous)
    {
        std::cout << "How large would you like your array: ";
        std::cin >> size;
        if (size <= 0 || size > 20)
        {
            std::cout << "A number between 1 and 20 please!" << std::endl;
        }
        else
        {
            ridiculous = false;
        }
    }
    std::cout << std::endl;
    myArray = new DynamicArray(size);

    bool finished = false;
    //User chooses their array
    while(!finished)
    {
        std::cout << myArray->getCapacity();
        finished = true;
    }
}
