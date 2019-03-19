#include <stdio.h>

int main(void)
{
    float real, taxe;
    
    printf("Enter an amount: ");
    scanf("%f", &real);
    printf("With tax added: R$%.2f\n", taxe = real + (real * 0.10));
}
