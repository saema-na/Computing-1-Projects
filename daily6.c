/*
***********************************************	
Author:	Saema Nazar
Date:	2/6/19
Purpose:	divide even input by 2, multiple odd input by 3 and add 1
Sources	of	Help:	no outside help
Time	Spent:	2 days to finish
***********************************************


 Computing I -- COMP.1010 Honor Statement
 
 The practice of good ethical behavior is essential for maintaining good order in the classroom, providing an enriching learning experience for students, and as training as a practicing computing professional upon graduation.  This practice is manifested in the University's Academic Integrity policy. Students are expected to strictly avoid academic dishonesty and adhere to the Academic Integrity policy as outlined in the course catalog.  Violations will be dealt with as outlined therein.
 
 All programming assignments in this class are to be done by the student alone.  No outside help is permitted except the instructor and approved tutors.
 
 I certify that the work submitted with this assignment is mine and was generated in a manner consistent with this document, the course academic policy on the course website on Blackboard, and the UMass Lowell academic code.
 
 Date: 2/6/19
 Name: Saema Nazar
 ***********************************************/
#include <stdio.h>
int main(int argc, char* argv[])

{
   
   int number = 0;
   scanf("%d", &number);
   printf("%d\n", number);
   
   if (number % 2 == 0)
      { 
         number = number / 2;
      }
      
   else if (number % 2 == 1) 
      { 
         number = (number * 3) +1;
      }
        printf("%d\n", number);


   return 0;
}


