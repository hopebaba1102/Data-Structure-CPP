/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution",
   published by Oxford University Press.  Permission is hearby granted
   to use this code for any educational, non-commercial purpose,
   provided this notice remains intact.
   A. Michael Berman, Rowan University, berman@rowan.edu
   http://www.rowan.edu/evolve
*/
// RCS $Id: cxc-2.cpp,v 1.1 1997/08/11 18:02:58 berman Exp $

// cxc-2.cpp
// Code Example C-2: sample C++ program
// This program reads integers into an array, sorts them with
// Bubble Sort, and prints the result.

#include <iostream>

using namespace std;

// swap the values of two integers
void swap(int & a, int & b)
{
   int temp(a);
   a = b;
   b = temp;
}

const int SENTINEL = -1;
const int MAX_ARRAY = 10;

int main()
{
   int a[MAX_ARRAY];
   int n(0);
   int input;

   // read ints from stdin, until sentinel encountered
   cout << "Enter integers, terminating with " << SENTINEL << ".\n";
   while (n < MAX_ARRAY) {
      cin >> input;
      if (input == SENTINEL) break;
      a[n++] = input;
   }

   // sort the list, using Bubble Sort
   int i, j;
   for (i = 0; i < n; i++)
      for (j = n - 1; j > i; j--)
         if (a[j] < a[j-1])
            swap(a[j], a[j-1]);

   // report the results
   cout << "Sorted list is:\n";
   for (i = 0; i < n; i++)
      cout << a[i] << "\t";
   cout << endl;
   return 0;
}
