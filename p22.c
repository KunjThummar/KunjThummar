#include<stdio.h>
void m(int[],int);
float avg(int,int);
int highest(int[],int);
int lowest(int[],int);
void main()
{
 int num,total=0,i,L,H;
 float average;
 printf("Enter the number of student : ");
 scanf("%d",&num);
 int marks[num];
 m(marks,num);
 for(i=0;i<num;i++)
  {
    total=total+marks[i];
  }
 printf("Total Marks : %d",total);
 average = avg(total,num);
 printf("\nAverage Marks : %f\n",average);
 H=highest(marks,num);
 printf("Highest Marks : %d\n",H);
 L=lowest(marks,num);
 printf("Lowest Marks : %d\n",L);
}
void m(int marks[], int num)
{
    int i;
    printf("\nEnter the ccp marks of students :");
    for(i=0;i<num;i++)
    {
        printf("\nStudent %d : ",i+1);
        scanf("%d",&marks[i]);
    }

}
float avg(int total,int num)
{
    float a;
    a=(float)total/num;
    return a;
}
int highest(int marks[],int num)
{
    int max=marks[0],i;
    for(i=0;i<num;i++)
    {
         if(marks[i]>max)
         {
            max=marks[i];
         }

    }
   return max;
}
int lowest(int marks[],int num)
{
     int min=marks[0],i;
    for(i=0;i<num;i++)
    {
         if(marks[i]<min)
         {
            min=marks[i];
         }
    }
   return min;
}