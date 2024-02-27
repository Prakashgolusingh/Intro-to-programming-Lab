#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int SumOfProduct(int);
    int a,b;
    printf("input : ");
    scanf("%d",&a);
    printf("putput : %d",SumOfProduct(a));
}
int SumOfProduct(int a)
{
    int b,count1=0,c,d;
    for(b=2;b<=a || a>1;b++)
    {
        while(a%b==0)
        {
            count1+=b;
            a/=b;
        }
    }
    return(count1);
}

