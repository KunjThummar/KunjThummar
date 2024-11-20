#include<stdio.h>
void main()
{
    char *a;
    a=(char*)calloc(10,sizeof(char));
    printf("enter the string : ");
    gets(a);
    printf("Before realloc : %s\n",a);
    a=(char*)realloc(a,10*sizeof(char));
    printf("enter the string after realloc : ");
    gets(a);
    printf("after realloc : %s",a);
    free(a);
    printf("\n\nprogrammer : Kunj Thummar\nID : 24ce128");
}
