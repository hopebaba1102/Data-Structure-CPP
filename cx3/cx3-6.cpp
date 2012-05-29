/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx3-6.cpp,v 1.2 1997/07/30 21:11:47 berman Exp $

// cx3-6.cpp
// Code Example 3-6: insertNextItem (used by Insertion Sort)

void insertNextItem(int a[], int i)
{
   // Precondition: array a is sorted from 0 to i-1
   int newItem(a[i]), insertPos(i);
   for ( ; insertPos && newItem < a[insertPos-1]; insertPos--)
      // Loop Invariant: newItem <= a[insertPos+1] .. a[i] &&
      //                  a[insertPos+1] .. a[i] are sorted
      a[insertPos] = a[insertPos-1];
   a[insertPos] = newItem;
   // Postcondition: array a is sorted from 0 to i
}
