// Demonstrating the collatz conjecture using recursion

#include <stdio.h>
int collatz(int n);

int main(void)
{
    int n;
    printf("collatz of: ");
    scanf("%d", &n);
    printf("%d",collatz(n));
}

int collatz(int n)
{
    if(n == 1)       //base case
        return 0;    
    else if(n%2 == 0)             //recursive case
        return 1 + collatz(n/2);
    else
        return 1 + collatz((3*n)+1);
}
