/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx4-8.cpp,v 1.2 1997/08/01 18:30:45 berman Exp $

// cx4-8.cpp
// Code Example 4-8: example client for string class

// include the C++ string library. If your compiler is not compliant with the
// ISO/ANSI C++ Standard, you may have to change the following line in
// order to include a compatible String Class

#include <string> 

int main()
{
   string s1, s2, sarray[5];
   string s3("xyzzy");
   cout << "Enter a couple of strings... ";
   cin >> s1 >> s2;
   cout << "You entered " << s1 << " and " << s2 << ".\n";
   cout << "s1 + s3 is " << (s1 + s3) << "\n";
   int len = s3.length();
   s2 = s3.substr(1,len-2);
   cout << "The middle of string " << s3 << " is " << s2 << endl;
   cout << "Enter 5 strings for an array...";
   int i;
   for (i = 0; i < 5; i++)
      cin >> sarray[i];
   cout << "\nYour strings are: ";
   for (i = 0; i < 5; i++)
      cout << sarray[i] << '\t';
   s1 = sarray[0];
   cout << "\ns1 is " << s1 << endl;
   cout << "\nResult of s1.compare(sarray[0]): " << s1.compare(sarray[0]) << endl;
   return 0;
}
