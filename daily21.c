/*
Author: Saema Nazar
Date:	4/5/19
Purpose: use stub functions to test if function is being called correctly while asking user if they want to 
         convert weights or lengths
Sources	of	Help:	nothings
Time	Spent: 15 minutes
-----------------------------
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
 
 Date: 4/5/19
 Name: Saema Nazar
 */
 
 
 #include <stdio.h>
 
 void convert_lengths(void);
 void convert_weights(void);
 
 
 int main(int argc, char *argv[])
 {
   int userNum;    //value obtained from user. Tested in while loop & used to determine which function will be called.
    
    
   while(userNum != 0)
   {
      printf("1. convert lengths\n2. convert weights\n0. Exit\nPlease choose from (1, 2, 0):\n");
      scanf("%d", &userNum);
    
   if(userNum == 1)
   {
      convert_lengths();   
   }
    
   if(userNum == 2)
   {
      convert_weights();
   }
    
   }
   
   printf("User chose to exit.\n");
   
   return 0;
 
 }
 
 void convert_lengths(void)
 {
    printf("The user wants to convert_lengths.\n");
 }
 
 void convert_weights(void)
 {
    printf("The user wants to convert_weights.\n");
 }
 