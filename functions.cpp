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
        int userChoice = 0;
        std::cout << "What would you like to do: " << std::endl;
        std::cout << "1. Add Values From File" << std::endl;
        std::cout << "2. Get Array Info" << std::endl;
        std::cout << "3. Remove Values" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cin >> userChoice;

        std::string term, filenameIn, lines;
        std::ifstream inputFile;
        bool noInput = true;
        switch (userChoice)
        {
            case 1:
                //Test to see if the file exists
                while (noInput)
                {
                    noInput = false;

                    //Get File Name:
                    std::cout << "What is the name of the file:";
                    std::cin >> filenameIn;

                    //Open File for Input
                    inputFile.open(filenameIn);

                    //In the event of failure, the while statement is triggered
                    if (inputFile.fail())
                    {
                        std::cout << "Couldn't Open File!" << std::endl;
                        noInput = true;
                    }

                    else
                    {
                        std::cout << "File Opened Successfully" << std::endl << std::endl;
                    }

                }

                //Parsing through the file, line by line
                while (!inputFile.eof())
                {
                    getline(inputFile, lines);
                    *myArray+=(lines);
                }
                inputFile.close();

                break;
            case 2:
                std::cout << "This array has a size of " << myArray->getCapacity() << " and elements which are as follows:" << std::endl;
                for(int i = 0; i < myArray->getCapacity(); i++)
                {
                    if(myArray->getArrayValue(i) != "")
                    {
                        std::cout << myArray->getArrayValue(i) << std::endl;
                    }
                }
                break;
            case 3:
                std::cout << "What term would you like to remove? ";
                std::cin >> term;
                *myArray-=term;
                break;
            case 4:
                std::cout << "Have a nice day!";
                finished = true;
                break;
            default:
                break;
        }
    }
}
