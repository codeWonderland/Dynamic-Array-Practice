//
// Created by Alice Easter on 2/23/17.
//

#ifndef PA2_DYNAMICARRAY_H
#define PA2_DYNAMICARRAY_H


#include <string>
#include <iostream>

const int DEFAULT_INITIAL_CAPACITY = 10;

class DynamicArray
{

private:
    std::string* mArray;
    std::string mName;
    int mCapacity;

public:
    DynamicArray* mArrayOfArrays;

    DynamicArray(int capacity = DEFAULT_INITIAL_CAPACITY, int typeOfArray = 1, std::string name = "Array");

    //Copy Constructor
    DynamicArray(int capacity, const DynamicArray& oldDynamicArray);

    void addNewDynamicArray();

    void resize(int newCapacity);

    int getCapacity() const;

    std::string *getArray() const;

    DynamicArray *getArrayOfArrays() const;

    std::string getName() const;

    void setArrayValue(std::string value, int location);

    void operator+=(std::string newString);

    void operator-=(std::string value);

    ~DynamicArray();
};


#endif //PA2_DYNAMICARRAY_H
