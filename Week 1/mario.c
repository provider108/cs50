#include <stdio.h>
#include <cs50.h>

int main(void)
{    
    int height;
    int i;
    
    height = get_int("Height: ");   
    
    for (i = 1; i <= height; i++)
    {
        int j;
        int count_hashes = i;
        int count_spaces = height - i;        
        
        // print spaces
        for (j = 1; j <= count_spaces; j++)
        {
            printf(" ");
        }        
        
        // print hashes
        for (j = 1; j <= count_hashes; j++)
        {
            printf("#");
        } 
        
        // print middle spaces
        printf("  ");
        
        // print hashes
        for (j = 1; j <= count_hashes; j++)
        {
            printf("#");
        } 
        
        printf("\n");
    }

}

