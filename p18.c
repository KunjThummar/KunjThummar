#include<stdio.h>
//#include<string.h>
void main()
{
   char n[50][25],t[25];
   int ns,i,j;
   scanf("%d",&ns);
   for(i=0;i<ns;i++)
   {
      scanf("%s",&n[i]);
   }
   for(i=0;i<(ns-1);i++)
     {
       for(j=i+1;j<ns;j++)
          {
               if(strcmp(n[i],n[j])>0)
                {
                  strcpy(t,n[i]);
                  strcpy(n[i],n[j]);
                  strcpy(n[j],t);
                }
          }

     }
     printf("\n\n\n");
   for(i=0;i<ns;i++)
   {
       printf("%s\n",n[i]);
   }
}
