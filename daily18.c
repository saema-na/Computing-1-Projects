/*
Author: Saema Nazar
Date: 3/25/19
Purpose: obtain 3 user-given values & output in ascending order
Sources of Help: nothing
Time Spent: 3 days
------------
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
 
 Date: 3/25/19
 Name:Saema Nazar
 */

#include <stdio.h>

//function declaration/prototype here

void orderThree(double* val1, double* val2, double* val3);

int main(int argc, char * argv[]) {
   double num1, num2, num3;

   printf("Enter three numbers separated by blanks:\n");
   scanf("%lf%lf%lf", &num1, &num2, &num3);


 //Call the function to order 3 numbers into increasing order
   orderThree(&num1, &num2, &num3);



 //Display the Results
   printf("The numbers in ascending order are: %.2f %.2f %.2f\n", num1,num2, num3);

   return 0;
}
//function definition here
   
void orderThree(double* val1, double* val2, double* val3)
{
   double temp;
   if(*val1 > *val2)
   {
      temp = *val1;
      *val1 = *val2;
      *val2 = temp;
   }
   if(*val3 < *val1)
   {
      temp = *val1;
      *val1 = *val3;
      *val3 = temp;
   }
   if(*val2 > *val3)
   {
      temp = *val2;
      *val2 = *val3;
      *val3 = temp;
   }
}




