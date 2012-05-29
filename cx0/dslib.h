/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/

// RCS $Id: dslib.h,v 1.6 1997/07/30 20:12:33 berman Exp $

#ifndef __MB_DSLIB_INCLUDED__
#define __MB_DSLIB_INCLUDED__

// dslib.h: standard header file

#include "compid.h"

#include <iostream.h>
#include <assert.h>

#ifndef __MB_COMPILER_DEFINES_BOOL__
enum bool {false, true};
#endif

#ifdef __MB_SIMULATE_BORLAND_RANDOM__

#include <sys/time.h>
#include <math.h>

inline void randomize()
{
    struct timeval t;
    gettimeofday(&t);
    srandom(int(t.tv_usec));
}

inline int random(int limit)
{
    return random()%limit;
}


#endif

#endif
