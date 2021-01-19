/* 
Author:Saema Nazar
Date:	2/14/19
Purpose:	obtain an input, count down from the input number to 0, print 4 asterisks, then count up to that input
Sources	of	Help:	lecture notes				
Time	Spent: worked on over the course of a week
______________________
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
 
 Date: 2/14/19
 Name: Saema Nazar
 */

#include <stdio.h>

int input;
int input2;
int num;
void loop_down_to_zero(void);
void loop_up(void);

int main()
{
   printf("Please enter a positive integer: ");
   scanf("%d", &input);
   num = input;
   printf("%d\n", input);
   printf("%d\n", input);
   loop_down_to_zero();
   
   printf("****\n");
   
   printf("0\n");
   loop_up();
   
    
   return 0;  
}
 
 void loop_down_to_zero(void) 
 {
     while (input != 0)
   { input = input - 1;
     printf("%d\n", input);
     }
 }

void loop_up(void)
{
   while (input < num)
      { input = input + 1;
      printf("%d\n", input);
      }
}

