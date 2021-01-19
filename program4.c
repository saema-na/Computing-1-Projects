/*
Author: Saema Nazar
Date:	4/30/19
Purpose:	read a file containing 10 quiz scores for students in a class. Print the information from that file into 
         an output file containing student names, their 10 quiz scores, and score averages in a table format
Sources	of	Help: class notes, lecture PPT's
Time	Spent: 5 days
----------------------------------
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
 
 Date: 4/30/19
 Name: Saema Nazar
 */

#include <stdio.h>
#include <ctype.h>      //for isalpha, isdigit() etc.

void getName(FILE *copying, FILE *output);            //both functions take file pointers to the
void getScores(FILE *copying, FILE *output);          //original file and the output file

int main(int argc, char *argv[]){
   FILE *copying;
   FILE *output;
   char retScanf;
   int readingChar;
   
   copying = fopen("quiz.txt", "r");
   if(copying == NULL)
   {
      printf("Can't open copying file.\n");
   }
   output = fopen("average.txt", "w");
   if(output == NULL)
   {
      printf("Can't open output file.\n");
   }

   retScanf = fscanf(copying, "%d", &readingChar);

   while(retScanf != EOF)               //continue executing getName and getScores until end of file
   {
      getName(copying, output);        //pass in 2 file pointers, original file and output file, as arguments
      getScores(copying, output);
      retScanf = fscanf(copying, "%d", &readingChar); 
   }

   fclose(copying);
   fclose(output);
   
   return 0;
}

///function to copy first name/last name into an array & create a new array with [lastname, firstname] format
void getName(FILE *copying, FILE *output)
{
   char first[10];      //strings for first name, last name, and [lastname,firstname]
   char last[10];
   char lastFirst[20];
   char copyingChar;    //char that is being read/copied
   int i = 0;           //counter variables
   int j = 0;
   int k = 0;
   int x = 0;

   fscanf(copying, "%c", &copyingChar);   
  
//assigning first name to a string 
   while(isalpha(copyingChar))
   {                                         //keep assigning a character to first[] until there is a space or number        
    first[i] = copyingChar;
    fscanf(copying, "%c", &copyingChar);
    i++; 
   }
   first[i] = '\0';                          //assign NULL character to index position after the last letter

   fscanf(copying, "%c", &copyingChar);

//assigning last name to a string
   while(isalpha(copyingChar))
   {                                         
      last[j] = copyingChar;
      fscanf(copying, "%c", &copyingChar);
      j++;
   }
   last[j] = '\0';
   
//appending first name string & last name string to 1 string: lastfirst[] 

//appending last name
   while(last[k] != '\0' && i<20-1)
   {
      lastFirst[k] = last[k];
      k++;
   }
   lastFirst[k] = ',';                    //assigning comma and space to string after last name is appended
   k++;
   lastFirst[k] = ' ';
   k++;

//appending first name
   while(first[x] != '\0' && x<20-1)
   {
    lastFirst[k] = first[x];
    x++;
    k++;
   }
   lastFirst[k] = '\0';
   fprintf(output, "%-20s", lastFirst);            //printing full name into output file
}


//function to get quiz scores from original file by comparing return value of fscanf and print them to output file
void getScores(FILE *copying, FILE *output)
{
   int i = 0;   
   double average;
   double sum = 0.00;
   int currScore = 0;      //score that is being read/copied
   int retScanf;
   int numScores = 0;
   int noScore = 0;        //printed if there is no score found
   
   retScanf = fscanf(copying, "%d", &currScore);
    
//if scanf returns an integer value from the original file, the following while loop: 
//prints the value into the output file
//adds integer value to compile a sum of all grades found
//keeps track of the # of scores found
   while(retScanf == 1)
   {               
      fprintf(output, "%4d", currScore);     
      sum = sum + currScore;
      numScores = numScores + 1;
      retScanf = fscanf(copying, "%d", &currScore);
   }
   
   if(numScores < 10)
   {                                   //if # of scores <10, print 0 until there are 10 scores total
    for(i=0; i<(10 - numScores); ++i)
    {
     fprintf(output, "%4d", noScore);     
    }
   }
   
   average = sum/10;                      //calculating & printing average
   fprintf(output, "%10.2lf\n", average);   

}







