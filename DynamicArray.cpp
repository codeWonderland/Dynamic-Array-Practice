/*
Author: Alice Easter
        Class: CSI 240-05
        Assignment: PA 2
Date Assigned: 02/23/17
        Due Date: 03/07/17 12:29 PM
Description:
        Creates a dynamic array that is modifiable by a user
Certification of Authenticity:
        I certify that this is entirely my own work, except where I have given
        fully-documented references to the work of others. I understand the definition and
consequences of plagiarism and acknowledge that the assessor of this assignment
        may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of academic
- staff; and/or Communicate a copy of this assignment to a plagiarism checking
- service (which may then retain a copy of this assignment on its database for the
- purpose of future plagiarism checking)
*/

#include "DynamicArray.h"

DynamicArray::DynamicArray(int capacity) : mCapacity(capacity)
{
    mArray = new std::string[mCapacity];
}

DynamicArray::DynamicArray(int capacity, const DynamicArray &oldDynamicArray) : mCapacity(capacity)
{
    mArray = new std::string[mCapacity];
    for(int i = 0; i < mCapacity; i++) {
        mArray[i] = oldDynamicArray.mArray[i];
    }
}

void DynamicArray::resize(int newCapacity)
{

    DynamicArray* tempArrayPtr;
    tempArrayPtr = new DynamicArray(newCapacity);

    for(int i = 0; i < newCapacity; i++) {
        if(mArray != NULL)
        {
            tempArrayPtr->setArrayValue(mArray[i], i);
        }
        else{
            tempArrayPtr->setArrayValue("", i);
        }

    }

    //delete mArray;

    this->mCapacity = newCapacity;
    this->mArray = tempArrayPtr->mArray;
    delete tempArrayPtr;
}

int DynamicArray::getCapacity() const
{
    return mCapacity;
}

std::string DynamicArray::getArrayValue(int location)
{
    return mArray[location];
}

void DynamicArray::setArrayValue(std::string value, int location)
{
    DynamicArray::mArray[location] = value;
}

void DynamicArray::operator+=(std::string newString)
{
    bool done = false;

    if (mCapacity != 0 && mArray[mCapacity - 1] != "")
    {
        this->resize((mCapacity * 2));
    }

    for (int i = 0; i < mCapacity && !done; i++)
    {
        if (mArray[i] == "")
        {
            mArray[i] = newString;
            done = true;
        }
    }
}

void DynamicArray::operator-=(std::string value)
{
    //Removing any element in the array that matches the value given
    for (int i = 0; i < mCapacity; i++)
    {
        if(mArray[i] == value)
        {
            mArray[i] = "";
        }
    }

    bool doneSorting = false;

    //Removing any blank spaces between strings in the array
    for (int i = 0; i < mCapacity && !doneSorting; i++)
    {
        //If the spot is empty we want to first check if any of the values
        //following that spot have anything in them
        if(mArray[i] == "")
        {
            bool foundValue = false;
            //we set j equal to i because we want to search from there on
            //and if we find something we want to move it to the empty spot then
            //end our search
            for (int j = i; j < mCapacity && !foundValue; j++)
            {
                if(mArray[j] != "")
                {
                    mArray[i] = mArray[j];
                    foundValue = true;
                    mArray[j] = "";
                }
            }

            //if we got through the for loop and we didn't find anything
            //then we are done moving things
            if(!foundValue)
            {
                doneSorting = true;
            }
        }
    }

}

DynamicArray::~DynamicArray()
{

}
