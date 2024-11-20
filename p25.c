#include<stdio.h>
#include<string.h>
union book
{
 int accession_num;
 char title[10];
 char author[10];
 int amount;
 int flag;
}b1;
void main()
{
    int num,i;
    printf("enter the number of books : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
      printf("\naccession number : ");
      scanf("%d",&b1.accession_num);
      getchar();
      printf("Title : ");
      gets(b1.title);
      printf("Author : ");
      scanf("%s",&b1.author);
      printf("Amount : ");
      scanf("%d",&b1.amount);
      printf("Enter 1 if book is issued.\n");
      printf("Enter 0 if book is not issued.");
      printf("\nflag : ");
      scanf("%d",&b1.flag);
      if(b1.flag == 1)
        {
          printf("book is issued\n");
        }
      else
       {
          printf("book is not issued\n");
       }
    }
     printf("\n\nprogrammer : Kunj Thummar\nID : 24ce128");
}

