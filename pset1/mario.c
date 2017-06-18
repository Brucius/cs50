#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;
    do
    {
    printf("height: ");
    height = get_int();
    } 
    while(height < 0 || height > 23);
    //TODO getting input value from user with a range inclusive of 0 from 23
    
    for (int i = 0; i < height; i ++) 
    {
        for (int n = i; n < height-1; n++)
        {
            printf(" "); //Drawing Spaces
        }
        for (int n = 0; n < i+2; n++)
        {
            printf("#"); //Drawing Hashes
        }
        printf("\n");
    }
    //TODO looping and drawing half pyramid
    
}