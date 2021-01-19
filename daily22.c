/*
Author: Saema Nazar
Date:	4/7/18
Purpose:	read numbers from a file and output information about the #'s contained in that file
Sources	of	Help:	lecture notes
Time	Spent: 2 hours
------------------------------
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
 
 Date: 4/7/18
 Name: Saema Nazar
 */
 
 #include <stdio.h>
 
 int main(int argc, char *argv[])
 {
    double numVals = 0;
    int sum = 0;
    int smallest;
    int largest;
    int number = 0;
    
    FILE *fp;
    fp = fopen("numbers.txt", "r");
    
    //   check if file opens successfully
    if(fp ==NULL)
    {
       printf("Can't open file\n");
    }
    else
    { 
       printf("Opened successfully\n");
    }
    
    //   reading #'s from file
    int retFscanf = fscanf(fp, "%d", &number);
    largest = number;
    smallest = number;
    
    while(retFscanf != EOF)
    {
       printf("%d\n", number);
       sum = sum + number;
       
       if(number > largest)      //check if number is larger/smaller than previous ones
       {
          largest = number;
       }
       if(number < smallest)
       {
          smallest = number;
       }
       
       retFscanf= fscanf(fp, "%d", &number);
       ++numVals;    //increment counter for number of integers
    }
    
    printf("There were %.0lf numbers in the file.\n", numVals);
    printf("The sum of all the integers in the file is %d.\n", sum);
    printf("The smallest integer in the file is %d\n", smallest);
    printf("The largest integer in the file is %d.\n", largest);
    printf("The average of all the numbers is %lf.\n", sum/numVals);
    
    fclose(fp);
    
    return 0;  
 }
 
 
 
 
 
 
 
 
 
 
 
 
 