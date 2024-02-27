#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int b,*array1,c,count=0,d;
    printf("Element of array :\n");
    array1=malloc(a*sizeof(int));
    for(c=0;c<a;c++)
    {
        scanf("%d",&array1[c]);
    }
    for(c=0;c<a;c++)
    {
        for(b=c+1;b<a;b++)
        {
            d=(array1[c])&(array1[b]);
            if(d>count)
                count=d;
        }
    }
    printf("%d",d);
}
