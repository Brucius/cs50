#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int minutes;
    do
    {
    printf("how long do you shower?\n");
    minutes = get_int();
    } while(minutes < 0);
    //TODO getting input from above 0 minutes.
    
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", minutes * 12); //TODO converting minutes to bottle of water
}