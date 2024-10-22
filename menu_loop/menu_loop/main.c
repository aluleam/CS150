//**************************************************************************
// Program:    menu_loops_Feb28.c
// Name:       Masumbuko Alulea
// Course:     CSC 150
// Instructor: Kim Prohaska
// Due Date:   Feb 2023
// Description: This program will be used to set up a menu system where the
//              user can choose to run three sub-programs which are average,
//              temperature conversion, and draw a box. The program will
//              validate all inputs.
// The menu continues to let the user play until the user chooses to exit.
// Options are further explained in the comment section above each related
// function definition.
// 1) Compute Average:
// 2) Convert Temperature
// 3) Display Shape
//**************************************************************************
#include <stdio.h>

//Function Prototypes
void compute_average(void);
void convert_temperature(void);
void display_shape(void);
void display_intro(void);
int get_choice_from_menu(void);

int main(void)
{
    int choice = 0;         // Number of menu choice from user

    //Display introduction message to user
    display_intro();

    while (choice != 4)
        {
            //Display the menu and get the user's selection.
            choice = get_choice_from_menu();

            //Branch to the proper function
            switch (choice)
            {
            case 1:
                  compute_average();
                  break;
            case 2:
                  convert_temperature();
                  break;
            case 3:
                  display_shape();
                  break;
            case 4: //Quit
                  printf("Have a nice day!\n");
                  break;
            default:
                  printf("Invalid choice\n");
             }//end switch
        }//end while
    return 0;
}

//*****************************************************************************
// Function display_intro
// Data passed in: None
// Data returned: None
// This function will display an intro message on the screen
//*****************************************************************************
void display_intro(void)
{
   printf("This program consists of a menu system where you can\n");
   printf("choose from three activities which are to compute an average,\n");
   printf("do a temperature conversion, or draw a box.\n");

   return;
}

//*****************************************************************************
// Function get_choice_from_menu
// Data passed in: None
// Data returned: integer # chosen
// This function will display a menu, get the choice from the user & return it
//*****************************************************************************
int get_choice_from_menu(void)
{
    int choice = 0;
   printf( "\n\n*******************\n");
   printf( "\nChoose a menu item\n");
   printf( "  1. Calculate Average of Numbers\n");
   printf( "  2. Temperature Conversion Table\n");
   printf( "  3. Shape Display\n");
   printf( "  4. Quit\n\n");
   printf( "\n");

   do{
     printf( " Enter the number (1-4) of your choice: ");
     scanf("%d", &choice);
   } while (choice < 1 || choice > 4);

   return choice;
}

//***********************************************************************
// Function:       compute_average
// Data passed in: None    (No data needed from calling function)
// Data returned:  None    (No data sent back to calling function)
// This function will display the average of 2-7 numbers entered by user.
// Don't ask the user how many numbers will be entered... Instead tell the
// user to type in -999 (a sentinal) as a score to indicate they are done.
// The scores entered must be between 0 and 100.
//***********************************************************************
void compute_average(void)
{
    //  declare variables
    double score = 0.0,
    total = 0.0, // must inititalize to 0
    ave = 0.0;
    int count = 0;
    
    printf( "\n*******************\n");
    printf("You have chosen to compute an average.\n\n\n");
    
    printf("Enter from 2 to 7 scores (0-100) to be averaged.\n");
    printf("[Use -999 to stop if less than 7 scores.]\n\n");
    
    do{
        
      do {
            printf("Enter score number: %d ",count + 1);
            scanf("%lf",&score);
          
          if((score < 0 || score > 100)&& (score !=-999))
              printf("Error: Enter 0-100: ");
          
      } while((score < 0 || score > 100)&& score !=-999);
        
        if (score != -999)
        {
        count++;
        total+=score;
        }
        
    } while (count< 2||(count < 7 && score !=-999));

   ave = total / count;
   printf("Total = %.2f \n", total);
   printf("Average = %.2f\n", ave);
    
   return;
} // end compute_average

//*****************************************************************************
// Function:       convert_temperature
// Data passed in: None    (No data needed from calling function)
// Data returned:  None    (No data sent back to calling function)
// This function will display a Fahrenheit to Celsius conversion table
// Ask the user what to use for the starting and ending temperatures. Then
// show a conversion table for only those temps.
//*****************************************************************************
void convert_temperature(void)
{
   double start_temp = 0.0,
          stop_temp = 0.0,
          f_temp = 0.0,
          c_temp = 0.0;

    printf( "\n*******************\n");
    printf("You have chosen to convert a temperature.\n\n");
//
    printf("Enter start Fahrenheit temperature for table:");
    scanf("%lf", &start_temp);


   do {
        printf("Enter end Fahrenheit temperature for table:");
        scanf("%lf", &stop_temp);
       if(stop_temp< start_temp)
           printf("Error: Stop temp must be greater than the start temp.");
       
   } while(stop_temp< start_temp);
        
        printf("Fahren      Celsius\n");
        printf("------      -------\n");
    
    for ( f_temp = start_temp; f_temp<=stop_temp;f_temp++)
    {
        c_temp = ( (f_temp-32)*5.0)/9.0;
        printf("%6.0f         %6.2f\n",f_temp,c_temp);
    }
    

    return;
} //end convert_temperature

//***********************************************************************
// Function:       display_shape
// Data passed in: None    (No data needed from calling function)
// Data returned:  None    (No data sent back to calling function)
// This function will display box of characters up to 20x20.
// The user will enter the size of each row and column and the character
// If the user asks for 4 rows of 7 columns and an *, it would look like
// * * * * * * *
// * * * * * * *
// * * * * * * *
// * * * * * * *
// If the user asks for 6 rows of 3 columns and a $, it would look like
// $ $ $
// $ $ $
// $ $ $
// $ $ $
// $ $ $
// $ $ $
//***********************************************************************

void display_shape(void)
{
    int row = 0,
    col = 0,
    total_rows = 0,
    total_cols = 0;
    char display_char = ' ';
    
    printf( "\n*******************\n");
    printf("You have chosen to display a shape.\n\n");
    
    printf("Enter total number of rows:");
    scanf("%d", &total_rows);
    
    printf("Enter total number of columns (1-20):");
    scanf("%d", &total_cols);
    
    printf("Enter character for box: ");
    scanf(" %c", &display_char);
    
    
    for( row =1; row<=total_rows;row++){
        
    for (col = 1; col<=total_cols;col++)
    {
        printf(" %c ",display_char);
    }
        printf("\n");

}
  return;
} // end display_shape
