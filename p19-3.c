#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,L1=0,L2=0,j;
    printf("a=");
    gets(a);
    printf("b=");
    gets(b);
     for(i=0;a[i]!='\0';i++)
    {
     L1++;
    }

     for(j=0;b[j]!='\0';j++)
    {
     L2++;
    }

    if(L1!=L2)
    {
      printf("the string are different.");
    }
    else
    {
        for(i=0,j=0;i<L1,j<L2;i++,j++)
        {
            if(a[i]!=b[j])
            {
                printf("the string are different.");
                break;
            }
        }
        if(a[i]=='\0')
            {
                printf("the string are same.");
            }
    }

}
