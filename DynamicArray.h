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

#ifndef PA2_DYNAMICARRAY_H
#define PA2_DYNAMICARRAY_H


#include <string>
#include <iostream>

const int DEFAULT_INITIAL_CAPACITY = 10;

class DynamicArray
{

private:
    std::string* mArray;
    int mCapacity;

public:

    /*
     * Pre: this method requires nothing
     * Purpose: This method creates a dynamic array
     * Post: Creates a dynamic array
     * * * * * * * * * * * * * * * * * * * * * * * * */
    DynamicArray(int capacity = DEFAULT_INITIAL_CAPACITY);

    /*
     * Pre: A dynamic array and a size for a new array
     * Purpose: This method acts a copy constructor
     * Post: Creates a new Dynamic Array based off an
     *      already existing one
     * * * * * * * * * * * * * * * * * * * * * * * * * */
    DynamicArray(int capacity, const DynamicArray& oldDynamicArray);

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

    std::string getArrayValue(int location);

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
