#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int fib(int);
    int a,b,sum=0;
    printf("required no of calories : ");
    scanf("%d",&a);
    printf("output : %d",fib(a+1));
}
int fib(int a)
{
    if(a==1||a==2)
        return 1;
    return(fib(a-1)+fib(a-2));
}
