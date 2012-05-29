/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx3-5.cpp,v 1.3 1997/07/30 21:31:16 berman Exp $

// cx3-5.cpp
// Code Example 3-5: Insertion Sort
void insertNextItem(int a[], int i); // in cx3-6.cpp
void insertionSort(int a[], int n)
{
   // Precondition: a is an array with subscripts ranging from 0 to n-1
   int i;
   for (i = 1; i < n; i++)
      // Loop invariant: items in range from 0 to i-1 are sorted; 
      //      items from i to n-1 have not yet been examined.
      insertNextItem(a, i); // see cx3-6.cpp
   // Postcondition: array a is sorted
}
