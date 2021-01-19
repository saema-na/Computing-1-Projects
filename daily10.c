/*
Author: Saema Nazar
Date:	2/16/19
Purpose:	write a program that keeps score while allowing user to play rock/paper/scissors 
Sources	of	Help: nothing
Time	Spent: 45 minutes
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
 
 Date: 2/16/19
 Name: Saema Nazar
 */

#include <stdio.h>
void drawCall(void);
int main()


{
   char input1;
   char input2;
   
 
  
   //player 1 turn
   printf("Player-1 it is your turn!\nPlease enter your choice (p)aper, (r)ock, or (s)cissors:\n");
   scanf("%c", &input1);
   
   //player 2 turn
   printf("Player-2 it is your turn!\nPlease enter your choice (p)aper, (r)ock, or (s)cissors:\n");
   scanf(" %c", &input2);
   

   
   //player 1 paper outcomes
   if(input1 == 'p' || input1 == 'P') {
      if(input2 == 'r' || input2 == 'R') {
         printf("Player-1 wins! Paper covers rock!"); }
      else if(input2 == 's' || input2 == 'S') {
         printf("Player-2 wins! Scissors cut paper!"); }
      else { drawCall(); }
   }
   
   
//player 1 scissor outcome
   if(input1 == 's' || input1 == 'S') {
      if(input2 == 'p' || input2 == 'P') {
         printf("Player-1 wins! Scissors cut paper!"); }
      else if(input2 == 'r' || input2 == 'R') {
         printf("Player-2 wins! Rock breaks scissors!"); }
       else { drawCall(); }
   }
   
//player 1 rock outcome
   if(input1 == 'r' || input1 == 'R') {
      if(input2 == 'p' || input2 == 'P') {
         printf("Player-2 wins! Paper covers rock!"); }
      else if(input2 == 's' || input2 == 'S') {
         printf("Player-1 wins! Rock breaks scissors!"); }
       else { drawCall(); }
   }
   
   
   return 0;
   
}
   

   void drawCall(void) 
   {
      printf("Draw, nobody wins.");
   }



