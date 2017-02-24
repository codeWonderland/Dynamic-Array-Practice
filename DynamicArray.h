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

    /*
     * Pre: this method requires nothing
     * Purpose: This method creates a dynamic array
     *      this array will either hold more
     *      dynamic arrays inside of it or strings
     * Post: Creates a dynamic array
     * * * * * * * * * * * * * * * * * * * * * * * * */
    DynamicArray(int capacity = DEFAULT_INITIAL_CAPACITY, int typeOfArray = 1, std::string name = "Array");

    /*
     * Pre: A dynamic array and a size for a new array
     * Purpose: This method acts a copy constructor
     * Post: Creates a new Dynamic Array based off an
     *      already existing one
     * * * * * * * * * * * * * * * * * * * * * * * * * */
    DynamicArray(int capacity, const DynamicArray& oldDynamicArray);

    /*
     * Pre: A dynamic array
     * Purpose: Add one more open spot in a dynamic array
     * Post: returns nothing
     * * * * * * * * * * * * * * * * * * * * * * * * * * */
    void addNewDynamicArray();

    /*
     * Pre: a dynamic array and a new size for the array
     * Purpose: change the size of a dynamic array to
     *      match the defined size
     * Post: returns nothing
     * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    void resize(int newCapacity);

    /*
     * Pre: A dynamic array
     * Purpose: to return the size of a dynamic array
     * Post: Returns the size of a dynamic array
     * * * * * * * * * * * * * * * * * * * * * * * * * */
    int getCapacity() const;

    /*
     * Pre: a dynamic array
     * Purpose: Returns a dynamic array
     * Post: Returns a dynamic array
     * * * * * * * * * * * * * * * * * */
    std::string *getArray() const;

    /*
     * Pre: a dynamic array of arrays
     * Purpose: returns a dynamic array of arrays
     * Post: returns a dynamic array of arrays
     * * * * * * * * * * * * * * * * * * * * * * * */
    DynamicArray *getArrayOfArrays() const;

    /*
     * Pre: a dynamic array
     * Purpose: returns the name of a dynamic array
     * Post: returns the name of a dynamic array
     * * * * * * * * * * * * * * * * * * * * * * * * */
    std::string getName() const;

    /*
     * Pre: a dynamic array
     * Purpose: to set a specific value in a
     *      dynamic array
     * Post: returns nothing
     * * * * * * * * * * * * * * * * * * * * */
    void setArrayValue(std::string value, int location);

    /*
     * Pre: a dynamic array and a string
     * Purpose: adds a string to a dynamic array
     * Post: returns nothing
     * * * * * * * * * * * * * * * * * * * * * * */
    void operator+=(std::string newString);

    /*
     * Pre: a dynamic array and a string
     * Purpose: parses through a dynamic array
     *      looking for a string, if this string
     *      is found then it is removed and the
     *      values shifted to the left to remove
     *      the blank spaces
     * Post: returns nothing
     * * * * * * * * * * * * * * * * * * * * * * */
    void operator-=(std::string value);

    ~DynamicArray();
};


#endif //PA2_DYNAMICARRAY_H
