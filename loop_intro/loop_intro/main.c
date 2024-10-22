//
//  main.c
//  loop_intro
//
//  Created by Making Aberto on 2/14/23.
//

#include <stdio.h>

int main() {
    int x = 0;
    printf("This is for while loop!!!!");
    while(x<=10){
        
        printf("x = %d\n\n",x);
        x+=1;
    }
    
    printf("This is a do while loop!!!!\n\n");
    x = 1; //initialize
    do{
        
        printf("x = %d\n\n",x);
        x = x+1; //update
        
    } while (x<=10); //test
    
    printf("This is for a for loop");
    
    for(x = 0; x<=10; x++){
        
        printf("x = %d\n\n",x);
    }
    
    return 0;
}
