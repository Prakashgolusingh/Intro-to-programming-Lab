#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int maxSetBit(int);
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int array1[a],c,d,e;
    printf("Element of array :\n");
    for(c=0;c<a;c++)
    {
        scanf("%d",&array1[c]);
    }
    printf("\n position of the element in the array whose maxSetbit to found :");
    scanf("%d",&d);
    e=array1[d-1];
    printf("%d",maxSetBit(e));
}
int maxSetBit(int a)
{
    int b=1,count1=0,count=0,c,d,e;
    for(b=1;b<=a;b++)
    {
        e=b;
        while(e>0)
        {
            if(e%2!=0)
            {
                count++;
            }
            e=(e/2);

        }
        if(count>count1)
        {
            c=b;
            count1=count;
        }
        count=0;
    }
    return(c);
}

