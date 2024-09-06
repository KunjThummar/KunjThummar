#include<stdio.h>
void main()
{
    int a[5][10];
    int n,i,r,c,x;
    for(r=0;r<5;r++)
    {
        for(c=0;c<10;c++)
        {
            a[r][c] = 79;
        }
    }
    printf("enter the number of seat:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the number of seat for reserved seat %d :",i);
        scanf("%d",&r);
        scanf("%d",&c);
        printf("\n");
        a[r-1][c-1] = 88;
    }


    printf("seating chart:\n");
    for(r=0;r<5;r++)
    {
         printf("row %d",r+1);
        for(c=0;c<10;c++)
        {
            printf("%c",a[r][c]);

        }
        printf("\n");
    }
}
//programmer=Kunj Thummar


