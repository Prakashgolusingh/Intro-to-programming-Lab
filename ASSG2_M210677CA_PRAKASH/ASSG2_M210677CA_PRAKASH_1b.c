/*array of size n containing only 0s, 1s, and 2s; sort the array in ascending
order.*/
#include<stdio.h>
void main()
{
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int b[a],c,d=0,e,f;
    for(c=0;c<a;c++)
    {
        printf("enter the %d th index element less than 2",c);
        scanf("%d",&b[c]);
        if(b[c]>2)
        {
            printf("entered no. is invalid");
            break;
        }
    }
    printf("original array is");
    for(c=0;c<a;c++)
        printf("%d ,",b[c]);
    for(c=0;c<a;c++)
    {
        for(e=0;e<a-c;e++)
        {
            if(b[e]>b[e+1])
            {
                f=b[e];
                b[e]=b[e+1];
                b[e+1]=f;
                d=1;
            }
        }
        if(d==0)
            break;
    }
    printf("\narray in ascending order is");
    for(c=0;c<a;c++)
        printf("%d ,",b[c]);
}
