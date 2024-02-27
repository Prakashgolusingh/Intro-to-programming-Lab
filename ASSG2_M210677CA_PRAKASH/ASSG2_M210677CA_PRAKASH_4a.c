/*Find two elements in an array such that their sum equals to ‘K’. (if more than one pair
exists, print the first pair only)*/
#include<stdio.h>
void main()
{
    int a[7]={42, 23, 15, 10, 16, 8,4},c,d,e,f=0;
    printf("enter no. to find sum pair");
    scanf("%d",&e);
    for(c=0;c<7;c++)
    {
        for(d=0;d<7;d++)
        {
            if(a[c]+a[d]==e)
            {
                printf("the pair is %d and %d",a[c],a[d]);
                f=1;
                break;
            }
        }
        if(f==1)
            break;
    }
    if(f==0)
        printf("no pair exist with sum %d",e);
}
