
//Write a C program for rotate an array by two position left.
#include<stdio.h>
void main()
{
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int b[a],c,*d,*e,f;
    for(c=0;c<a;c++)
    {
        printf("enter the %d th index element of array a",c);
        scanf("%d",&b[c]);
    }
    printf("your entered array is [");
    for(c=0;c<a;c++)
    {
        printf(" %d, ",b[c]);
    }
    printf("]");
    for(c=0;c<(a/2);c++)
    {
        d=&b[c];
        e=&b[a-c-1];
        f=*d;
        *d=*e;
        *e=f;
    }
    printf("\narray in reverse order is [");
    for(c=0;c<a;c++)
    {
        printf(" %d, ",b[c]);
    }
    printf("]");

}
