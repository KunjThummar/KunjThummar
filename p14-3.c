#include<stdio.h>
void main()
{
int c,r,n;
char a;

printf("enter the number of row:");
scanf("%d",&n);
for(r=1;r<+n;r++)
    {
    for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
    a='A';
    for(c=1;c<=r;c++)
        {
            printf("%c",a);
            a++;
        }
    a=a-2;
    for(c=1;c<=r-1;c++)
        {
            printf("%c",a);
            a--;
        }
    printf("\n");
    }
}
