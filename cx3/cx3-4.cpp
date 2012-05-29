/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx3-4.cpp,v 1.3 1997/07/30 21:20:07 berman Exp $

// cx3-4.cpp
// Code Example 3-4: sum function

int sum(int a[], int n)
{
   // Precondition: a is an array with subscripts ranging from 0 to n-1
   int i;
   int total(0);
   for (i = 0; i < n; i++)
      // Loop invariant: total = a[0] + a[1] + ... + a[i]
      total += a[i];
   // Postcondition: total = a[0] + a[1] + ... + a[n-1]
   return total;
}
