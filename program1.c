/*
Author: Saema Nazar
Date:	2/25/19
Purpose: create a table of numbers that take the user's range and compute until reaching 1. 
         The numbers will be calculated according to the Collatz Conjecture. The number of steps 
         taken for a number to reach 1 will also be printed.
Sources	of	Help:	packets and notes from class
Time	Spent: 6 days
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
 
 Date: 2/25/19
 Name: Saema Nazar
 */


#include <stdio.h> 


//prototype for collatzConject function. 
int collatzConject(int n);
void clear_keyboard_buffer(void);

int main (int argc, char *argv[])
{
  int startInt;      //variable that is assigned with the user input for starting point
  int endInt;        // variable that is assigned with the user input for ending point
  int numSteps = 0;	/*variable representing the num of steps it takes for a # to reach 1. 
                     numSteps is incremented in a loop within the collatzConject function which returns its value */
  int columnNum;    //used to keep track of how many columns per line


   printf ("Enter a starting point:\n");
   scanf ("%d", &startInt);
   while (startInt < 2 || startInt > 99) 
    {
      clear_keyboard_buffer();
      printf ("Enter a valid starting point (from 2 - 99):\n");
      scanf ("%d", &startInt);
    }
   columnNum = startInt;


    printf ("Enter an ending point:\n");
    scanf ("%d", &endInt);
      while (endInt <= startInt || endInt > 999)
       {
          clear_keyboard_buffer();
          printf ("Enter a valid ending point (from %d - 999):\n", startInt);
          scanf ("%d", &endInt);
       }
    
    
    while (startInt <= endInt) 
    {
        numSteps = collatzConject(startInt); /* startInt's value is put into collatzConject function. The function returns
                                             the int value of numSteps. */
        printf("%5d:", startInt);
        printf("%-5d", numSteps);
        startInt = startInt + 1; 
        
      if (startInt == columnNum + 7) {
         printf("\n"); 
         columnNum = columnNum + 7;
         }
    }
    
    return 0;
}


   int collatzConject(int n) {  //variable startInt's value is put into the function and assigned to int n. 
       int numSteps = 0;
    
       while (n != 1) {          //while loop executes until n is 1.
          if (n % 2 == 0) {      //this if statement executes if n is even
             n = n / 2;
             numSteps = numSteps + 1;
          }
          else {
             n = (n*3) +1;       //executes if n is odd
             numSteps = numSteps + 1; //numSteps is incremented with each iteration until n == 1
          } }
          return numSteps;          //int numSteps' value is returned to the main function
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

