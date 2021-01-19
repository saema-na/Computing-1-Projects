/*
Author: Saema Nazar
Date: 3/3/19
Purpose:	find GCD of two user-given integers using a function
Sources	of	Help:	euclid's algorithm formula
Time	Spent: 5 hours
--------------------
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
 
 Date:3/3/19
 Name: Saema Nazar
 */


#include <stdio.h>

int getInt(int userInput);
int getGCD(int integer1, int integer2);


int main (int argc, char *argv[]) {
   int input1;
   int input2;
   int greatestCD;
   
   printf("Please enter a positive integer:\n");
   scanf("%d", &input1);
   input1= getInt(input1);
   printf("Please enter a second positive integer:\n");
   scanf("%d", &input2);
   input2 = getInt(input2);
   
   greatestCD = getGCD(input1, input2);
   printf("The largest integer that divides both %d and %d is: %d\n", input1, input2, greatestCD);
   
   
   return 0;
   }


   int getInt(int userInput) {
      while (userInput <= 0){
         printf("I'm sorry, that number is unrecognized or not positive.\nPlease enter a positive integer:\n");
         scanf("%d", &userInput);
          }
       return userInput; }
      
       
   int getGCD(int integer1, int integer2){ 
      int divisor;
      int dividend;
      int remainder = 1;
      int GCDval;
         if(integer1 < integer2) {
            divisor = integer1;
            dividend = integer2; 
         }
         else if(integer2 < integer1) {
            divisor = integer2;
            dividend = integer1; 
         }
         else if(integer1 == integer2) {
            GCDval = integer1;
            return GCDval;
      }
      
         while(remainder > 0) {
            remainder = dividend % divisor;
        
            if (remainder == 0) {
               return divisor; 
           }
           
         dividend = divisor;
         divisor = remainder;
      }
      return divisor;
}

         

