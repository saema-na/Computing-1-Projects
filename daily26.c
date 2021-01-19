/*
Author:	Saema Nazar
Date:	4/25/19
Purpose:	obtain a date from the user and create a function to output the previous day's date.
Sources	of	Help: nothing
Time	Spent: 30 minutes
--------------
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
 
 Date: 4/25/19
 Name: Saema Nazar
 */

#include <stdio.h>

const int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30,
                              31, 30, 31};

typedef struct date{
   int month;
   int day;
   int year;
}Date;

void getYesterdayDate(Date today);

int main(int argc, char *argv[])
{
   Date today;
   
   today.year = 2019;
//   yesterday.year = 2019;
   
   printf("Please enter a month (1-12):\n");
   scanf("%d", &today.month);
   
   printf("Please enter a valid day in the month:\n");
   scanf("%d", &today.day);
    
   printf("Today is: %d/%d/%d\n", today.month, today.day, today.year);
   
   getYesterdayDate(today);
//   printf("Yesterday is: %d/%d/%d\n", yesterday.month, yesterday.day, yesterday.year);


   return 0;
}

void getYesterdayDate(Date today)
{
 Date yesterday;
 yesterday.year = 2019;
   
   if(today.day == 1 && today.month ==1)
   {
      yesterday.month = 12;
      yesterday.day = daysInMonth[11];
      yesterday.year = 2018;
   }
   else if(today.day == 1)
   {
      yesterday.month = today.month - 1;
      yesterday.day = daysInMonth[yesterday.month-1];  
   }
   
   else
   {
      yesterday.month = today.month;
      yesterday.day = today.day - 1;
   }
   printf("Yesterday is: %d/%d/%d\n", yesterday.month, yesterday.day, yesterday.year);
}




