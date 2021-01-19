/*
/***********************************************
Author:	Saema Nazar
Date:	2/6/19
Purpose:	make my own function to print smiley faces
Main	difference	from	the	previous	version:	rather than writing the same set of printf statements 3 times to print 3 smiley
                                                faces, this program allows you to call the function to print a smiley face
Sources	of	Help: lecture notes
Time	Spent: 25 minutes
**********************************************
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
 
 Date: 2/6/19
 Name: Saema Nazar
 */

#include <stdio.h>

void smile(void);

int main()
{

   smile();    
   printf("\n");
   smile();
   printf("\n");
   smile();
   
   return 0;
}


void smile(void) {
    printf("  ****\n");
   printf(" * . .*\n");
   printf("*      *\n");
   printf("*  \\_/ *\n");
   printf(" *    *\n");
   printf("  ****\n");
   
}






