/*
Author: Saema Nazar
Date:	2/5/19
Purpose: calculate sums, products, quotients, and remainders through the use of operators as directed by Daily 05 
         instructions
Sources	of	Help:	nothing	
Time	Spent: 30 mins
************************************************
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
 
 Date: 2/5/19
 Name: Saema Nazar
 */
 
 #include <stdio.h>
 int main()
 {
    //Step 1
   int num1 = 100;
   int num2 = 10;
   int num3 = 16;
   int num4 = 4;
 
 //Step 2
   printf("The first number is: %d\n", num1);
   printf("The second number is: %d\n", num2);
   printf("The third number is: %d\n", num3);
   printf("The last number is: %d\n\n", num4);
   
//Step 3.a
   int SumN1N2 = num1 + num2;
   printf("The sum of %d and %d is: %d\n", num1, num2,SumN1N2);
   
//Step 3.b
   int N1MultN3 = num1 * num3;
   printf("The product of %d and %d is: %d\n", num1, num3, N1MultN3);
   
//Step 3.c
   int N2DivN4 = num2 / num4;
   printf("The quotient of %d divided by %d is: %d\n", num2, num4, N2DivN4);
   
//Step 3.d
   int RemN1N4 = num1 % num4;
   printf("The remainder of %d divided by %d is: %d\n", num1, num4, RemN1N4);
   
   
   
   return 0;
 }
 