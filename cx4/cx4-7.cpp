/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx4-7.cpp,v 1.2 1997/08/01 18:28:50 berman Exp $

// cx4-7.cpp
// Code Example 4-7: Implementation of the Time Class

#include "cx4-5.h"

void Time::readTime(bool & errorFlag)
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
   if (!(cin >>  hour))
      return;
   if (hour < 0 || hour > 12)
      return;
   char c;
   cin >> c;
   if (c != delimiter)
      return;
   if (!(cin >> minute)) // formatted input
      return;
   if (minute < 0 || minute > 59)
      return;
   cin >> c;
   if (c == 'A' || c == 'a')
      AM_or_PM = AM;
   else if (c == 'P' || c == 'p')
      AM_or_PM = PM;
   else
      return;
   cin >> c;
   if (c != 'M' && c != 'm')
      return;
   errorFlag = false;
   if (hour == 12)
      minutes = minute;
   else
      minutes = hour*60 + minute;
   if (AM_or_PM == PM)
      minutes += 60*12;
}

int Time::subtractTimes(Time t)
{
   return minutes - t.minutes;
}   
