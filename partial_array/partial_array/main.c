// **********************************************************
// Program:     partial_arrays.c
// Date:        Mar 07, 2023
// Description: This program does more work w/arrays.
// **********************************************************

#include <stdio.h>    //use printf() and scanf()
#include <stdbool.h>  //use of bool variable
#define MAX_SIZE 15

int main(void)
{
    double list [ MAX_SIZE ]  = {0};
    int array_size = 0,
        i = 0,
        position = 0;
    double search_val = 0.0,
           sum = 0.0,
           avg = 0.0;
    bool found = false;

    // User will fill array with 1 to MAX values

    printf("array_size = %d\n", array_size);

    //********************************************************************
    //Print array contents


    //********************************************************************
    //Average array contents
     if (array_size > 0)
        {

            printf("Ave = %.2f\n", avg);

        }


    //********************************************************************
     //Find a value in the array
    printf("Enter value to search for: ");
    scanf("%lf", &search_val);


    while ( 0 ) //Search until found or reach end of array
    {


    }

    if (found)
        printf("Search value of %.2lf was found at index %d.\n", search_val, position );
    else
        printf("Search value of %.2lf was not found.\n", search_val);


    return 0;

}
