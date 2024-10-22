//**********************************************************************
// Program:     pointer_intro.c
// Written By:  CSC 150 Class
// Team:
// Course:      CSC150
// Instructor:  Kim Prohaska
// Date:        April 2023
//
// Description:
// This program will introduce pointers
//
//*********************************************************************
#include <stdio.h>

int main (void)
{
     int a = 7;
     double b = 13.2;
     int x = 21;
    
     int *ptr_a;
     double *ptr_b;
    
    
    ptr_a = &a;
    ptr_b = &b;
    
   // *ptr_a = 495;
    //*ptr_b = 93.7;
    //ptr_a =  1876947404;
    //*ptr_a = 99;
    
    
    printf("Enter value for a: ");
   // scanf("%d",ptr_a);
    scanf("%d",(void)1876947416);
    

    printf("a =     %10d\t", a);
    printf("address of a (decimal %%d) =  %10d   (hex %%p) = %p\n", &a,&a);

    printf("b =     %10.2f\t", b);
    printf("address of b (decimal %%d) =  %10d   (hex %%p) = %p\n",&b, &b);

    printf("x =     %10d\t", x );
    printf("address of x (decimal %%d) =  %10d   (hex %%p) = %p\n\n",&x, &x);

    printf("ptr_a = %10d\t", ptr_a);
    printf("address of ptr_a (decimal %%d) = %d   (hex %%p) = %p\n",&ptr_a, &ptr_a );

    printf("ptr_b = %10d\t", ptr_b );
    printf("address of ptr_b (decimal %%d) = %d   (hex %%p) = %p\n\n",&ptr_b, &ptr_b );


    printf("contents of address where ptr_a points = %d\n",*ptr_a);
    printf("contents of address where ptr_b points = %.2f\n",*ptr_b);

   printf("\n\n");

   return 0;
}
