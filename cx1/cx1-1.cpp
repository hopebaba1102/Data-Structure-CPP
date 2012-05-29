/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution",
   published by Oxford University Press.  Permission is hearby granted
   to use this code for any educational, non-commercial purpose,
   provided this notice remains intact.
   A. Michael Berman, Rowan University, berman@rowan.edu
   http://www.rowan.edu/evolve
*/

// RCS $Id: cx1-1.cpp,v 1.3 1997/07/25 20:36:34 berman Exp $

// cx1-1.cpp
// Code Example 1-1: a dice program that does not use an adt
//
// Illustrates the solution to a "dice simulation", without using
// abstract data types. Compare this approach to cx1-2.cpp.

//#include "dslib.h" // contains standard header files for this book
//#include <stdlib.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   int die1, die2, total;
   //srand(); // initialize the pseudorandom number generator
   srand((unsigned)time(0));    // srand to give the seed
   die1 = (rand()%6)+1;         // Used the rand function defined in cstdlib
   die2 = (rand()%6)+1;         // Instead of the randomize function.
   total = die1 + die2;
   cout << "first die: " << die1 << ", second die: " << die2 << endl;
   cout << "total for roll is: " << total << endl;
   return 0;
}
