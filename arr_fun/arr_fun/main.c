#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_SIZE 100

//function prototypes
int fill_array(double* list);
void display_array(double* list, int size);
int linear_search(double list[], int array_size, double value);
int main (void)
{
    int size = 0,  //actual number of elements in array
        found_index = -1;
    double values[MAX_SIZE];
    double search_value = 0.0;
    char answer;

    // Call a function to display the array contents (no values assigned yet use max size)
    display_array(values, MAX_SIZE);

    // Call a function to fill the array sending ADDRESS of array and assign size to # of items (there may not be 100 items)
    size = fill_array(values);

    // Call a function to display the array contents
    display_array(values, size);

    // Search for a value in the array with a linear search
    do {
        printf("Enter a number to search for: ");
        scanf("%lf", &search_value);

        // Call the linear search function to search for the value entered by user
        found_index = linear_search(values, size, search_value);

        // Display message of index where item was found
        if (found_index == -1)
            printf("Value not found in list\n");
        else
            printf("Value found at index %d\n", found_index);

        printf("Would you like to search again? (y/n): ");
        scanf(" %c", &answer);
    } while (answer == 'y' || answer == 'Y');

    return (0);
}

//**********************************************************
// Function: fill_array
// Data Required: pointer to array
// Data Returned: number of elements in the array
// Desc: Fill array with a random number of random numbers.
//**********************************************************
int fill_array(double *list)
{
    int i = 0, //index to traverse array
        size = 0; //Size of array generated

    srand(time(0));
    size = rand() % MAX_SIZE + 1;

    for (i = 0; i < size; i++)
        *(list + i) = rand() % 1000 / 100.0; // # between 0.00 and 9.99

    printf("FYI: Array size= %d\n", size);
    return size;
}//end fill_array

//**********************************************************
// Function: display_array
// Data Required: array, number of elements
// Data Returned: none
// Desc: Display elements in the array
//**********************************************************

void display_array(double *list, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d index value = %.2f\n", i, *(list + i));
    }
}

//**********************************************************
// Function: linear_search
// Data Required: array, size, and value to search for
// Data Returned: position of value found in array
// Desc: Use a linear search to find value. When found,
// return index location. Otherwise return -1.
//**********************************************************
int linear_search(double list[], int array_size, double value)
{
   int index = 0;      // Used as a subscript to search array
   int position = -1;  // To record position of search value
   bool found = false; // Flag to indicate if value was found

   while (index < array_size && true)
   {
      if (fabs(list[index] - value) < 0.0001) // If the value is found
      {
         found = true; // Set the flag
         position = index; // Record the value's subscript
      }
      index++; // Go to the next element
   }

   return position; // Return the position, or -1
}
