//*********************************************************
// Program: math_fun_to_format.c
// Name:    ___
// Course:  CSC150
// Date:   Feb 2023
// Description: This program will demonstrate some coding
// and formatting techniques using basic math.
//
//*********************************************************

//preprocessor directives
#include <stdio.h>  //pull in printf & scanf

int main(void)
{
    //Declare variables
    int x = 0,
        y = 0,
        sum = 0,
        diff = 0,   //difference
        prod = 0,   //product
        rem = 0;    //remainder
    double quot = 0.0; //quotient

    //Get or assign data values
    printf("Enter integer for x: ");
    scanf("%d", &x);

    printf("Enter integer for y: ");
    scanf("%d", &y);


    //Calculate/process
    sum = x + y;
    diff = x - y;
    prod = x * y;
    quot = (double)x / y;  //integer division? How to fix?
    rem = x % y;

    //Display results
    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    printf("%d + %d = %d\n", x, y, sum);
    printf("%d - %d = %d\n", x, y, diff);
    printf("%d * %d = %d\n", x, y, prod);
    printf("%d / %d = %.2lf\n", x, y, quot);
    printf("%d %% %d = %d\n", x, y, rem);


    printf("\n\n\n"); // blank lines

    printf("  Sum\t Diff\t Prod\t Quot\t  Rem\n\n");

    printf(" %5d  %5d  %5d  %5d     %5d\n", x,x,x,x,x);

    printf(" +%4d  -%4d  *%4d  /%4d    %% %4d\n", y,y,y,y,y);

    printf("-----\t-----\t-----\t-----\t-----\n");
    printf("%5d   %5d   %5d   %5.2lf   %5d\n", sum,diff,prod,quot,rem);
    

    return (0);
}
