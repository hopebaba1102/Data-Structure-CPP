/*
	Copyright (c) 1997 Oxford University Press. All Rights Reserved.
	This code is from "Data Structures via C++: Objects by Evolution",
	published by Oxford University Press.  Permission is hearby granted
	to use this code for any educational, non-commercial purpose,
	provided this notice remains intact.
	A. Michael Berman, Rowan University, berman@rowan.edu
	http://www.rowan.edu/evolve
*/
// RCS $Id: cx4-7a.cpp,v 1.2 1997/08/01 18:29:52 berman Exp $

// cx4-7a.cpp
// Code Example 4-7a: A More Robust Implementation of the Time Class
// This version will not go into an endless loop with bad input,
// unlike the version in the book...

#include "cx4-5.h"

// Flush the iostream by removing any bad data,
// and clearing the iostream bits.
// I got this idea from Rick Mercer's "ourstuff" file distributed
// with "Computer Fundamentals with C++", published by Franklin,
// Beedle & Associates Incorporated, 1995. He tells me he got
// it from Eric Nagler, "Learning C++: A Hands-On Approach",
// West, 1993

#include <iostream>
#include <stdio.h>

using namespace std;

void flush()
{
   // call istream::clear and extract any garbage until end of file
   cin.clear();
   int nextChar;
   while( (nextChar = cin.get()) != '\n' && nextChar != EOF) { }
   cin.clear();
}

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
   if (!(cin >>  hour)) {
      flush(); return; }
   if (hour < 0 || hour > 12) {
      flush(); return; }
   char c;
   cin >> c;
   if (c != delimiter) {
      flush(); return; }
   if (!(cin >> minute)) { // formatted input
      flush(); return; }
   if (minute < 0 || minute > 59) {
      flush(); return;  }
   cin >> c;
   if (c == 'A' || c == 'a')
      AM_or_PM = AM;
   else if (c == 'P' || c == 'p')
      AM_or_PM = PM;
   else {
      flush(); return; }
   cin >> c;
   if (c != 'M' && c != 'm') {
      flush(); return; }
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
