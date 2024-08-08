/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void);

int main()
{
    printf("Hello World");
    ft_print_numbers();
    
    return 0;
}



void ft_print_numbers(void){
    

    int i = 0;
    char ascii;

    while (i < 10) {
        ascii = i +'0';
        write(1, &ascii, 1);
        i++;
    
}




    
}
