#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,l;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
     l++;
    }
    a[i]='\0';
    for(i=l-1,j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
    printf("reverse string = %s",b);

}
