/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution",
   published by Oxford University Press.  Permission is hearby granted
   to use this code for any educational, non-commercial purpose,
   provided this notice remains intact.
   A. Michael Berman, Rowan University, berman@rowan.edu
   http://www.rowan.edu/evolve
*/
// RCS $Id: cxb-2.cpp,v 1.1 1997/08/11 17:32:07 berman Exp $

// cxb-2.cpp
// Code Example B-2: A (very) simple Interactive Calculator

#include <iostream>

using namespace std;

void welcome_user()
{
   cout << "Welcome to the Interactive Calculator.\n\n";
}

double get_operand()
{
   double n;
   cout << "Enter number: ";
   cin >> n;
   return n;
}

double add(double a, double b)
{
   return a + b;
}

double subtract(double a, double b)
{
   return a-b;
}

double multiply(double a, double b)
{
   return a * b;
}

double divide(double a, double b)
{
   if (b)
      return a / b;
   else {
      cout << "Oops! Attempting to divide by zero.\n";
      return 0;
   }
}

void print_error(char op)
{
   cout << "Sorry, operation \"" << op
         << "\" not known; try again.\n";
}

void perform_calculations()
{
   int Done(0);
   char op;
   const char sp = ' ';
   const char eq = '=';
   while (!Done) {
      cout << "Select operations: +, -, *, /, or q for quit: ";
      cin >> op;
      if (op == 'q' || op == 'Q')
         Done = 1;
      else if (op == '+' || op == '-' || op == '*' || op == '/'){
         double operand1(get_operand());
         double operand2(get_operand());
         double result;
         switch (op) {
            case '+':
               result = add(operand1, operand2);
               break;
            case '-':
               result = subtract(operand1, operand2);
               break;
            case '*':
               result = multiply(operand1, operand2);
               break;
            case '/':
               result = divide(operand1, operand2);
               break;
         }
         cout << operand1 << sp << op << sp << operand2
               << sp << eq << sp << result << '\n';
      }
      else
         print_error(op);
   }
}

int main()
{
   welcome_user();
   perform_calculations();
   return 0;
}
