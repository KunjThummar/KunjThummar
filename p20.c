#include<stdio.h>
void p();
int ns();
void g(int[],int);
int avg(int,int);
void main()
{
    int N,i,m[25],o=1,sum=0;
    float A;
   p();
   printf(" enter the number of student=");
   N=ns();
   printf("\nstudent grades:\n");
   for(i=0;i<N;i++)
   {
    printf("enter the grade for student %d =",i+1);
    scanf("%d",&m[i]);
   }
   g(m,N);
   printf("\n");
    for(i=0;i<N;i++)
    {
    sum=sum+m[i];
    A=avg(sum,N);

    }
printf("%f",A);
}
void p()
{
    printf("Welcome to the Charusat University!\n");
    printf("===================================\n");
}
int ns()
{
    int a;
    scanf("%d",&a);
    return a;
}
void g(int Grade[],int num)
{
    int j;
    for(j=0;j<num;j++)
    {
   printf("Student %d: Grade = %d\n",j+1,Grade[j]);
    }
}
int avg(int a,int d)
{
    int ans;
    ans=a/(float)d;
    return ans;
}

