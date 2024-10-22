//**********************************************************************
// Program:     swap.c
// Written By:  CSC 150 Class
// Team:
// Course:      CSC150
// Instructor:  Kim Prohaska
// Date:        Apr 2023
//
// Description: This program will use pointers to swap
//
//*********************************************************************
#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int a = 5, b = 6;

    printf("Before function call: a = %d   b = %d\n", a, b);

    swap(&a, &b);

    printf("After function call: a = %d   b = %d\n", a, b);

    return 0;
}

//*********************************************************************
//Function: swap
//Data in: Two integer pointers
//Data returned: None
//Desc: swap contents of the two integers
//*********************************************************************
void swap(int *ptr_a, int *ptr_b)
{
    int temp;

    printf("In function 'swap' before swap: a = %d   b = %d\n", *ptr_a, *ptr_b);

    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    printf("In function 'swap' after swap: a = %d   b = %d\n", *ptr_a, *ptr_b);

    return;
}

