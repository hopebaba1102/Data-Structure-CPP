/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution",
   published by Oxford University Press.  Permission is hearby granted
   to use this code for any educational, non-commercial purpose,
   provided this notice remains intact.
   A. Michael Berman, Rowan University, berman@rowan.edu
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx4-3.cpp,v 1.3 1997/08/01 18:22:40 berman Exp $

// cx4-3.cpp
// Code Example 4-3: Implementation of Time ADT
//#include "dslib.h"
#include <iostream>
using namespace std;

typedef int Time;

Time readTime(bool & errorFlag)
{
   // The time must be formatted as <HH>:<MM><AMorPM>, where
   // <HH> is an int in the range 0 to 12, <MM> is an int in
   // the range 0 to 59, and <AMorPM> is either AM or PM.

   enum AM_PM {AM, PM} AM_or_PM;
   int hour, minute;
   const char delimiter = ':';

   // Assume that the format is bad -- once valid data is extracted,
   // reset errorFlag to false
   errorFlag = true;
   // formatted input -- fail if not an int
   if (!(cin >> hour))
      return 0;
   if (hour < 0 || hour > 12)
      return 0;
   char c;
   cin >> c;
   if (c != delimiter)
      return 0;
   if (!(cin >> minute)) // formatted input
      return 0;
   if (minute < 0 || minute > 59)
      return 0;
   cin >> c;
   if (c == 'A' || c == 'a')
      AM_or_PM = AM;
   else if (c == 'P' || c == 'p')
      AM_or_PM = PM;
   else
      return 0;
   cin >> c;
   if (c != 'M' && c != 'm')
      return 0;

   // if the program gets here, the data was correctly formatted --
   // so compute the time.
   errorFlag = false;
   Time returnTime;
   if (hour == 12)
      returnTime = minute;
   else
      returnTime = hour*60 + minute;
   if (AM_or_PM == PM)
      returnTime += 60*12;
   return returnTime;
}

int subtractTimes(Time t1, Time t2)
{
   return t1 - t2;
}
