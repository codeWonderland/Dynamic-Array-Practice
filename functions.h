//
// Created by Alice Easter on 2/23/17.
//

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
