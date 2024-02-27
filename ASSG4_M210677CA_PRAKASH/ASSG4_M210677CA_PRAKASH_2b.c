#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count =0;
int *no=&count;
void main()
{
    int size,i;
    printf("enter the size of array");
    scanf("%d",&size);
    int RecursiveBinarySearch(int[],int,int,int);
    int *array,a,b,c;
    printf("enter array of size %d",size);
    array=malloc(size*sizeof(int));
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the element to search");
    scanf("%d",&a);
    printf("index : %d",RecursiveBinarySearch(array,0,size-1,a));
    printf("\nno of calls : %d",*no);
}
int RecursiveBinarySearch(int array[],int lower_bound,int upper_bound,int k)
{
    int a,b;
    *no=*no+1;
    if(lower_bound>upper_bound)
        return(-1);
    int mid =(lower_bound+upper_bound)/2;
    if(k==array[mid])
        {
            for(a=lower_bound;a<=mid;a++)
            {
                if(array[a]==array[mid])
                {
                    return (a);
                    break;
                }
            }
        }
    if(k<array[mid])
    {
        RecursiveBinarySearch(array,lower_bound,mid-1,k);
    }
    if(k>array[mid])
    {
        RecursiveBinarySearch(array,mid+1,upper_bound,k);
    }
}
