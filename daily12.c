/*
Author: Saema Nazar
Date:	2/21/19
Purpose:	use a loop to read an unknown number of scores and calculate the sum and average of those scores
Sources	of	Help:	notes
Time	Spent: 3 days
---------------
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
 
 Date: 2/21/19
 Name: Saema Nazar
 */

#include <stdio.h>


int main(int argc, char *argv[])
{
   double input;
   double inputInitial;
   double sum = 0.0;
   double avg;
   int numInput = 0; 
   
      printf("Enter a positive score (0 or negative to quit):\n");
      scanf("%lf", &inputInitial);
      input = inputInitial;
       
       if (input <= 0) {
      printf("No sum and average calculated!"); 
       }
   
   
     while(input > 0) {
     printf("Enter a positive score (0 or negative to quit):\n");
     scanf("%lf", &input);
     numInput++;
     sum = input + sum;  
     
      if (input <= 0 || input == 0) {
         sum = sum - input; 
         sum = sum + inputInitial;
         avg = sum / numInput;
         printf("The sum is: %.2lf, average is: %.2lf\n", sum, avg); } 
         
  }  
      
      
   return 0;
}

    
  
  
 
