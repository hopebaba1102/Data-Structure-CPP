/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution",
   published by Oxford University Press.  Permission is hearby granted
   to use this code for any educational, non-commercial purpose,
   provided this notice remains intact.
   A. Michael Berman, Rowan University, berman@rowan.edu
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx3-1.cpp,v 1.3 1997/07/30 21:06:46 berman Exp $

// cx3-1.cpp
// Code Example 3-1: Test Driver for Max Function

#include <iostream>
#include "cx3-3.cpp"
using namespace std;

int max(int a[], int n);  // defined in cx3-3.cpp; link with the driver

int main()
{
   int a[100], i;
   cout << "Max driver\n";
   cout << "Enter each input to max terminated by -9999\n";
   cout << "Length of input must be <= 100\n";
   for (i = 0; i < 100; i++) {
      int val;
      cin >> val;
      if (val == -9999) // termination sentinel
         break;
      else
         a[i] = val;
   }
   cout << "\nMax is " << max(a, i) << '\n';
   cout << "\n\n";
   return 0;
}
