//program to swap two number using pointer
#include<stdio.h>
void main()
{
    int a,b,*c,*d,e;
    printf("enter the first no");
    scanf("%d",&a);
    printf("enter the second no");
    scanf("%d",&b);
    c=&a;
    d=&b;
    printf("a=%d\nb=%d\n",*c,*d);
    e=*c;
    *c=*d;
    *d=e;
    printf("a=%d\nb=%d",*c,*d);
}
