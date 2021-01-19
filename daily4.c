/*
Author:	Saema Nazar
Date:	2/5/19
Purpose:	to print the exact words given in the Daily 04 instructions using placeholders and the printf function
Sources	of	Help:	past zybook notes
Time	Spent: 25 mins

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
    //first line
    printf("%d is an integer and should be printed using %%d.\n\n", 57);
    
    //second line
    printf("The character '%c' can be printed using %%c.\n\n", '%');
    
    //third line
    printf("Floating point numbers use %%f. %f is an example.\n\n", 3.14159);
    
    //fourth line
    printf("Using placeholder ");
    printf("%%%.1ff ", 5.2);
    printf("can display the value of %c number to an accuracy ", 'a');
    printf("%s\n", "of two decimal places.");
    
    return 0;
 }
 
 
 