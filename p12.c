//PROGRAMMER : KUNJ THUMMAR
//AIM :TO compute the total budget allocated for all even days
#include<stdio.h>
void main()
{
    int D,B=0,R=200;
    //D=days,B=budget,R=rate
    for(D=2;D<=100;D=D+2)
        // or D%2==0
    {
        B=B+200;
    }
    printf(" The total budget allocated for all even-day is %d Rs.",B);
}
