/* **********************************************
 Author:	Saema Nazar
Date:	4/2/19
Purpose:	take an arbitrary array and copmare its elements. Return the index # if it has an identical pair, and -1 if no pairs 
         are present
Explanation: I used a condition in the for-loop of my function that only allowed the loop to iterate if 'i' was less than the 
               size value. This prevents going outside the limits of the array's size.
Sources	of	Help:	lecture notes
Time	Spent: 2 days
------------
 Computing I -- COMP.1010 Honor Statement
 
 The practice of good ethical behavior is essential for maintaining good order in the classroom, providing an 
 enriching learning experience for students, and as training as a practicing computing professional upon graduation.  
 This practice is manifested in the University's Academic Integrity policy. Students are expected to strictly avoid 
 academic dishonesty and adhere to the Academic Integrity policy as outlined in the course catalog.  Violations will 
 be dealt with as outlined therein. All programming assignments in this class are to be done by the student alone.  No 
 outside help is permitted except the instructor and approved tutors. I certify that the work submitted with this assignment 
 is mine and was generated in a manner consistent with this document, the course academic policy on the course website on 
 Blackboard, and the UMass Lowell academic code.
 Date: 4/3/19
 Name: Saema Nazar
 ***********************************************/

#include <stdio.h>

int findIdenticalPair(double arr[], int SIZE);

const int SIZE = 10;          //I couldn't figure out how to make this program work with different sized arrays or
                              // without using array size as an argument for the function.

int main(int argc, char * argv[]) 
{

   double arr[] = { 1.2, 6.1, 3.3, 3.3, 4.5, 7.9, 5.4, 5.4, 9.9, 1.0};

   int index = 0;
    
    
    //call the function to get the index 
   index = findIdenticalPair(arr, SIZE);
   
   printf("index is: %d\n", index);
    
    return 0;
}


int findIdenticalPair(double arr[], int SIZE)
{
   int i;
   int noMatch = 0;
   
   for(i=0; i<SIZE && i != SIZE + 1; ++i)
   {
      if (arr[i] == arr[i+1])
      {
         return i;
      }
      else 
         { 
             noMatch = noMatch + 1; 
         }
      
      if (noMatch == SIZE)
      {
         i = -1;
         return i;
      }
      
   }
}


   






