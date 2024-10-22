#include <stdio.h>
#define SIZE 5

int main()
{
    int scores[SIZE] = {88,92,96,100,78};
    int numbers[SIZE];
    double list[] = {32.1,3.5,7.9};
    double values[SIZE] = {14.1,18.2};
    int i = 0;
    
    
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter score[%d]: ",i);
        scanf("%d",&scores[i]);
    }
    for(i = 0; i<SIZE; i++)
    {
        printf("scores[%d] = %d\n",i,scores[i]);
    }
    
    
    
    
    
    
    
    
    
    //scores[0] = 95;
   // scores[2] = (scores[0]+scores[1]);
    
    /*printf("Score[0] = %d\n",scores[0]);
    printf("Score[1] = %d\n",scores[1]);
    printf("Score[2] = %d\n",scores[2]);
    printf("Score[3] = %d\n",scores[3]);
    printf("Score[4] = %d\n",scores[4]);
    
    printf("scores = %d\n",scores);
*/
    return 0;
}
