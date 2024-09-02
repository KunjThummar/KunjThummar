#include<stdio.h>
void main()
{
    char a[100];
    int i,l=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
     l++;
    }
    a[i]='\0';
    printf("the length of string is %d",l);
}
