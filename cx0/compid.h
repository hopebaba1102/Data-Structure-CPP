/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/

// RCS $Id: compid.h,v 1.6 1997/08/08 14:47:48 berman Exp $

#ifndef __MB_COMPID_INCLUDED__
#define __MB_COMPID_INCLUDED__

// compid.h: Compiler Compatibility File

// The purpose of this file is to determine which compiler is being used,
// and set various flags for conditional compilation based on the information
// determined.

// You can add your own compiler by either identifying a macro definition
// that is predefined by your compiler, or by "hand defining" a macro, using
// a Make file or whatever mechanism you use to compile

// The following compilers are supported in this file as distributed:
//     Borland C++ 4.0.x
//     Borland C++ 4.5.x
//     Microsoft Visual C++ 5.0
//     g++ 2.x
//     SGI IRIX C++ 7.1

#ifdef __UNIX__
#define __MB_SIMULATE_BORLAND_RANDOM__
#endif

#if __GNUC__ >= 2
#define __MB_COMPILER_DEFINES_BOOL__
#define __MB_SIMULATE_BORLAND_RANDOM__
#endif

#if __TURBOC__ >= 0x500
#define __MB_COMPILER_DEFINES_BOOL__
#endif

#if _MSC_VER >= 1100
#define __MB_COMPILER_DEFINES_BOOL__
#endif

#if __sgi
#define __MB_SIMULATE_BORLAND_RANDOM__
#endif

#endif



