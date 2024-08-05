#include<stdio.h>
void main()
{
    int R,C,r,c;
    printf("enter the size of table vertically  :");
    scanf("%d",&C);
    printf("\nenter the size of table horizontally:");
    scanf("%d",&R);
    for(r=1;r<=R;r++)
    {
        for(c=1;c<=C;c++)
        {
            printf("%2d\t",r*c);
        }

      printf("\n");
    }
}
