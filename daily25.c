/*
Author: Saema Nazar
Date:	4/24/2019
Purpose:	It should copy the contents of 1 file to another file
Sources	of	Help:	lecture ppt slides
Time	Spent: 1 hour
---------------------
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
 
 Date: 4/24/2019
 Name: Saema Nazar
 */

#include <stdio.h>

void copyFile(FILE *fp1, FILE *fp2);


int main(int argc, char *argv[])
{
   
   FILE *fp1;
   FILE *fp2;
   
   //opening both files + checking if opened correctly
   
   fp1= fopen("in.txt", "r");
      if(fp1 == NULL)
      {
         printf("File did not open successfully.\n");
         return 0;
      }
      
      fp2 = fopen("out.txt", "w");
   if(fp2 == NULL)
   {
         printf("File did not open successfully.\n");
         return 0;
   }
   
   //copy file function
   copyFile(fp1, fp2);
   
   
   
   return 0;  
}
   
   
void copyFile(FILE *fp1, FILE *fp2)
{
   char copyChar;
   int retScanf = fscanf(fp1, "%c", &copyChar);
           
   while(retScanf != EOF)
   {
   printf("%c", copyChar);
   fprintf(fp2, "%c", copyChar);
   
   
   retScanf = fscanf(fp1, "%c", &copyChar);
   }
   fclose(fp1);
   fclose(fp2);
   }




