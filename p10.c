#include<stdio.h>
void main()
{
    int T,x;
    printf("enter the time:");
    scanf("%d",&T);
    for(x=T;x>=0;x=x-1)
      {
        sleep(1);
        printf("%2d\r",x);
      }
      printf("countdown completed.");
}
//PROGRAMER :KUNJ THUMMAR
//sleep is use for to delay program for some time.
// \r is use to take our output at one place
// "%2d" is use to take two space 
//AIM : Make Timer
