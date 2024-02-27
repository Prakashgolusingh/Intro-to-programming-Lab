//Find the smallest element in the array
#include<stdio.h>
void main()
{
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int b[a],c,d;
    for(c=0;c<a;c++)
    {
        printf("enter the %d th index element of array a",c);
        scanf("%d",&b[c]);
    }
    d=b[0];
    for(c=0;c<a;c++)
    {
        if(d>b[c])
            d=b[c];
    }
    printf("the smallest no. of the array is %d",d);
}
