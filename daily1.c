/*
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
 
 Date: January 29, 2019
 Name: Saema Nazar
 */

/***********************************************
 Author: <Saema Nazar>
 Date: <January, 29 2019>
 Purpose: to become familiar with zyLab to finish programming assignments
 Sources of Help: <I did not use any outside sources in the completion of this assignment.>
 
 Time Spent: <around 10 to 15 minutes was spent on this assignment>
 
 ***********************************************/

#include <stdio.h>

int main(int argc, char* argv[]) {
    int userNum;
    int userNumSquared;
    
    scanf("%d", &userNum);
    
    userNumSquared = userNum * userNum;   // Bug here; fix it when instructed
    
    printf("%d\n", userNumSquared);         // Output formatting issue here; fix it when instructed
    
    return 0;
}
