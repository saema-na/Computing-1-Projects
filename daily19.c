/*
Author:	Saema Nazar
Date:	4/1/19
Purpose:	Print the contents of an array whose elements' values are triple their index value. 
         Then print it reversed.
Explanation: the reversing for loop iterates halfway through the array to reassign values in the first half 
            to the indices in the second half of the array. To find which index in the second half the value should be 
            swapped with, 1 and the value of i is subtracted from variable SIZE.
Sources	of	Help:	zybooks notes
Time	Spent: 45 minutes
----------------------------
 Computing I -- COMP.1010 Honor Statement
 
 The practice of good ethical behavior is essential for maintaining
 good order in the classroom, providing an enriching learning
 experience for students, and as training as a practicing computing
 professional upon graduation.  This practice is manifested in the
 University's Academic Integrity policy. Students are expected to
 strictly avoid academic dishonesty and adhere to the Academic
 Integrity policy as outlined in the course catalog.  Violations
 will be dealt with as outlined therein.
 
 All programming assignments in this class are to be done by the
 student alone.  No outside help is permitted except the instructor
 and approved tutors.
 
 I certify that the work submitted with this assignment is mine and
 was generated in a manner consistent with this document, the
 course academic policy on the course website on Blackboard, and
 the UMass Lowell academic code.
 
 Date: 4/1/19
 Name: Saema Nazar
 */

#include <stdio.h>
const int SIZE = 40;

int main (int argc, char* argv[])
{
   int array[SIZE];
   int i;
   int elementPerLine = 0;
   int temp;
   
   for(i=0; i<SIZE; ++i)
   {                                //assigning array with values
      array[i] = i * 3;
   }
   
   //printing original array
   for(i=0; i<SIZE; ++i)
   {
   printf("%7d", array[i]);
   elementPerLine = elementPerLine + 1;
   
      if(elementPerLine == 10) 
      {                                            //check # elements on line, if 10, enter new line
      printf("\n");
      elementPerLine = 0;
      }
   }
   
   printf("*****\n");
   
   //reversing array
   for(i=0; i<(SIZE/2); ++i) 
   {
      temp = array[i];
      array[i] = array[SIZE - i - 1];              //swapping values
      array[SIZE - 1 - i] = temp;
   }
   
   //printing reversed array
   for(i=0; i<SIZE; ++i)
   {
         printf("%7d", array[i]);
         elementPerLine = elementPerLine + 1;
      
      if(elementPerLine == 10)
      {                                       //check to see if newline should be entered
      printf("\n");
      elementPerLine = 0;
      }
   }
      
   return 0;
}










