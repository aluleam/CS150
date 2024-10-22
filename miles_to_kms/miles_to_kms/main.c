// program: miles_to_kms.c
// Name:         Masumbuko Alulea
// Team:
// Course:       CSC 150
// Instructor:   Kim Prohaska
// Date:         Jan/17/ 2023
// Description: This program will ask the user to enter the number of miles, convert the number to kilometers, and display the result on the screen.
// **********************************************************

//preprocessor directives
#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(){
    // declare variables
    
    double miles = 0.0,
           kms = 0.0; //kilometers
    //Get data
    printf("Enter # of miles: ");
    scanf("%lf", &miles);
    
    //calculate kilometers
    kms= miles*KMS_PER_MILE;
    
    // Display answer
    
    printf("%.2lf miles = %.2lf kilometers\n", miles, kms);
    
    
    
    return 0;
}
