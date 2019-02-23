#include <stdio.h>
#include <cs50.h>

void print_symbols(string symbol, int number);

int main(void)
{       
    int i;
    int h; //height
    
    h = get_int("Height: ");   
    
    for (i = 1; i <= h; i++)
    {        
        print_symbols(" ", h - i);
        print_symbols("#", i);
        print_symbols(" ", 2);
        print_symbols("#", i);
        
        printf("\n");
    }

}

void print_symbols(string symbol, int number)
{
    int i;
    
    for (i = 1; i <= number; i++)
        {
            printf("%s", symbol);
        } 
}
