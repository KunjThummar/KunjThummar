
#include<stdio.h>
void main()
{
    int c,r,C,R;
    printf("enter the number of row :");
    scanf("%d",&R);
    for(r=1;r<=R;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(c%2==0)
            {
                printf("0");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
