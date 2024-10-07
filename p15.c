#include <stdio.h>
void main()
{
    int arry[25] , E =0  , O= 0, N = 0 , P = 0 , i ;
    //E = even
    //O = odd
    //N = negative
    //P = positive
    printf("Enter any 25 numbers\n");
    for(i = 0 ; i<25 ; i++)
    {
        scanf("%d" , &arry[i]);
    }
    for(i=0 ; i<25 ; i++)
    {
        if(arry[i]>0)
        {
            P++;
        }
        else
        {
            N++;
        }
        if(arry[i]%2 == 0)
        {
            E++;
        }
        else
        {
            O++;
        }
    }
    printf("NUmber of even number is %d\n" , E);
    printf("NUmber of odd number is %d\n" , O);
    printf("NUmber of positive number is %d\n" , P);
    printf("NUmber of negative number is %d\n" , N);
}