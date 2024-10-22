//*********************************************************
// Program: double_fun_to_format.c
// Name:    Masumbuko Alulea
// Course:  CSC150
// Date:   Feb 2023
// Description: This program will demonstrate
// formatting techniques using double variables.
//
//*********************************************************

//preprocessor directives
#include <stdio.h>  //pull in printf & scanf
#include <stdlib.h> // rand & srand
#include <time.h> // for time

int main(void)
{
    //Declare variables
    
    double a = 0.0,
    b = 0.0,
    c = 0.0,
    d = 0.0;
    
    srand(time(0));
    //Put random #'s into a & b
    a =  rand()+ rand()* .00001;
    b = rand() + rand()* .00001;
    c = rand() % 100 + rand()* .00001;
    d = rand() + rand()* .00001;
    
    //Display results
    printf("Not-lined-up\n");
    printf("-----------\n");
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("c = %lf\n", c);
    printf("d = %lf\n\n", d);
    
    printf("Line-em-up\n");
    printf("-----------\n");
    printf("a = %9.2lf\n", a);
    printf("b = %9.2lf\n", b);
    printf("c = %9.2lf\n", c);
    printf("d = %9.2lf\n\n", d);
    
    printf("Line-em-up\n");
    printf("-----------\n");
    printf(" Some numbers:  %9.2lf and %9.2lf\n", a,c);
    printf(" More numberes: %9.2lf   %9.2lf\n", b,d);
    
    
    return (0);
}
