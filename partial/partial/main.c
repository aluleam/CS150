// **********************************************************
// Program:     partial_arrays.c
// Date:        Mar 07, 2023
// Description: This program does more work w/arrays.
// **********************************************************

#include <stdio.h>    //use printf() and scanf()
#include <stdbool.h>
#include <math.h>//use of bool variable
#define MAX_SIZE 15

int main(void)
{
    double list [ MAX_SIZE ]  = {0};
    int array_size = 0,
        i = 0,
    position = 0,
    user_entry = 0.0;
    double search_val = 0.0,
           sum = 0.0,
           avg = 0.0;
    bool found = false;

    // User will fill array with 1 to MAX values
    printf("Enter a value (-99 to stop): ");
    scanf("%d",&user_entry);
    
    while(array_size< MAX_SIZE && user_entry !=-99)
    {
        list[i] = user_entry;
        array_size++;
        
        if(array_size < MAX_SIZE)
            
        printf("Enter a list[%d]value (-99 to stop): ",i);
        scanf("%d",&user_entry);
    }
    

    printf("array_size = %d\n", array_size);

    //********************************************************************
    //Print array contents
    for( i = 0; i< array_size;i++)
    {
        printf("List[%d] = %.2lf\n",i,list[i]);
    }

    //********************************************************************
    //Average array contents
     if (array_size > 0)
        {
            for(i = 0; i<array_size;i++)
                sum+= list[i];
            avg = sum/array_size;
            printf("Ave = %.2f\n", avg);

        }
    


    //********************************************************************
     //Find a value in the array
    printf("Enter value to search for: ");
    scanf("%lf", &search_val);
    
    position = -1;
    i = 0;
    found = false;


    while ( i < array_size && !found ) //Search until found or reach end of array
    {
        if(fabs(list[i] = search_val)<0.0001)
        {
            position = i;
            found = true;
        }
        i++;

    }

    if (found)
        printf("Search value of %.2lf was found at index %d.\n", search_val, position );
    else
        printf("Search value of %.2lf was not found.\n", search_val);


    return 0;

}
