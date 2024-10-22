//
//  main.c
//  file_output
//
//  Created by Making Aberto on 3/9/23.

//

#include <stdio.h>

int main(void) {
    
    //1. create a file pointer
    
    FILE * output_file;
    //2. open the file
    output_file = fopen("Greeting.txt","w");
   // 3. use the file
    fprintf(output_file,"Hey how are you?\n");
    fprintf(output_file,"I haven't seen you in awhile.\n");
    fprintf(output_file, "What's going on?");
    
    // 4. close the file
    fclose(output_file);

    return 0;
}
