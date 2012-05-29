/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution",
   published by Oxford University Press.  Permission is hearby granted
   to use this code for any educational, non-commercial purpose,
   provided this notice remains intact.
   A. Michael Berman, Rowan University, berman@rowan.edu
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx4-4.h,v 1.2 1997/08/01 18:26:06 berman Exp $

// cx4-4.h
// Code Example 4-4: Definition of Time Class

//#include "dslib.h"

class Time {
public:
   void readTime(bool & errorFlag);
   int subtractTimes(Time t);
private:
   int minutes;
};
