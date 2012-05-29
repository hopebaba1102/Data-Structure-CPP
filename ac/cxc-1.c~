/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
/* RCS $Id: cxc-1.c,v 1.1 1997/08/11 18:02:51 berman Exp $ */

/* cxc-1.c
   Code Example C-1: sample C program
   This program reads integers into an array, sorts them with
   Bubble Sort, and prints the result. */

#include <stdio.h>

/* swap the values of two integers */
void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

#define SENTINEL -1
#define MAX_ARRAY 10

main()
{
   int a[MAX_ARRAY];
   int n = 0;
   int input;
   int i, j;

   /* read ints from stdin, until sentinel encountered */
   printf("Enter integers, terminating with %d.\n", SENTINEL);
   while (n < MAX_ARRAY) {
      scanf("%d", &input);
      if (input == SENTINEL) break;
      a[n++] = input;
   }

   /* sort the list, using Bubble Sort */
   for (i = 0; i < n; i++)
      for (j = n - 1; j > i; j--)
         if (a[j] < a[j-1])
            swap(&(a[j]), &(a[j-1]));

   /* report the results */
   printf("Sorted list is:\n");
   for (i = 0; i < n; i++)
      printf("%d\t", a[i]);
   printf("\n");
   return 0;
}



