// **********************************************************
// Program:      flash_card_game_Feb07.c
// Name:         Masumbuko Alulea
// Team:         In-Class
// Course:       CSC 150
// Instructor:   Kim Prohaska
// Date:         Feb 2023
// Description: This program will work like a flash-card game
// to help elementary students to practice their math skills.
// Users may either pick their numbers and operation, or they
// may allow the program to randomly generate one. The user
// will enter an answer and be notified if their answer is
// correct or not.
// **********************************************************

//Preprocessor directives
#include <stdio.h>   //printf & scanf
#include <stdlib.h>  //random #'s
#include <time.h>   // get time
#include <math.h>                   // use absolute value function

#include <stdbool.h>         // use boolean variables
                       
                     

//Function prototypes
void display_border(void);
void display_intro(void);

int main(void)
{
    // declare variables

    int x = 0,
        y = 0,
        temp_op = 0;

    double  answer = 0.0,
            guess = 0.0;
    char math_op = ' ',
         game_type = ' ';
    bool error = false; // assume no errors

    //Call a function to display intro & instructions
    display_intro();


    //***********************
    // Set up problem
    printf("Do you want to pick(p) or get a random(r) problem?: ");
    scanf(" %c", &game_type);

     if((game_type =='r')||(game_type=='R' ) ) //user chose random problem
         
         srand(time(0));
         //seed the random generator
         //Generate random values for x & y
         x = rand()%11;  //between o and 10
         y= rand()%10+1;
         //Generate random math operator
         temp_op = rand()%5;}// between 0 and 4

        switch(temp_op){
                
            case 0:math_op = '+';
                break;
            case 1: math_op = '-';
                break;
            case 2: math_op = '*';
                break;
            case 3: math_op = '/';
                break;
            case 4: math_op = '%';
                break;
            default: printf("Invalid operatotr generated.\n");
                error = true;
        }
        
    
    else if ((game_type=='p' )||(game_type=='P')){  //user chose to pick own problem
    
            //Get numbers to use in calculation
            printf ("Enter an integer: ");
            scanf("%d", &x);

            // Ask user for math operation
            printf("Enter math operation (+ - / * %%): ");
            scanf(" %c", &math_op);

            // Get math operator from keyboard
            printf ("Enter another integer: ");
            scanf("%d", &y);
    }
    else
    {   printf("Invalid game choice.\n");
        
        error = true;
    }


    //*****************************
    //Calculate answer
    if( math_op == '+')
        answer = x + y;
    else if (math_op == '-')
        answer = x - y;
    else if (math_op == '*')
        answer = x * y;
    else if (math_op == '/')
        if(y != 0){
            answer = (double)x / y;}
            
        else{
            printf("Cannot devide by 0\n");
            error = true;
        }

        else if (math_op == '%')
            if(y != 0)
                answer = x % y;
        else{
            printf("Mod canot divide by zero\n");
            error = true;
            
        }
        
            else{
                printf("Invalid operator.\n");
                error = true;
            }
    


    //*****************************
    // Output/Guess

    //Display several blank lines to separate items on screen
    printf ("\n\n-------------------\n\n");

    if(error ==true){
        
        printf("Unable to calculate.\n");}
    
   
    



         
            //Get user's guess
            printf("What is %d %c %d? ", x, math_op, y);
            scanf("%lf", &guess);

            if (fabs(guess - answer) <0.0001)  // *must fix for valid double comparison
                printf("Correct!!! ");
            else
                printf("Incorrect... ");

            //Display answer in format of x + y = answer
            printf("%d %c %d = %.2lf\n", x, math_op, y, answer);
         }


    return 0;
}


//*********************************************************************
// Function display_intro
// Data passed in: None
// Data returned: None
// Desc: Display intro and instructions to user
//**********************************************************************
void display_intro(void)
{
    //Call a function to display a border line
    display_border();

    //Print an intro message on the screen
    printf("This program will help you master your math skills.\n");
    printf("It will interact in a flash-card style fashion.\n");
    printf("Have fun!!\n");

    //Call a function to display a border line
    display_border();


    return;
}

//*********************************************************************
// Function display_border
// Data passed in: None
// Data returned: None
// Desc: Display a border on the screen
//**********************************************************************
void display_border(void)
{
    printf("*************************************************************\n");

    return;
}
