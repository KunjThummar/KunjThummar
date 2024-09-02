#include<stdio.h>
void main()
{
 char a[100],b[100];
 int i,j,L=0;
 printf("a=");
 gets(a);
 for(i=0;a[i]!='\0';i++)
    {
     L++;
    }
    a[i]='\0';
     for(i=0,j=0;i<L;i++,j++)
     {
         b[j]=a[i];
     }
     b[j]='\0';
     printf("b=%s",b);
}
