#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25
#define DIME    10
#define NICKLE  5
#define PENNY   1

int main (void)
{
    float change = 0;
    do
    {
    printf("How much change is owed? \n");
    change = get_float();
    } 
    while(change < 0);
    //TODO getting only positive input from user
    
    int cents = round(change * 100); //round and convert to cents
    
    int n = 0; //number of coins used.
    
    while (cents > 0)
    {
        if(cents >= QUARTER)
        {
            n += cents / QUARTER;
            cents -= QUARTER * (cents / QUARTER);
        }
        else if(cents >= DIME)
        {
            n += cents / DIME;
            cents -= DIME * (cents/DIME);
        }
        else if (cents >= NICKLE)
        {
            n += cents / NICKLE;
            cents -= NICKLE * (cents / NICKLE);
        }
        else
        {
            n += cents;
            cents = 0;
        }
    }
    
    printf("%d\n", n);
}

