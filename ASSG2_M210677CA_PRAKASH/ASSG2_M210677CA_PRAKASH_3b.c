//Write a C program for rotate an array by two position left.
#include<stdio.h>
void main()
{
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int b[a],c,d,e,f,g;
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
    for(d=1;d<3;d++)
    {
        e=b[0];
        for(c=0;c<a-1;c++)
        {
            b[c]=b[c+1];
        }
        b[a-1]=e;
    }
    printf("\narray after two left rotaying is [");
    for(c=0;c<a;c++)
    {
        printf(" %d, ",b[c]);
    }
    printf("]");

}
