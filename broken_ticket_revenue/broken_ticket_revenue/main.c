// **********************************************************
// Program:      broken_ticket_revenue.c
// Name :        Masumbuko Alulea
// Instr:         Kim Prohaska
// Course:       CSC 150
// Date:         Jan 31 2023
// Description: This program is BROKEN! It contains a number
// of syntax and logic errors. See if you can find/fix them.
// **********************************************************

//preprocessor directive(s)
#include <stdio.h>

int main(void)
{

    // Variable Declarations
    int seats_avail = 0,
        tickets_sold = 0;
    double cost_per_ticket = 0.0,
           capacity_pct = 0.0,
           revenue = 0.0;

    //Display introduction and instructions to user
    printf("******************************************************************\n");
    printf("\nThis program will calculate the percentage of how close an event\n");
    printf("center is to capacity and how much revenue has been generated.\n\n");
    printf("It will ask for information from you for the calculation:\n");
    printf("available seats, number of tickets sold at the gate & cost/ticket.\n");
    printf("\n******************************************************************\n\n\n");

    //Calculate percent of capacity and ticket revenue
    //capacity_pct = (double)tickets_sold / seats_avail * 100;
    
   // revenue =  tickets_sold * cost_per_ticket;

    //Get input~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // Ask for number seats in event center
    printf("\nEnter number of seats in event center: ");
    // Get seat count from KEYBOARD
    scanf("%d", &seats_avail);

    // Ask for tickets sold
    printf("\nEnter number of tickets sold: ");
    // Get number of tickets sold from KEYBOARD
    scanf("%d", &tickets_sold);

    // Ask for cost per ticket
    printf("\nEnter cost per ticket: ");
    // Get ticket cost from KEYBOARD
    scanf ("%lf", &cost_per_ticket);
    
    capacity_pct = (double)tickets_sold / seats_avail * 100;
    
    revenue =  tickets_sold * cost_per_ticket;


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //Display a neatly formatted report
    printf("\n\n\n");      //a few blank lines to separate user entry & report
    printf("Results\n");
    printf("-------\n-------\n\n");
    
    printf("Available seats:   %10d\n",seats_avail);
    
    printf("Tickets sold:      %10d\n", tickets_sold );
    printf("\n\n");
    printf("Percent of capacity:  %18.2lf%%\n", capacity_pct );
    printf("Cost Per Ticket:      %18.2lf\n", cost_per_ticket );
    printf("Total Ticket Revenue: %18.2lf\n", revenue);
    printf("\n\n");

    return (0);
}


// **********************************************************
// Program:      broken_ticket_revenue.c
// Name:         Kim Prohaska
// Course:       CSC 150
// Date:         Jan 31 2023
// Description: This program is BROKEN! It contains a number
// of syntax and logic errors. See if you can find/fix them.
// **********************************************************

//preprocessor directive(s)
/* #include <stdio.h>

int main(void)

    // Variable Declarations
    int seats_avail = 0;
        tickets_sold = 0;
    double cost_per_ticket = 0.0,
           capacity_pct = 0.0,
           revenue = 0.0;


    //Display introduction and instructions to user
    printf("******************************************************************\n");
    printf("\nThis program will calculate the percentage of how close an event\n");
    printf("center is to capacity and how much revenue has been generated.\n\n");
    printf("It will ask for information from you for the calculation:\n");
    printf("available seats, number of tickets sold at the gate & cost/ticket.\n");
    printf("\n******************************************************************\n\n\n");

    //Calculate percent of capacity and ticket revenue
    capacity_pct = (double)tickets_sold / seats_available * 100;
    tickets_sold * cost_per_ticket = revenue;

    //Get input~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // Ask for number seats in event center
    printf("\nEnter number of seats in event center: ");
    // Get seat count from KEYBOARD
    scanf("%lf", &seats_avail);

    // Ask for tickets sold
    printf("\nEnter number of tickets sold: ");
    // Get number of tickets sold from KEYBOARD
    scanf("%d", tickets_sold);

    // Ask for cost per ticket
    printf("\nEnter cost per ticket: ");
    // Get ticket cost from KEYBOARD
    scanf ("%.2lf", &cost_per_ticket);


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //Display a neatly formatted report
    printf("\n\n\n");      //a few blank lines to separate user entry & report
    printf("Results\n");
    printf("-------\n-------\n\n");
    printf("Available seats: %d\n" );
    printf("Tickets sold: %d\n", &tickets_sold );
    printf("\n\n");
    printf("Percent of capacity: %d%%\n", capacity_pct );
    printf("Cost Per Ticket:\n", cost_per_ticket );
    printf("Total Ticket Revenue: %lf\n, revenue" );
    printf("\n\n");

    return (0);
}
*/
