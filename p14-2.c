#include<stdio.h>
void main()
{
    int n,c,r,a;
    printf("enter the number of row:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}
