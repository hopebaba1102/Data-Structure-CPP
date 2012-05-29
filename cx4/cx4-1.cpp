/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution",
   published by Oxford University Press.  Permission is hearby granted
   to use this code for any educational, non-commercial purpose,
   provided this notice remains intact.
   A. Michael Berman, Rowan University, berman@rowan.edu
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx4-1.cpp,v 1.2 1997/08/01 18:21:04 berman Exp $


// cx4-1.cpp
// Code Example 4-1: Patient Waiting Times

#include <iostream>


using namespace std;

// Somehow, the type "Time" gets defined up here
int main()
{
   int numberOfVisits(0), totalWaitingTime(0);
   char answer;
   do {
      Time arrival, seenByDoctor;
      cout << "Enter arrival time:";
      cin >> arrival;
      cout << "Enter time seen by doctor:";
      cin >> seenByDoctor;
      numberOfVisits++;
      // assume that subtracting one Time from another yields the
      // difference in minutes as an int
      totalWaitingTime += seenByDoctor - arrival;
      cout << "Done? Enter 'y' to quit, anything else to continue: ";
      cin >> answer;
   } while (answer != 'y');
   cout << "Number of visits: " << numberOfVisits << "\n";
   cout << "Total waiting time: " << totalWaitingTime << " minutes.\n";
   cout << "Average wait is " << totalWaitingTime/numberOfVisits
             << " minutes.\n";
   return 0;
}

