/*
Author: Saema Nazar
Date:	3/11/19
Purpose: find population of crud afer x number of days, given the initial population, using fibonacci sequence numbers. 
Sources	of	Help:		
Time	Spent: 1 day
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
 
 Date: 3/11/19
 Name: Saema Nazar
 */

#include <stdio.h>

   void clear_keyboard_buffer(void);
   int validateSize(int);   //validates user input for initial size. Returns int type w/ validated initial size
   int validateDays(int);  //validates user input for number of days. Returns int type w/ validated # of days
   int fibSequence(void);   // calculates population using fibonacci pattern. Returns int type w/ value of total population

int main(int argc, char *argv[]){
   int totalPopulation;
   char continueInput;
 
 
   totalPopulation = fibSequence();
   printf("The final population would be %d pounds.\n", totalPopulation); 
   
   printf("Would you like to continue? (y/n)");
   scanf(" %c", &continueInput);
   
   while(continueInput == 'y')
   {
        totalPopulation = fibSequence();
        printf("The final population would be %d pounds.\n", totalPopulation);
        
        printf("Would you like to continue? (y/n)");
        scanf(" %c", &continueInput);
   }
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

int validateSize(int sizeNum) 
   {
      while(sizeNum < 0 ) 
      {
         clear_keyboard_buffer();
         printf("I'm sorry that value is unrecognized or is negative.\nPlease enter the initial size of the green crud:\n");
         scanf(" %d", &sizeNum);
      }
       return sizeNum; 
   } 

int validateDays(int dayNum)
   {
      while(dayNum < 0)
      {
       clear_keyboard_buffer();
       printf("I'm sorry that value is unrecognized or is negative.\nPlease enter the number of days:\n");  
       scanf("%d", &dayNum);
      }
    return dayNum;
   }

int fibSequence(void) 
   {
      int initialSize = 0;
      int numDays = 0;
      int input1 = 0;
      int input2 = 0;
      int nextInput = 0;
      int state = 0; //counter incremented by 5 per each for-loop iteration
   
   
      printf("Please enter the initial size of the green crud:\n");
      scanf("%d", &initialSize);
      initialSize = validateSize(initialSize);
   
      printf("Please enter the number of days:\n");
      scanf("%d", &numDays);
      numDays = validateDays(numDays);       
 
      input1 = initialSize;
   
         for(state = 0; state <= numDays; state = state + 5)
         {
            nextInput = input1 + input2;
            input1 = input2;
            input2 = nextInput;
         }
      return nextInput;
   }
   