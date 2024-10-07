#include <stdio.h>
void main()
{
    int n , j , i , arry[10] , t ;
    printf("Enter the number of item (1-10)\n");
    scanf("%d" , &n);
    printf("Enter the price of items\n");
    for(i=0 ; i<n ; i++) 
    {
        printf("The price of %dst item: " , i+1);
        scanf("%d" ,&arry[i]);
    }
     for(int i = 0 ; i<=4 ; i++)
    {
        for(j = i+1 ; j<=4 ; j++)
        if(arry[i]>arry[j])
        {
            t = arry[i];
            arry[i]=arry[j];
            arry[j]=t;
        }
    }
   for(int i = 0 ; i<n ; i++)
     {
         printf("%dst item =%d\n" ,i+1, arry[i]);
     } 
}
//programer : Kunj Thummar
//ID : 24ce128