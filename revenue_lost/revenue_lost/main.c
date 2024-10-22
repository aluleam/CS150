// **********************************************************
// Program:      lost_revenue.c
// Name:         _____________
// Team:         in-class project
// Date:         March 2023
// Description: This program will calculate the percent of
// capacity that a stadium or arena is full. It will ask the
// user to enter the number of available seats, the number
// of tickets sold, and the cost per ticket. It will then
// calculate the percentage of capacity, ticket revenue and
// amount of money lost by not filling the event center.
// **********************************************************

//preprocessor directive(s)
#include <stdio.h>

// Function prototypes
void display_intro(void);
void display_report(int seats_avail, int sold, double percent,
                    double cost_per_ticket, double revenue,double lost_revenue);
int get_avail_seats(void);
int get_tickets_sold(void);
double get_cost(void);
double calc_capacity_pct (int avail, int sold);
double calc_revenue (int sold, double cost);
double calc_lost_revenue(int seats_avail, double cost_per_ticket, int sold);


int main()
{
    // Variable Declarations
    int available_seats = 0,
        tickets_sold = 0;
    double  capacity_pct = 0.0,
            cost_per_ticket = 0.0,
            ticket_revenue = 0.0;
    double lost_r;

    //Display introduction~~~~~~~~~~~~~~~~~~~~~~~~~~~
    display_intro();
    //Get input~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    available_seats =  get_avail_seats();
    tickets_sold = get_tickets_sold();
    cost_per_ticket = get_cost();
    lost_r = calc_lost_revenue(available_seats, cost_per_ticket,tickets_sold);

    //Calculate percent of capacity and ticket revenue
    capacity_pct = calc_capacity_pct(available_seats,tickets_sold);
    ticket_revenue = calc_revenue(tickets_sold, cost_per_ticket);
    
    

    //Display results
    display_report(available_seats,tickets_sold,capacity_pct,
                   cost_per_ticket,ticket_revenue,lost_r);

    return (0);
}

// ********************************************************************************************
// ********************************************************************************************
// Function:        display_intro
// Data Passed In:  none
// Data Returned:   none
// Description:     displays an intro message & instructions
//*********************************************************
void display_intro(void)
{
    //Display introduction and instructions to user
    printf("******************************************************************\n");
    printf("\nThis program will calculate the percentage of how close an event\n");
    printf("center is to capacity and how much revenue has been generated.\n\n");
    printf("It will ask for information from you for the calculation:\n");
    printf("available seats, number of tickets sold at the gate & cost/ticket.\n");
    printf("\n******************************************************************\n\n\n");

    return;
}


// ********************************************************************************************
// ********************************************************************************************
// Function:        get_avail_seats
// Data Passed In:  none
// Data Returned:   int # of seats
// Description:     Ask for available seat count & return
// *****************************************************
int get_avail_seats(void)
{
     int seats = 0;

     //Ask for number seats in event center
     printf("\nEnter number of seats in event center: ");

     //Get seat count from KEYBOARD
     scanf("%d", &seats);

     return seats;
}


// ********************************************************************************************
// ********************************************************************************************
// Function:        get_tickets_sold
// Data Passed In:  none
// Data Returned:   int # of tickets
// Description:     Ask for and return # of tickets sold
// *****************************************************
int get_tickets_sold(void)
{
    int sold = 0;

    // Ask for tickets sold
    printf("\nEnter number of tickets sold: ");

    // Get number of tickets sold from KEYBOARD
    scanf("%d", &sold);

    return sold;
}

// ********************************************************************************************
// ********************************************************************************************
// Function:        get_cost
// Data Passed In:  none
// Data Returned:   double cost of tickets
// Description:     Ask for and return cost per ticket
// *****************************************************
double get_cost(void)
{
    double cost = 0.0;

    // Ask for tickets sold
    printf("\nEnter cost per ticket: $");

    // Get cost from KEYBOARD
    scanf("%lf", &cost);

    return cost;
}

// ********************************************************************************************
// ********************************************************************************************
// Function:        calc_capacity_pct
// Data Passed In:  integers avail & sold
// Data Returned:   double percent of capacity
// Description:     Calc percent of capacity based on tickets sold
// *****************************************************
double calc_capacity_pct (int avail, int sold)
{
    double percent = 0.0;
    percent = (double) sold / avail * 100;
    return percent;
}


// ********************************************************************************************
// ********************************************************************************************
// Function:        calc_revenue
// Data Passed In:  integer tickets & double cost/ticket
// Data Returned:   double - revenue
// Description:     Calculate ticket revenue
// *****************************************************
double calc_revenue (int sold, double cost)
{
    double revenue = 0.0;
    revenue  = sold * cost;
    return revenue;
}

// ********************************************************************************************
// ********************************************************************************************
// Function:        display_report
// Data Passed In:  integers available seats and tickets sold
//                  doubles percent of capacity, cost/ticket, and total revenue
// Data Returned:   none
// Description:     NEATLY display a report
// *****************************************************
void display_report(int seats_avail, int sold, double percent,
                    double cost_per_ticket, double revenue, double lost_revenue)
{
    printf("\n\n\n");    //Display several blank lines to separate user entry from report

    //Display a neatly formatted report
    printf("\"Results\"\n");
    printf("\\-------\\\n");
    printf("Available seats:       %11d\n", seats_avail);
    printf("Tickets sold:          %11d\n", sold);
    printf("Percent of capacity:   %11.2f%%\n", percent);
    printf("Cost Per Ticket:      $%11.2f\n", cost_per_ticket);
    printf("Total Ticket Revenue: $%11.2f\n", revenue);
    printf("Lost Revenue:         $%11.2f\n",lost_revenue);
    return;
 }

double calc_lost_revenue(int seats_avail, double cost_per_ticket, int sold)
{
    double max_revenue = seats_avail * cost_per_ticket;
    double actual_revenue = sold * cost_per_ticket;
    double lost_revenue = max_revenue - actual_revenue;
    return lost_revenue;
}


