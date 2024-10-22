//
//  main.c
//  calc_grade_percent
//
//  Created by Making Aberto on 1/31/23.
//
// **********************************************************
// Program:    calc_grade_percent
// Name:       Masumbuko Alulea
// Team:
// Course:     CSC 150
// Date:       01/23/23
// Description:
// **********************************************************

#include <stdio.h>

int main() {
    
    int earnedPoint = 0.0;
    int possiblePoints = 0.0;
    double percent = 0.0;
    
    printf("Earned Points: ");
    scanf("%d", &earnedPoint);
    printf("Possible Points: ");
    scanf("%d", &possiblePoints);
    
    percent = ((double)earnedPoint/possiblePoints)*100;
    printf("\n\n\nEarned Points:   %d\n",earnedPoint);
    printf("Possible Points: %d",possiblePoints);
    printf("\nYou score: %d/%d = %.1lf%%\n\n",earnedPoint,possiblePoints,percent);

    return 0;
}
