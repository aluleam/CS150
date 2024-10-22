//**************************************************************
// Parallel Arrays - Compute square root of sum of products
// Mar 2023
//**************************************************************
#include <stdio.h>
#include <math.h>

#define SIZE 20

int main(void)
{

    int x[SIZE] = {8, 9, 1, 6, 8, 3, 9, 7, 5, 1, 9, 3, 4, 8, 1, 2, 3, 6, 8, 4};
    int y[]     = {3, 6, 8, 2, 8, 9, 1, 6, 8, 3, 9, 7, 5, 1, 9, 3, 4, 8, 1, 2};
    int z[SIZE] = {0};
    int i=0,
        zsum = 0;
    double zroot = 0.0;

    
    //Fill array z (product of x & y)
    for(i = 0; i< SIZE; i++)
    {
        z[i] = x[1]*y[i];
        z[i]++;
    }


   //Print headings
    printf("    X         Y        Z\n");
    printf("   ---       ---      ---\n");

    //Print contents of all three arrays and accumulate sum of products

    for(i = 0; i<SIZE; i++){
        
    printf("%5d%10d%10d\n", x[i],y[i],z[i]);
        zsum += z[i];
        
        //Figure square root of sum
        zroot = sqrt(zsum);
       // printf("\n\nSum of products = %d\n\n", zsum);
        //printf("Square Root of Sum of Products = %.2f\n\n", zroot);
    }
 return 0;
}
