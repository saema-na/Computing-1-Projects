/*
Author: Saema Nazar
Date:	3/1/2019
Purpose: Write a program to score a rock/paper/scissor game. Use an enumerated 
         data type to store the player's input and switch case to determine winner/announce how they won. 
Sources	of	Help:	nothing
Time	Spent: 2 days

-----------------
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
 
 Date: 3/1/19
 Name: Saema Nazar
 */

#include <stdio.h>

   enum choices {ROCK = 1, PAPER, SCISSORS};
   typedef enum choices choice;
   
int main (int argc, char *argv[]) {
   char choice1;
   char choice2;
   char input1;
   char input2;

   printf("Player-1, please enter your choice <p>aper, <r>ock, or <s>cissors:\n");
   scanf(" %c", &input1);
  
   printf("Player-2, please enter your choice <p>aper, <r>ock, or <s>cissors:\n");
   scanf(" %c", &input2);

   //input1 redefinition
   if (input1 == 'r' || input1 == 'R') {
      choice1 = ROCK; }
   if (input1 == 'p' || input1 == 'P') {
      choice1 = PAPER; }
   if (input1 == 's' || input1 == 'S') {
      choice1 = SCISSORS; }

   //input2 redefinition
   if (input2 == 'r' || input2 == 'R') {
      choice2 = ROCK; }
   if (input2 == 'p' || input2 == 'P') {
      choice2 = PAPER; }
   if (input2 == 's' || input2 == 'S') {
      choice2 = SCISSORS; }
      
 
   //ROCK = 1, PAPER = 2, SCISSORS = 3
   switch (choice1) {
      case 1: //ROCK
         if (choice2 == 1){
            printf("Draw, nobody wins."); }
         else if(choice2 == 2){
            printf("Player-2 wins! Paper covers rock!"); }
         else {printf("Player-1 wins! Rock breaks scissors!"); }
      break; 
      
      case 2: //PAPER
         if(choice2 == 1){
            printf("Player-1 wins! Paper covers rock!"); }
         else if(choice2 == 2){
            printf("Draw, nobody wins."); }
         else{ printf("Player-2 wins! Scissors cut paper!"); }
      break;
      
      case 3: //SCISSORS
         if(choice2 == 1){
            printf("Player-2 wins! Rock breaks scissors!"); }
         else if(choice2 == 2){
            printf("Player-1 wins! Scissors cut paper!"); }
         else{ printf("Draw, nobody wins."); }
      break;
      }

   return 0;}








