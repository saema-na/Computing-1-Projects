/*
Author: Saema Nazar
Date: 2/19/19
Purpose:	get a user character and a number then output a line with that character
Sources	of	Help: lecture notes
Time	Spent: 3 days
----------------------
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
 
 Date: 2/19/19
 Name: Saema Nazar
 */

#include <stdio.h>
void clear_keyboard_buffer(void);
void draw_line(int numChar, char userChar);
int main()
//void draw_line(int numChar, char userChar);
{
int i = 0;
char userChar;
int numChar;

   printf("Please enter the character you want to draw:\n");
   scanf(" %c", &userChar);
  
   printf("Please enter the number of characters you want in your line:\n");
   scanf("%d", &numChar);
   
   while(numChar < 1 || numChar >79) {
      clear_keyboard_buffer();
      printf("I'm sorry, that number is unrecoginized or out of range, try [1-79]:\n");
       scanf("%d", &numChar); 
       }
   draw_line(numChar, userChar);
   printf("\n");
   
 return 0;  


}
 void draw_line(int numChar, char userChar) {
   int i = 0;
   for(i = 0; i < numChar && i < 80; i++) {
      printf("%c", userChar);
   }
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
   
