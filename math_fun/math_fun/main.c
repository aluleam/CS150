//
//  main.c
//  math_fun
//
//  Created by Making Aberto on 1/24/23.
//// **********************************************************
// Program:    math_fun.c
// Name:       Masumbuko Alulea
// Instr:      Kim Prohaska
// Team:
// Course:     CSC 150
// Date:       01/24/23
// Description:

#include <stdio.h> // pull in printf and scanf
#include <math.h>
#include <stdlib.h> //rand and srand
#include <time.h> // time function

int main(){
    
    int x = 0,
        y = 0,
        sum = 0,
        diff = 0,
        prod = 0,
        rem = 0;
    double quot = 0.0;
    
    srand(time(0));
    
    //Assign data
    x = rand() % 11; //between 0 and 10
    y = rand() % 10 + 1 ; // A number between 1 to 10
    
    sum = x + y;
    diff = x - y;
    prod = x * y;
    rem = x % y;
    quot = (double)x / y;
    
    printf("%d + %d = %d\n",x,y,sum);
    printf("%d - %d = %d\n",x,y,diff);
    printf("%d * %d = %d\n",x,y,prod);
    printf("%d %% %d = %d\n",x,y,rem);
    printf("%d / %d = %.2lf\n\n",x,y,quot);
    
    
    return 0;
}
