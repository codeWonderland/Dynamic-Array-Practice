//
// Created by Alice Easter on 2/23/17.
//

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

    delete mArray;

    this->mArray = tempArrayPtr->mArray;


}

int DynamicArray::getCapacity() const
{
    return mCapacity;
}

void DynamicArray::setArrayValue(std::string value, int location)
{
    DynamicArray::mArray[location] = value;
}

void DynamicArray::operator+=(std::string newString)
{
    bool done = false;

    if (mArray[mCapacity - 1] != "")
    {
        this->resize((mCapacity + 1));
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