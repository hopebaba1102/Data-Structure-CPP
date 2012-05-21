{
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
}
{ RCS $Id: cxb-1.pas,v 1.1 1997/08/11 17:32:00 berman Exp berman $ }

{ cxb-1.pas }
{ Code Example B-1: Simple calculator written in Pascal }

program I_Calc(input, output);
{ I_Calc is a (very) simple Interactive Calculator }

procedure welcome_user;
begin
    writeln('Welcome to the Interactive Calculator.')
end;

procedure perform_calculations;
const
   eq = '=';
   sp = ' ';
var
   Done: Boolean;
   op: char;
   operand1, operand2, result: real;

   function get_operand: real;
   var
   n: real;
   begin
      write('Enter number: ');
      read(n);
      get_operand := n
   end;

   function add(a, b: real): real;
   begin
      add := a + b
   end;

   function subtract(a, b: real): real;
   begin
      subtract := a - b
   end;

   function multiply(a, b: real): real;
   begin
      multiply := a * b
   end;
   
   function divide(a, b: real): real;
   begin
      if b <> 0 then
         divide := a / b
      else begin
         writeln('Oops! Attempting to divide by zero.');
         divide := 0
      end
   end;

   procedure print_error;
   begin
      writeln('Sorry, operation "', op, '" unknown; try again.')
   end;

begin
   Done := false;
   while (not Done) do
   begin
      write('Select operation: +, , *, /, or q for quit: ');
      readln(op);
      if op in ['q','Q'] then
         Done := true
      else if op in ['+','','*','/'] then
      begin
         operand1 := get_operand;
         operand2 := get_operand;
         readln;
         case op of
            '+': result := add(operand1, operand2);
            '': result := subtract(operand1, operand2);
            '*': result := multiply(operand1, operand2);
            '/': result := divide(operand1, operand2)
         end; {case}
         writeln ( operand1:1:3, op:2, sp, operand2:1:3,eq:2, sp, result:1:3 )
      end
      else
         print_error
   end
end;

begin
   welcome_user;
   perform_calculations
end.
