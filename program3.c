/*
 Program: Length/Weight Conversion Program 
 Author: Saema Nazar
 Date: 4/22/19
 Time spent: 2 days
 Sources of Help: lecture notes etc
 Purpose: The purpose of this program is to
 demonstrate an acceptable comment section
 for my program. My code does not actually
 do anything. --> ask user what they would like to convert and convert their values into their desired units.

Computing	I	-- COMP.1010	Honor	Statement
The	practice	of	good	ethical	behavior	is	essential	for	maintaining	
good	order	in	the	classroom,	providing	an	enriching	learning	
experience	for	students,	and	as	training	as	a	practicing	computing	
professional	upon	graduation.		This	practice	is	manifested	in	the	
University's	Academic	Integrity	policy.	Students	are	expected	to	
strictly	avoid	academic	dishonesty	and	adhere	to	the	Academic	
Integrity	policy	as	outlined	in	the course	catalog.		Violations	will	
be	dealt	with	as	outlined	therein.
All	programming	assignments	in	this	class	are	to	be	done	by	the	
student	alone.		No	outside	help	is	permitted	except	the	instructor	and	
approved	tutors.
I	certify	that	the	work	submitted with	this	assignment	is	mine	and	was	
generated	in	a	manner	consistent	with	this	document,	the	course	
academic	policy	on	the	course	website	on	Blackboard,	and	the	UMass	
Lowell	academic	code.
Date: 4/22/19
Name: Saema Nazar
***********************************************/

#include <stdio.h>
 
 //LENGTH Functions
 void convert_lengths(int *m, double *cm, int *ft, double *inch);  // functions have pointers as parameters to allow for pass by reference
 
 void length_to_metric(int *m, double *cm, int *ft, double *inch);
 void read_length_us(int *ft, double *inch);
 void convert_length_to_metric(int ft, double inch, int *m, double *cm);                //original: *m,*cm, ft,inch   
 void output_length_metric(int m, double cm, int ft, double inch);              
 
 void length_to_US(int *ft, double *inch, int *m, double *cm);
 void read_length_metric(int *m, double *cm);
 void convert_length_to_us(int m, double cm, int *ft, double *inch);                    //original: *ft, *inch, m, cm
 void output_length_us(int *ft, double *inch, int *m, double *cm);
 
 /////////////////////////////////////////////////////////////////////
 
 //WEIGHT Functions
 void convert_weights(int *kg, double *g, int *lbs, double *oz);
 
 void weight_to_metric(int *kg, double *g, int *lbs, double *oz);
 void read_weight_us(int *lbs, double *oz);
 void convert_weight_to_metric(int lbs, double oz, int *kg, double *g);                 //original: *kg,*g,lbs,oz
 void output_weight_metric(int *kg, double *g, int *lbs, double *oz);
 
 
 void weight_to_US(int *kg, double *g, int *lbs, double *oz);
 void read_weight_metric(int *kg, double *g);
 void convert_weight_to_us(int kg, double g, int *lbs, double *oz);                         //original: kg, g, *lbs, *oz
 void output_weight_us(int *kg, double *g, int *lbs, double *oz);
 
 
 int main(int argc, char *argv[])
 {
   int meters = 0;
   double cm = 0;
   int feet = 0;
   double inches = 0.0;
   
   int pounds=0;
   double ounces=0;
   int kilograms=0;
   double grams=0;
  
   int userNum = -1;   //this value will be obtained from user to determine which function will be called.
                        //initialized to non-zero val to allow while loop to iterate at least once
   while(userNum != 0)
   {
      printf("1. convert lengths\n2. convert weights\n0. Exit\nPlease choose from (1, 2, 0):\n");
      scanf("%d", &userNum);
    
   if(userNum == 1)
   {
      convert_lengths(&meters, &cm, &feet, &inches);   //arguments of these functions are the addresses of the unit variables
   }
   if(userNum == 2)
   {
      convert_weights(&kilograms, &grams, &pounds, &ounces);
   }
   }
   printf("User chose to exit.\n");
   
   return 0;
 }
 
 //LENGTHS
  void convert_lengths(int *m, double *cm, int *ft, double *inch)    //function asks user if they want to convert to metric or US
 {
    int userChoice = -1;  //initialize w/ non-zero value so the while-loop iterates at least once
    while(userChoice != 0)
   { 
    printf("1. convert lengths to metric\n2. Length to US\n0. Return to Main Menu\n");
    scanf("%d", &userChoice);
    
   if(userChoice == 1)
    {
       length_to_metric(m, cm, ft, inch);    //unit variables are passed in, which contain addresses
    }
    if(userChoice == 2)
   {
      length_to_US(ft, inch, m, cm);
   }
   }
   if(userChoice == 0){
      printf("User chose to go main menu.\n\n");
      return;
   }    
 }
 
 //Length to Metric
 void length_to_metric(int *m, double *cm, int *ft, double *inch) //function to call read, convert, and ouput functions for US to metric 
 {                                                                    //      length conversion
     int feet;
     double inches;
     int meter;
     double centi;
     
    printf("Enter feet and inches (separated by a space):\n\n");
    
    read_length_us(ft, inch);   
    feet = *ft;
    inches = *inch;

    convert_length_to_metric(m, cm, feet, inches);   
    meter = *m;
    centi = *cm;

    output_length_metric(meter, centi, feet, inches);
 }
 
 void read_length_us(int *ft, double *inch)        //function that reads and assigns user's input values for US length
 {
     int feet;
     double in;
     scanf("%d %lf", &feet, &in);
    *ft = feet;
    *inch = in;
 }
 
 void convert_length_to_metric(int *m, double *cm, int ft, double inch)    //converts US length to metric length
 {
    double inchesToCm = (.3048/12)*100;      //ratio for inch to cm conversion
    double totalInch;
    double totalCm;
      
   totalInch = (ft * 12) + inch;       //convert given length (foot and inches) to all inches
   totalCm = totalInch * inchesToCm;      //convert inches to cm
   *m = totalCm / 100;                    //convert cm to meter
   if(totalCm >= 100){                    //remainder from meter division assigned as centimeters
      *cm = totalCm - (100* *m);
   }
 }
 
 void output_length_metric(int m, double cm, int ft, double inch)
 {
    printf("%d feet and %.4lf inches converted to %d meters and %.4lf centimeters.\n", ft, inch, m, cm);
 }
 
 
 ///LENGTH to US 
 void length_to_US(int *ft, double *inch, int *m, double *cm)
 {
    int meters;
    double centi;
    
    printf("Enter meters and centimeters (separated by a space):\n\n");
    read_length_metric(m, cm);
    meters = *m;
    centi = *cm;
    
    convert_length_to_us(ft, inch, meters, centi);
    output_length_us(ft, inch, m, cm);
 }
 
 void read_length_metric(int *m, double *cm)
 {
   int meters;
   double centimeters;
   scanf("%d %lf", &meters, &centimeters);
   *m = meters;
   *cm = centimeters;
 }
 
 void convert_length_to_us(int *ft, double *inch, int m, double cm)
 {
    double totalInch;
    double totalCm;
    double cmToInch = (12/.3048)/100;     //ratio for cm to inch conversion
    
    totalCm = (m * 100) + cm;
    totalInch = totalCm * cmToInch;
    
    *ft = totalInch /12;
    if(totalInch >= 12)
    {
       *inch = totalInch - (12* *ft);
    }

 }
 
  void output_length_us(int *ft, double *inch, int *m, double *cm)
  {
     printf("%d meters and %.4lf centimeters converted to %d feet and %.4lf inches.\n\n", *m, *cm, *ft, *inch);
  }
 
 
 //WEIGHTS
 void convert_weights(int *kg, double *g, int *lbs, double *oz)   //function asks user if they want to convert to metric/US
 {
    int userChoice = -1;         
    while(userChoice != 0)
   { 
    printf("1. convert weights from poundes/ounces to kilograms/grams\n2. convert weights from kilograms/grams to pounds/ounces\n0. Return to Main Menu\n");
    scanf("%d", &userChoice);
    
    if(userChoice == 1)
    {
       weight_to_metric(kg, g, lbs, oz);
    }
   if(userChoice == 2)
   {
     weight_to_US(kg, g, lbs, oz);
   }
 }
   if(userChoice == 0)
   {
      printf("User chose to go main menu.\n\n");
      return;
   }    
 }
 
 //Weight to Metric
void weight_to_metric(int *kg, double *g, int *lbs, double *oz)
{   
    int pounds;
    double ounces;
    
   printf("Enter pounds and ounces (separated by a space):\n");
      read_weight_us(lbs, oz);
      pounds = *lbs;
      ounces = *oz;
      
      convert_weight_to_metric(kg, g, pounds, ounces);      
      output_weight_metric(kg, g, lbs, oz);
}
 void read_weight_us(int *lbs, double *oz)
 {
      int pounds;
      double ounces;
      scanf("%d %lf", &pounds, &ounces);
      *lbs = pounds;
      *oz = ounces;
 }

 void convert_weight_to_metric(int *kg, double *g, int lbs, double oz)
 {
    double totalGram = 0;
    double totalOunce = 0;
    double ounceToGram = ((1/2.2046)/16)*1000;  //ratio to convert onces to grams
  
   totalOunce = (lbs * 16) + oz;
   totalGram = totalOunce * ounceToGram;
   
   *kg = totalGram / 1000;
   if(totalGram >= 1000)
   {
    *g = totalGram - (1000* *kg);  
   }
 }
 
 void output_weight_metric(int *kg, double *g, int *lbs, double *oz)
 {
  printf("%d pounds and %.4lf ounces converted to %d kilograms and %.4lf grams.\n", *lbs, *oz, *kg, *g);  
 }

//Weight to US 
void weight_to_US(int *kg, double *g, int *lbs, double *oz)
{
    int kilo;
    double grams;
    
   printf("Enter kilograms and grams (separated by a space):\n");
   read_weight_metric(kg, g);
   kilo = *kg;
   grams = *g;
   
   convert_weight_to_us(kilo, grams, lbs, oz);   
   output_weight_us(kg, g, lbs, oz);
}
 void read_weight_metric(int *kg, double *g)
 {
    int kilo;
    double grams;
    scanf("%d %lf", &kilo, &grams);
    *kg = kilo;
    *g = grams;
 }
 void convert_weight_to_us(int kg, double g, int *lbs, double *oz)
 {
    double totalGram = 0;
    double totalOunce = 0;
    double gramToOunce = (2.2046*16)/1000;      //ratio to convert grams to ounces
    
    totalGram = (kg * 1000) + g;
    totalOunce = totalGram * gramToOunce;
    
    *lbs = totalOunce / 16;
    if(totalOunce >= 16)
    {
     *oz = totalOunce - (16* *lbs);  
    }
 }

 void output_weight_us(int *kg, double *g, int *lbs, double *oz)
 {
    printf("%d kilograms and %.4lf grams converted to %d pounds and %.4lf ounces.\n", *kg, *g, *lbs, *oz);
    
 }
 
 
 

