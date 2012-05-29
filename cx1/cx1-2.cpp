/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/

// RCS $Id: cx1-2.cpp,v 1.3 1997/07/25 18:36:32 berman Exp $

// cx1-2.cpp 
// Code Example 1-2: a dice program that uses an adt
//
// Illustrates the solution to a "dice simulation", using
// abstract data types. Compare this approach to cx1-1.cpp.
//
// Dice ADT
//
// Characteristics:
//    Represents a pair of 6-sided dice, that can be rolled to get a
//    random sum between 2 and 12.
//
// Operations:
// int roll()
//    Preconditions: none
//    Postcondition: A random value between 1 and 6 is stored for each of
//       the dice.
//    Returns: The sum of the two dice values, lying between 2 and 12
// int die1()
//    Precondition: The dice have been rolled at least once.
//    Postcondition: None
//    Returns: The value of the first die.
// int die2()
//    Precondition: The dice have been rolled at least once.
//    Postcondition: None
//    Returns: The value of the second die.

// Note on encapsulation: The representation of the dice is contained within
// global variables -- we'll see shortly a better way to do this.
#include <iostream.h>
#include <stdlib.h>
#include "dslib.h"
int dice_1, dice_2;

int roll()
{
   // note -- you don't really want to call randomize every time you roll the
   // dice, but for this simplified design you don't have much choice.
   randomize();
   dice_1 = random(6) + 1;
   dice_2 = random(6) + 1;
   return dice_1 + dice_2;
}

int die1()
{
   return dice_1;
}

int die2()
{
   return dice_2;
}

// end of Dice ADT

int main() // test program to demonstrate Dice ADT
{
   cout << "The value rolled is: " << roll() << endl;
   cout << "The first die was: " << die1() << endl;
   cout << "The second die was: " << die2() << endl;
   return 0;
}
