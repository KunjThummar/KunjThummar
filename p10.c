#include<stdio.h>
void main()
{
    int T,x;
    printf("enter the time:");
    scanf("%d",&T);
    for(x=T;x>=0;x=x-1)
      {
        sleep(1);
        printf("%d\r",x);
      }
      printf("countdown completed.");
}
//PROGRAMER :KUNJ THUMMAR
//sleep is use for to delay program for some time.
// \r is take our output at one place
//AIM : Make Timer
