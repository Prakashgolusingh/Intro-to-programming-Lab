#include<stdio.h>
#include<time.h>
void main()
{
    FILE *fp;
    fp=fopen("f3.txt","w");
    int n;
    int fib(int);
    for( n=20;n<41;n++)
    {
        clock_t a,b,time;
        a=clock();
        fib(n);
        b=clock();
        time=(double)(b-a);
        fprintf(fp,"%d   %li\n",n,time);
        printf("%d  %li\n",n,time);
    }
}
int fib(int n)
{
    if(n<=1)
        return n;
    if(n>1)
        return (fib(n-1)+fib(n-2));
}
