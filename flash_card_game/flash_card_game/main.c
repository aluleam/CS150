//
//  main.c
//  flash_card_game
//
//  Created by Making Aberto on 2/2/23.

// **********************************************************
// Program:      flash_card_game.c
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
#include <stdio.h>

//Function prototypes
void display_intro(void);
void display_border(void);

int main(void)
{
    // declare variables
    int x = 0,
        y = 0;
    double  answer = 0.0;
    double guess = 0.0;
    char math_op = ' ';
    


    //Call a function to display intro & instructions
    display_intro();

    //Get numbers to use in calculation
    printf ("Enter an integer: ");
    scanf("%d", &x);

    // Ask user for math operation
    printf("Enter math operation (+ - / * %% ): ");
    scanf(" %c",&math_op);

    // Get math operator from keyboard
    printf ("Enter another integer: ");
    scanf("%d", &y);

    //Display several blank lines to separate user entry from report
    printf ("\n\n-------------------\n\n");

    //Calculate and display results
    if(math_op == '+'){
        answer = x + y;}
    else if (math_op == '-'){
        answer=x-y;
    }
    else if (math_op =='*'){
        answer = x*y;
    }
    else if(math_op =='/'){
        answer = (double)x/y;
    }
    else if(math_op =='%'){
        answer = x%y;
    }
    else{
        printf("Invalid operator");
    }
    
    printf("\nWhat is %d %c %d?\n\n",x,math_op,y);
    scanf("%lf",&guess);
    
    if(guess==answer){
        printf("You got ittttt!!!!!!!");
    }
    else{
        printf("sorry!!!\n");
    }
    
    printf("%d %c %d = %.2lf\n\n",x,math_op,y,answer);

    //Display answer in format of x + y = answer

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


