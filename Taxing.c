#include <stdio.h>

//This is a program that asks the user to enter a R$ amount, then displays the amount with a 10% tax added

int main(void)
{
    float real, taxe;
    
    printf("Enter an amount: ");
    scanf("%f", &real);
    printf("With tax added: R$%.2f\n", taxe = real + (real * 0.10));
}
