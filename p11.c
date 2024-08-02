//PROGRAMER : KUNJ THUMMAR
//AIM : TO MAKE MATCHSTICK GAME
#include<stdio.h>
void main()
{
   int X=21,U,C,a;
   printf("you can pick up maximum 4 matchstick.\n");

   for(a=0;a<=21;a=a+U+C)
   {
  A: printf("enter the number of matchstick:");
   scanf("%d",&U);
   if(U>4)
       {
       printf("invalid input.\n");
       goto A;
       }
   else
    {
   printf("\nyou have pick up %d matchstick.\n",U);
   C=5-U;
   printf("computer pick up %d matchstick.\n",C);
   printf("you pick up last matchstick.\n");
   printf("you lost the game.");}
   }
}
