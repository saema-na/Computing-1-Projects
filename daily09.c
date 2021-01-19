/*
Author:	Saema Nazar
Date:	2/15/19
Purpose:	keep prompting user to enter a negative integer less than zero until they do
Sources	of	Help:	lecture notes
Time	Spent: 25 mins
_______________
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
 
 Date: 2/15/19
 Name: Saema Nazar
 */

#include <stdio.h>
void clear_keyboard_buffer(void);
int main()
{
   int input;
   int numOfConv;
   
   //printf("Please enter a negative number:\n");
   numOfConv = scanf("%d", &input);
  
  while (input >= 0 || numOfConv == 0)
    {
       clear_keyboard_buffer();
       printf("I'm sorry, you must enter a negative integer less than zero:\n");
       numOfConv = scanf("%d", &input);
    }
   printf("I got the number %d!\n", input);


   return 0;
}

void clear_keyboard_buffer(void)
{
   char ch;
   scanf("%c", &ch);
       while (ch !='\n' && ch!='\0') 
    {
          scanf("%c", &ch);
    }

}