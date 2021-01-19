/*
Author: Saema Nazar
Date:	3/7/19
Purpose:	write a program to score a game of rock paper scissors. Use functions to obtain player inputs and return an enum type, 
         and also use a function to check the winner. 
Sources	of	Help:	previous daily assignments
Difference: 
1.) functions help to make a program easier to read
2.) you dont have to repeat the same fragments of code if you use a function. This reduces possibility of making 
errors while writing excess code. 
Time	Spent: 2 days
-------------------
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
 
 Date: 3/7/19
 Name: Saema Nazar
 */

   #include <stdio.h>
   
   void clear_keyboard_buffer(void);
   enum choices {ROCK = 1, PAPER, SCISSORS};
   typedef enum choices choice;
   
   choice getChoice(char input);
   void checkWinner(choice, choice);
   
   
   int main(int argc, char *argv[]) {
      
      char input1;
      char input2;
      char choice1;
      char choice2;
      
      printf("Player-1, please enter your choice <p>aper, <r>ock, or <s>cissors:\n");
      scanf(" %c", &input1);
      choice1 = getChoice(input1);
      
      
     printf("Player-2, please enter your choice <p>aper, <r>ock, or <s>cissors:\n");
     scanf(" %c", &input2);
     choice2 = getChoice(input2);
      
     checkWinner(choice1, choice2);
      
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



   choice getChoice(char input){
   while(input != 'r' && input!= 'R' && input != 'p' && input != 'P' && input != 's' && input != 'S') {
      clear_keyboard_buffer();
      printf("I do not understand. Please enter your choice <p>aper, <r>ock, or <s>cissors:\n");
      scanf(" %c", &input);
   }
   
      char choice;
   if (input == 'r' || input == 'R') {
      choice = ROCK; }
   else if (input == 'p' || input == 'P') {
      choice = PAPER; }
   else if (input == 's' || input == 'S') {
      choice = SCISSORS; }
   
       return choice; 
   }

   void checkWinner(choice P1Input, choice P2Input){
      switch (P1Input) {
       case 1: //ROCK
         if (P2Input == 1){
            printf("Draw, nobody wins."); }
         else if(P2Input == 2){
            printf("Player-2 wins! Paper covers rock!"); }
         else {printf("Player-1 wins! Rock breaks scissors!"); }
         break; 
   
      case 2: //PAPER
         if(P2Input == 1){
            printf("Player-1 wins! Paper covers rock!"); }
         else if(P2Input == 2){
            printf("Draw, nobody wins."); }
         else{ printf("Player-2 wins! Scissors cut paper!"); }
          break;
   
      case 3: //SCISSORS
         if(P2Input == 1){
            printf("Player-2 wins! Rock breaks scissors!"); }
         else if(P2Input == 2){
            printf("Player-1 wins! Scissors cut paper!"); }
         else{ printf("Draw, nobody wins."); }
          break;
      }
   }
   

