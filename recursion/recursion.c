// a simple recursion code that returns the fatorial of N

#include <stdio.h>
int fact(int n);

int main(void)
{
    int n;
    printf("Factorial of: ");
    scanf("%d", &n);
    printf("%d",fact(n));
}

int fact(int n)
{
    if(n == 1)  
        return 1;    //base case
    else                    
        return n * fact(n-1);   //recursive case
}
