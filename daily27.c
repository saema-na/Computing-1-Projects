/*
Author: Saema Nazar
Date: 4/29/19
Purpose:	ask user for value >0 and use malloc to allocate space for user-specified sized array. Print array with elements
         1 greater than their index value then print reversed.
Sources of	Help:	class notes
Time	Spent: 1 hr
--------------------------------
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
 
 Date: 4/29/19
 Name: Saema Nazar
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int numElements;
   int i;
   int k;
   int *array = NULL;
   //////obtain a valid num of elements
   do
   {
      printf("Please enter the number of elements of your dynamic array:\n");
      scanf("%d", &numElements);
   } while(numElements <= 0);
   
   array = (int*)malloc(sizeof(int) * numElements);
   
   
   //////check if memory allocated successfully
   if(array == NULL)
   {
      printf("Error with memory allocation.\n");
   }
  for(i=numElements-1; i>=0; --i)
   {
      array[i] = i + 1;
      printf("Element at index %d : %d\n", i, i+1);
   }
   
   printf("***\n");
   
   
   char *copyStr = array;           
   
   for(k=0; k < numElements; ++k)
   {
      printf("Element at index %d : %d\n", k, *array);
      array++;
   }

   free(copyStr);    //free address of first array element
}




