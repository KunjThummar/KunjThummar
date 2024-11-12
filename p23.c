#include<stdio.h>
void main()
{
int s,i,sum,ft,st;
  printf("enter the number of series : ");
  scanf("%d",&s);
  printf("Enter the first turm :");
  scanf("%d",&ft);
  printf("Enter the second turm :");
  scanf("%d",&st);
  printf("%d %d ",ft,st);
  for(i=1;i<=s-2;i++)
  {
    sum=ft+st;
    ft=st;
    st=sum;
    printf("%d ",sum);
  }


}
