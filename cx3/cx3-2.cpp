/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution",
   published by Oxford University Press.  Permission is hearby granted
   to use this code for any educational, non-commercial purpose,
   provided this notice remains intact.
   A. Michael Berman, Rowan University, berman@rowan.edu
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx3-2.cpp,v 1.3 1997/07/30 21:08:22 berman Exp $

// cx3-2.cpp
// Code Example 3-2: Stub for Median Function

#include <iostream>

using namespace std;

int median(int a[], int n)
{
   // This is a stub for the function median; real function supplied later
   cout << "function median called with n = " << n << ", a[] = ";
   int i;
   for (i = 0; i < n; i++)
      cout << a[i] << '\t';
   cout << "\nType in value you want median to return:";
   int return_value;
   cin >> return_value;
   return return_value;
}
