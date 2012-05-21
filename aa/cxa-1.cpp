/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cxa-1.cpp,v 1.1 1997/08/11 16:52:00 berman Exp $

// cxa-1.cpp
// Code Example A-1: perform_calculations function

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
