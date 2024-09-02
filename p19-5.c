#include<stdio.h>
void main()
{
    char a[100],b[100],c[100];
    int i,j,k,L1=0,L2=0;
    printf("a=");
    gets(a);
    printf("b=");
    gets(b);
     for(i=0;a[i]!='\0';i++)
    {
     L1++;
    }
    a[i]='\0';
     for(i=0,k=0;i<L1;i++,k++)
     {
         c[k]=a[i];
     }
    c[k]='\0';
      for(j=0;b[j]!='\0';j++)
    {
     L2++;
    }
    a[i]='\0';
     for(j=0,k=L1 ;j<L2;k++,j++)
     {
         c[k]=b[j];
     }
     c[k]='\0';
     printf("c=%s",c);
}
