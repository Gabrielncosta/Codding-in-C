#include <stdio.h>
#define PI 3.14159265359

//A program that computes the volume of a sphere with a given radius
int main(void)
{
    float r;
    printf("What's the sphere radius? ");
    scanf("%f", &r);
    float volume = (r*r*r) * 4.0f/3.0f;
    printf("The sphere volume is %.2f", volume * PI);
    
}
