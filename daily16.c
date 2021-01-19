/*
Author: Saema Nazar
Date:	3/21/19
Purpose: obtain user-given cost and then calculate how many months it will take to repay the loan and the amount of interest 
         that will accumulate  until the loan is repaid. 
Sources	of	Help:	nothing
Time	Spent: 1 day
----------------
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
 
 Date: 3/21/19
 Name: Saema Nazar
 */

#include <stdio.h>

const double INT_RATE = 0.015;
const double MONTHLYPAY = 50.00;

int main(int argc, char *argv[])
   {
   
   double cost = 0.0;             //user's input value
   int months = 0;                 //used to track # months until loan is paid, incremented in for-loop
   double remainder = 0.00;       //amount leftover from 50 (monthly payment) minus the interest payment 
   double totalInterest = 0.00;     //keeps track of total interest paid
   double finalPay = 0.00;          //final payment
   
   do{                     
      printf("Enter the cost (>500.00):\n");          // do-while loop to validate user input
      scanf("%lf", &cost);
     }
      while(cost <= 500.00);
   
  for(months=0; cost>=0; ++months)
  {
      remainder = MONTHLYPAY - (INT_RATE * cost);
     
      totalInterest = totalInterest + (MONTHLYPAY - remainder);
      cost = cost - remainder;
   }
   
   finalPay = (cost+remainder) + ((cost + remainder)*INT_RATE);
   
   printf("It takes %d months to pay off the loan.\nThe total amount of interest paid is: %.2lf.\n", months, totalInterest);
   printf("The amount of final payment is: %.2lf.", finalPay);
   
   
   return 0; 
   }






