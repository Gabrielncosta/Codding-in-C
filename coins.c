// A algorithm for giving a change using the lowest coins number possible


#include <stdio.h>
#include <math.h>

int main(void)
{ 
    float quarters = 25, dimes = 10, nickels = 05, pennies = 01, value;
    int dollars, coins = 0; 
    
    do
    { 
        // Prompts user for an amount of change
        printf("Change: ");
        scanf("%f", &value);
        dollars = round(value * 100);
    }
    while (dollars <= 0);
    
    // While loop for getting the largest coin possible
    
    while (dollars >= quarters) 
    {
        dollars = dollars - quarters;
        coins++;
    }  
    
    while (dollars >= dimes) 
    {
        dollars = dollars - dimes;
        coins++;
    } 
    
    while (dollars >= nickels)
    {
        dollars = dollars - nickels;
        coins++;
    }
    
    while (dollars >= pennies)
    {
        dollars = dollars - pennies;
        coins++;
    }
    
    printf("%d\n", coins);
}
    
