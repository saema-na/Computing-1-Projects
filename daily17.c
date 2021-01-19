/*
Author:	Saema Nazar
Date:	3/25/19
Purpose:	swap the values of num1 and num2 to make it so that num1 always has the greater value.
Sources	of	Help: lecture notes
Explanation for your	function: the function swapIfNeeded() works by taking in the memory addresses of num1 and num2. Within the 
                              function definition, the values of num1 and num2 are changed directly through their addresses. 
                              Changes to num1 and num2 inside the function therefore reflect into the main function as well. 
Time	Spent: 45 minutes
----------------
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
 
 Date: 3/25/19
 Name: Saema Nazar
 */


#include <stdio.h>
//function declaration/prototype here
void swapIfNeeded(int *num1, int *num2);


int main(int argc, char * argv[]) {
    int num1, num2;
    
    printf("Please enter two integers (separated by ,):\n");
    scanf("%d,%d", &num1, &num2);  //enter two integers separated by a comma (,)
    
    printf("num1 stores: %d\n", num1);
    printf("num2 stores: %d\n", num2);
    
    
    swapIfNeeded(&num1, &num2);
    
    /*make a function call to make sure the followings are true after we call the function
     (1) variable num1 stores the larger value after the function is called
     (2) variable num2 stores the smaller value after the function is called
     */
    
    
    
    printf("\nAfter calling the function\n");
    printf("num1 stores the bigger one: %d\n", num1);
    printf("num2 stores the smaller one: %d\n", num2);
    
    return 0;
}

//function definition here
void swapIfNeeded(int *num1, int *num2){
   if(*num2 > *num1){
   int temp = 0;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
   }
}
   
   

