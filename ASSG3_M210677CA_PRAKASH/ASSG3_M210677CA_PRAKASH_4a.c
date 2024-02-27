#include<stdio.h>
void main()
{
    int SmallestIntegerForMultipleOf10(int);
    int N,Result;
    printf("enter the positive ineger : ");
    scanf("%d",&N);
    Result=SmallestIntegerForMultipleOf10(N);
    if(Result<30)
        printf("output : %d",Result);
    else
        printf("output : not possible");
}
int SmallestIntegerForMultipleOf10(int N)
{
    int b=0;
    if(N>0)
    {
        while((N%10)!=0 && b<30)
        {
            N*=2;
            b++;
        }
        return(b);
    }
}
