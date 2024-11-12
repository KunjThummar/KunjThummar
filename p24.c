#include<stdio.h>
#include<string.h>
  struct book
  {
      char title[10];
      char author[10];
      float amount;
  }b1;
void function(struct book b1);
void main()
{
 strcpy(b1.title,"My book");
 strcpy(b1.author,"Kunj");
 b1.amount=2000;
 function(b1);
}
void function(struct book b1)
{
    printf("Book's title is : %s\n",b1.title);
    printf("Book's auther is : %s\n",b1.author);
    printf("Book's amount is %.2f",b1.amount);
}
