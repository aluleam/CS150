//
//  main.c
// program: create_file.c
// Name: Masumbuko Alulea

// Created by Making Aberto on 4/6/23.
//

#include <stdio.h>

int main(void)
{
    //creating a file pointer
    FILE * num_list;
    
    num_list= fopen("Number_list.txt","w");
    
    fprintf(num_list,"%d\n",17);
    
    
    
    
    
    fclose(num_list);
    
    
    
    return 0;
}
