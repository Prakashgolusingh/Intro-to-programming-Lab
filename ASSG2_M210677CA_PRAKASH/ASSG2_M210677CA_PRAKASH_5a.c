//program to sort an array using insertion sort
#include<stdio.h>
void main()
{
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int b[a],c,d,e;
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
    for(c=1;c<a;c++)
    {
        d=c-1;
        e=b[c];
        while(d>=0 && b[d]>e)
        {
            b[d+1]=b[d];
            d--;
        }
        b[d+1]=e;
    }
    printf("\nyour entered array after sorting is [");
    for(c=0;c<a;c++)
    {
        printf(" %d, ",b[c]);
    }
    printf("]");
}
