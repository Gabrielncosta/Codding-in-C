// gets two integers inputs from the user then swaps them.

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{   
    int x, y;
    printf("x: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%i", &y);
    
    swap(&x, &y);
    printf("Swapped, now x is %i and y is %i", x, y);
}

// a function for swapping two integers
void swap(int *a, int *b) 
{
    int swp = *a;
    *a = *b;
    *b = swp;
}   
