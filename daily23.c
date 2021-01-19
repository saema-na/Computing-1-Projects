/*
Author: Saema Nazar
Date:	4/14/19
Purpose:	adding additional stubs/drivers to code from daily 21 which will allow user to convert lengths/weights 
         in different ways
Sources	of	Help:	nothing
Time	Spent: 1 hr
-----------------------------------------
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
 
 Date: 4/14/19
 Name: Saema Nazar
 */
 
 
 #include <stdio.h>
 
 void convert_lengths(void);
 void convert_weights(void);
 
 void length_to_metric(void);
 void length_to_US(void);
 
 void weight_to_metric(void);
 void weight_to_US(void);
 
 
 int main(int argc, char *argv[])
 {
   int userNum;    //value will be obtained from user. Tested in while loop & used to determine which function will be called.
    
    
   while(userNum != 0)
   {
      printf("1. convert lengths\n2. convert weights\n0. Exit\nPlease choose from (1, 2, 0):\n");
      scanf("%d", &userNum);
    
   if(userNum == 1)
   {
      convert_lengths();   
   }
    
   if(userNum == 2)
   {
      convert_weights();
   }
   }
   
   printf("User chose to exit.\n");
   
   return 0;
 
 }
 
 void convert_lengths(void)
 {
    int userChoice = -1;   //initializing variable to a non-zero value so the while-loop iterates at least once
    printf("The user wants to convert_lengths.\n\n");
   while(userChoice != 0)
   { 
    printf("1. convert lengths to metric\n2. convert lengths to US\n0. Return to Main Menu\n");
    scanf("%d", &userChoice);
    
    if(userChoice == 1)
    {
       length_to_metric();
    }
    
   if(userChoice == 2)
   {
      length_to_US();
   }
   
   }
   if(userChoice == 0){
      printf("User chose to go main menu.\n\n");
      return;
   }    
 }
 
 void convert_weights(void)
 {
    int userChoice = -1;         
    printf("The user wants to convert_weights.\n\n");
    
    while(userChoice != 0)
   { 
    printf("1. convert weights from poundes/ounces to kilograms/grams\n2. convert weights from kilograms/grams to pounds/ounces\n0. Return to Main Menu\n");
    scanf("%d", &userChoice);
    
    if(userChoice == 1)
    {
       weight_to_metric();
    }
    
   if(userChoice == 2)
   {
      weight_to_US();
   }

 }
   if(userChoice == 0)
   {
      printf("User chose to go main menu.\n\n");
      return;
   }    
 }
 
 //conversion functions
 void length_to_metric(void)
 {
    printf("The user wants to convert length_to_metric.\n\n");   
 }
 
 void length_to_US(void)
 {
    printf("The user wants to convert length_to_us.\n\n");
 }
 
 void weight_to_metric(void)
 {
    printf("The user wants to convert weight_to_metric.\n\n");
 }
 
 void weight_to_US(void)
 {
    printf("The user wants to convert weight_to_us.\n\n");
 }
 
 
 