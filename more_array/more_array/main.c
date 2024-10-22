// **********************************************************
// Program:     more_arrays.c
// Date:        Mar 02, 2023
// Description: This program does more work w/arrays.
// **********************************************************

#include <stdio.h>    //use printf() and scanf()
#include <time.h>     //use time()
#include <stdlib.h>   //use rand() and srand()
#include <stdbool.h>  //use of bool variable
#define MAX_SIZE 15

int main(void)
{
    int nums [ MAX_SIZE ]  = {0};
    int array_size = 0,
        search_val = 0,
        i = 0,
        position = 0,
        sum = 0;
    double avg = 0.0;
    bool found = false;

    // Fill array with random # of random #'s
    srand(time(0));
    //Determine number of values to generate
    array_size = rand()% MAX_SIZE+1;
    
    //Loop to fill array with numbers
    for(i = 0; i< array_size; i++)
    {
        nums[i] = rand()% 100+1;
    }
    
        
    printf("array_size = %d\n", array_size);


    //********************************************************************
    //Print array contents


    //********************************************************************
    for( i = 0; i< MAX_SIZE; i++){
        printf("nums of [%d] = %d\n",i,nums[i]);
    }
    //Average array contents
     if (array_size > 0)
        {
            for(i = 0; i< array_size; i++)
            {
                sum+= nums[i];
            }
            
            avg = (double)sum/array_size;
            printf("Ave = %.2f\n", avg);

        }


    //********************************************************************
     //Find a value in the array
    printf("Enter value to search for: ");
    scanf("%d", &search_val);
    

    found = false;
    i = 0;
    position = -1;

    while ( i< array_size && !found ) //Search until found or reach end of array
    {
        if(search_val == nums[i])
        {
            position = i;
            found = true;
        }
        i++;
    }

    if (found)
        printf("Search value of %d was found at index %d.\n", search_val, position );
    else
        printf("Search value of %d was not found.\n", search_val);


    return 0;

}
