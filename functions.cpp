//
// Created by Alice Easter on 2/23/17.
//

#include "functions.h"

void mainMenu()
{
    DynamicArray arrayOfDynamicArrays = DynamicArray(0, 2);

    if (arrayOfDynamicArrays.getCapacity() == 0)
    {
        char makeArray = ' ';
        std::cout << "Hello! It seems that you don't have any arrays!" << std::endl;
        std::cout << "Would you like to make one [Y/n]? ";
        std::cin >> makeArray;
        std::cout << std::endl;

        if(toupper(makeArray) == 'N')
        {
            std::cout << "Oh well! Goodbye!";
            exit(0);
        }
    }
    //Creating first user modifiable array
    std::string name;
    int size;
    bool ridiculous = true;

    std::cout << "What would you like to name your array: ";
    std::cin >> name;
    std::cout << std::endl;
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
    arrayOfDynamicArrays.addNewDynamicArray();
    arrayOfDynamicArrays.mArrayOfArrays[(arrayOfDynamicArrays.getCapacity() - 1)] = DynamicArray(size, 1, name);

    bool finished = false;
    //User chooses their array
    while(!finished)
    {
        int arrayChoice;
        std::cout << "Which Array Would You Like To Modify:" << std::endl;
        for (int i = 0; i < arrayOfDynamicArrays.getCapacity(); i++)
        {
            std::cout << i << ". " << arrayOfDynamicArrays.mArrayOfArrays[i].getName() << std::endl;
        }

        std::cout << arrayOfDynamicArrays.getCapacity() << ". Add New Array" << std::endl;

        bool invalid = true;
        while(invalid)
        {
            std::cin >> arrayChoice;
            std::cout << std::endl;
            if(arrayChoice < 1 || arrayChoice > arrayOfDynamicArrays.getCapacity())
            {
                std::cout << "That is an invalid choice! Which array? " << std::endl;
            }
            else
            {
                invalid = false;
            }
        }

        if (arrayChoice == arrayOfDynamicArrays.getCapacity())
        {
            std::string arrayName;
            int arraySize = 1;
            bool isRidiculous = true;

            std::cout << "What would you like to name your array: ";
            std::cin >> arrayName;
            std::cout << std::endl;
            while(isRidiculous)
            {
                isRidiculous = false;
                std::cout << "How large would you like your array: ";
                std::cin >> arraySize;
                if (arraySize <= 0 || arraySize > 20)
                {
                    std::cout << "A number between 1 and 20 please!" << std::endl;
                    isRidiculous = true;
                }
            }
            std::cout << std::endl;
            arrayOfDynamicArrays.addNewDynamicArray();
            arrayOfDynamicArrays.mArrayOfArrays[(arrayOfDynamicArrays.getCapacity() - 1)] = DynamicArray(arraySize, 1, arrayName);
        }
        else
        {
            //User modifies their array of choice
            bool modifyingArray = true;
            while (modifyingArray)
            {
                modifyingArray = false;
            }
        }
    }
}
