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

#ifndef PA2_FUNCTIONS_H
#define PA2_FUNCTIONS_H

#include "DynamicArray.h"
#include <iostream>
#include <iomanip>
#include <fstream>

/*
 * Pre: a Dynamic Array class
 * Purpose: creates a dynamic array
 * 		that is modifiable by a user
 * Post: returns nothing
 * * * * * * * * * * * * * * * * * * */
void mainMenu();

/*
 * Pre: a Dynamic Array Class, a choice on
 * 		what you do to modify the array,
 * 		and an actual array to modify
 * Purpose: Modify an array as the user
 * 		sees fit and determine whether or
 * 		not to coninue
 * Post: returns a boolean value determining
 * 		whether or not to continue
 * * * * * * * * * * * * * * * * * * * * * * * * */
bool arrayModifier(int userChoice, DynamicArray* myArray);

#endif //PA2_FUNCTIONS_H
