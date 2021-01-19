/*
Author:	Saema Nazar
Date:	4/15/19
Purpose:	read a c-string up to 80 characters and thn print it reversed
Sources	of	Help:	notes
Time	Spent:	2 days
--------------------------
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
 
 Date: 4/15/19
 Name: Saema Nazar
 */

#include <stdio.h>

void reverseString(char* string, int nullPos);

int main(int argc, char *argv[])
{
   char str[81];
   int length = 81;
   int i = 0;
   
  str[80] = '\0';
   
   printf("Enter a string (up to 80 chars)\n");
   
   //reading and assigning string 
  while((str[i] = getchar()) != '\n')
  {
     i=i+1;
     
     if(i == 80)
     {
     //   str[i+1] = '\0';
        break;
     }
  }
   str[i+1] = '\0';  
   
   printf("%s", str);
   reverseString(&str, i);    //variable i indicates position of the '\0' character and specifies string length.
   printf("%s", str);

   return 0;  
}

void reverseString(char* string, int nullPos){
   int i;
   char temp;
   
   for(i=0; i<= (nullPos-1)/2; i++)
   {
      temp = string[i];
      string[i] = string[nullPos - i - 1];              //swapping values
      string[nullPos - 1 - i] = temp;
   }   
}






