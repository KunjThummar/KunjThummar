#include<stdio.h>

void main()
{
    int a=1000,b=2000;
    int *p=&a;
    int *q=&b;
    printf("a = %d\nb = %d",*p,*q);
    swap(p,q);
    printf("a = %d\nb = %d",*p,*q);
}
void swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
    printf("\nAccount balance is updated\n");
}
