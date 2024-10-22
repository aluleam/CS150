//
//  main.c
//  Data_types
//
//  Created by Making Aberto on 1/19/23.
// **********************************************************
// Program:    Data_types.c
// Name:       Masumbuko Alulea
// Instr:      Kim Prohaska
// Team:       ____
// Course:     CSC 150
// Date:       01/19/2023
// Description: Use examples to look at how variables work with various data types.
// **********************************************************
//

#include <stdio.h>

int main() {
    //declare variables
    
    int count = 0;
    double amount = 0.0;
    char grade = " ";
    
    //get input
    printf("Enter count: ");
    scanf("%d", &count);
    
    printf("Enter amount: ");
    scanf("%lf",&amount);
    printf("Enter the grade: ");
    scanf(" %c",&grade);
    
    printf("Count = %d\n", count);
    printf("Amount = %.2lf\n", amount);
    printf("Grade = %c\n", grade);
    
  
    return 0;
}
