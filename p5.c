#include <stdio.h>
void main()
{
    float c , F;
    printf("Enter th temprature in degree celsius :");
    scanf("%f" , &c);
    F = (float)9/5*c + 32;
    printf("The temprature in fahreneit is %f" , F);
}