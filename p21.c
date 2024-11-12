#include<stdio.h>
void main()
{
    int s1,s2,s3;
    scanf("side 1 : %d",&s1);
    scanf("side 2 : %d",&s2);
    scanf("side 3 : %d",&s3);
    if((s1+s2)>s3 & (s2+s3)>s1 & (s1+s3)>s2)
    {

    }
    else
    {
        printf("input is invalid");
    }
}