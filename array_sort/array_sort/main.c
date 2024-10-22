//***********************************************
// Search & Sort: Working with Arrays
// Apr 2023
//***********************************************
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_SIZE 30

//function prototypes
void fill_array(double list[], int *ptr_size);
void display_array(const double list[], int size );
double linear_search(const double list[], int array_size, double value );
void bubble_sort(double array[], int size );
void selection_sort(double array[], int size);
int binary_search(const double array[], int size, double value);

int main (void)
{
    int size;
    double values[MAX_SIZE];
    double search_value;
    int found_index = -1;
    char answer;

    // Call a function to fill the array sending ADDRESS of array and 'size' will get # of items (there may not be 100 items)
    fill_array(values, &size);

    // Call a function to display the array contents
    display_array(values, size);

    // Search for a value in the array with a linear search
    do
    {
        printf("Enter a number to search for: ");
        scanf("%lf", &search_value);

        // Call the linear search function to search for the value entered by user
        found_index = linear_search(values, size, search_value);

        // Display message of index where item was found
        // printf("Value found at index %d\n", found_index);
        if (found_index == -1)
            printf("Value not found in list\n");
        else
            printf("Value found at index %d\n", found_index);

        printf("Would you like to search again? (y/n): ");
        scanf(" %c", &answer);
    } while (answer == 'y' || answer == 'Y');


    //Call a function to use a bubble sort to sort the array
    bubble_sort(values,size);
    printf("\n\n\nArray is now sorted in ascending order...\n");
    // Call a function to display the newly sorted array contents
    
    display_array(values, size);


//    // Search for a value in the array with a binary search
    do
    {
        printf("Enter a number to search for: ");
        scanf("%lf", &search_value);

        // Call the binary search function to search for the value entered by user
        found_index = binary_search(values,size, search_value);
    
        // Display message of index where item was found
        // printf("Value found at index %d\n", found_index);
        if (found_index == -1)
            printf("Value not found in list\n");
        else
            printf("Value found at index %d\n", found_index);

        printf("Would you like to search again? (y/n): ");
        scanf(" %c", &answer);
    } while (answer == 'y' || answer == 'Y');
//
//    // Call a function to use a selection sort to sort the array
//    // This time sort in descending order to see changes.
//    // Obviously either sort can be customized to sort ascending or descending
//
    selection_sort(values, size);
     printf("\n\n\nArray is now sorted in descending order...\n");
//    // Call a function to display the newly sorted array contents
    display_array(values, size);

return (0);
}
////**********************************************************
//// Function: fill_array
//// Data Required: none
//// Data Returned: filled array, number of elements
//// Desc: Fill array with a random number of random numbers.
////**********************************************************
void fill_array(double list[], int *ptr_size) //arrays get sent as pointers by default
                     // pointer to the size in main.
{

    int i = 0; //index to traverse array

    srand((unsigned int) time(0));

    *ptr_size = rand() % MAX_SIZE + 1;

    for (i = 0; i < *ptr_size; i++)
       list[i] = rand() % 1000 / 100.0; // # between 0.00 and 9.99

    printf("Array size= %d\n", *ptr_size );
    return;
}//end fill_array
//
////**********************************************************
//// Function: display_array
//// Data Required: array, number of elements
//// Data Returned: none
//// Desc: Display elements in the array
////**********************************************************

void display_array(const double list[], int size )

{
    int i;
    for (i = 0; i < size; i++)
    {
     printf("%d index value = %.2f\n", i, list[i]);
    }


    return;
}


////**********************************************************
//// Function: linear_search
//// Data Required: array, size, and value to search for
//// Data Returned: position of value found in array
//// Desc: Use a linear search to find value. When found,
//// return index location. Otherwise return -1.
////**********************************************************
double linear_search(const double list[], int array_size, double value )
{
   int index = 0;      // Used as a subscript to search array
   int position = -1;  // To record position of search value
   bool found = false; // Flag to indicate if value was found

   while (index < array_size && !found)
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
//
////**********************************************************
//// Function: binary_search
//// Data Required: array, size, and value to search for
//// Data Returned: position of value found in array
//// Desc: Use a binary search to find value. When found,
//// return index location. Otherwise return -1.
////**********************************************************
int binary_search(const double array[], int size, double value)
{
   int first = 0,             // First array element
       last = size - 1,       // Last array element
       middle,                // Mid point of search
       position = -1;         // Position of search value
   bool found = false;        // Flag

   while (!found && first <= last)
   {
      middle = (first + last) / 2;     // Calculate mid point
      if (fabs(array[middle] - value) < 0.0001)    // If value is found at mid
      {
         found = true;
         position = middle;
      }
      else if (array[middle] > value)  // If value is in lower half
         last = middle - 1;
      else
         first = middle + 1;           // If value is in upper half
   }
   return position;
}
//
////**********************************************************
//// Function: bubble_sort
//// Data Required: array and size
//// Data Returned: sorted array
//// Desc: Use a bubble sort to sort array in ASCENDING order
////**********************************************************
void bubble_sort(double array[], int size )
{
    bool swap;
    double temp;
    int i;

    do
    {
        swap = false;   //starting new pass - no swaps yet
        for (i = 0; i < (size - 1);i++)
        {
            if (array[i] > array [i+1])
            {
                //swap contents of the two adjacent elements
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;

                //identify that a swap was made
                swap = true;
            }
        }
    } while (swap);     //pass through array again if any swaps made

    return;
}

////**********************************************************
//// Function: selection_sort
//// Data Required: array and size
//// Data Returned: sorted array
//// Desc: Use a selection sort to sort array in DESCENDING order
////**********************************************************
void selection_sort(double array[], int size)
{
   int i,
       startScan,
       maxIndex;
    double maxValue;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      maxIndex = startScan;
      maxValue = array[startScan];
      for(i = startScan + 1; i < size; i++)
      {
         if (array[i] > maxValue)
         {
            maxValue = array[i];
            maxIndex = i;
         }
      }
      array[maxIndex] = array[startScan];
      array[startScan] = maxValue;
   }
   return;
 }
