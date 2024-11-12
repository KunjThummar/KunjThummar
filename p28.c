#include<stdio.h>
void main()
{
   int marks[10]={34,56,78,98,12,31,67,75,91,23};
   int *m=&marks;
   int i,first=0,pass=0,fail=0,distinction=0;
   for(i=0;i<10;i++)
   {
       if(*m>=70)
       {
           distinction++;
       }
       else if(*m>=60)
       {
            first++;
       }
       else if(*m>=40)
       {
           pass++;
       }
       else
       {
           fail++;
       }
        m++;
   }
   printf("distinction = %d\nfirst class = %d\npass = %d\nfail = %d",distinction,first,pass,fail);


}
