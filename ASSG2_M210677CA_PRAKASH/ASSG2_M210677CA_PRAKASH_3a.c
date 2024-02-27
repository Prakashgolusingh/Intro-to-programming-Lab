//a C program for searching an element k in an unsorted array
#include<stdio.h>
void main()
{
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int b[a],c,d,e=0;
    for(c=0;c<a;c++)
    {
        printf("enter the %d th index element of array a",c);
        scanf("%d",&b[c]);
    }
    printf("your entered array is[");
    for(c=0;c<a;c++)
    {
        printf("%d, ",b[c]);
    }
    printf("]");
    printf("\nenter the element to search");
    scanf("%d",&d);
    for(c=0;c<a;c++)
    {
        if(b[c]==d)
        {
            printf("\nelement is found at index%d",c);
            e=1;
            break;
        }
    }
    if(e==0)
        printf("\nelement is not found");

}
