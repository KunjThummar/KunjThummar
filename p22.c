#include<stdio.h>
float marks(int[],int);
float avg(int[],int);
void main()
{
    int N;
    int i,j,T;
    float average;
    printf("ENTER THE NUMBER OF STUDENT : ");
    scanf("%d",&N);
    int M[N];
    printf("Average Marks : %f",marks(M,N));
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
        if(M[i]<M[j])
            {
                T=M[i];
                M[i]=M[j];
                M[j]=T;            }
        }
    }
    printf("\nHighest Marks : %d",M[0]);
    printf("\nLowest Marks : %d",M[N-1]);
    printf("\n\nProgrammer : Kunj Thummar \nID : 24ce128");
}
 float marks(int A[],int n)
    {
        float a;
        int j;
        for(j=0 ; j<n ; j++)
        {
            printf("Student %d:",j+1);
            scanf("%d",&A[j]);
        }
        a=avg(A,n);
        return a;
    }
    float avg(int B[],int num)
    {
        float T=0;
        int x;
        for(x=0 ; x<num ; x++)
        {
            T=T+B[x];
        }
        printf("%d",T);
        T=T/num;
        return T;
            }