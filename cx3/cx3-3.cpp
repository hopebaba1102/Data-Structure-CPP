/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx3-3.cpp,v 1.3 1997/07/30 21:09:27 berman Exp $

// cx3-3.cpp
// Code Example 3-3: max function

int max (int a[], int n)
{
   // assertion 1: a is an array with subscripts ranging from 0 to n-1
   int max_val(a[0]), i;

   for (i = 1; i < n; i++) 
      // assertion 2:  (max_val >= a[k] for 0 <= k < i) and
      //               (max_val = a[j] for some j, 0 <= j < i)
      if (max_val < a[i])
         max_val = a[i]; 

   // assertion 3:  (max_val >= a[k] for 0 <= k < n) and 
   //               (max_val == a[j] for some j, 0 <= j < n)
   //         i.e., max_val is equal the value of largest int in array a
   return max_val;
}
