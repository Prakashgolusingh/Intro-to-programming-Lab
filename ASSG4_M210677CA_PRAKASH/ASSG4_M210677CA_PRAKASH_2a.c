#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count =0;
int *no=&count;
void main()
{
    int RecursiveBinarySearch(int[],int,int,int);
    int array[7]={12,35,50,59,60,73,90},a,b,c;
    printf("enter the element to search");
    scanf("%d",&a);
    printf("index : %d",RecursiveBinarySearch(array,0,6,a));
    printf("\nno of calls : %d",*no);
}
int RecursiveBinarySearch(int array[],int lower_bound,int upper_bound,int k)
{
    *no=*no+1;
    if(lower_bound>upper_bound)
        return(-1);
    int mid =(lower_bound+upper_bound)/2;
    if(k==array[mid])
        return (mid);
    if(k<array[mid])
    {
        RecursiveBinarySearch(array,lower_bound,mid-1,k);
    }
    if(k>array[mid])
    {
        RecursiveBinarySearch(array,mid+1,upper_bound,k);
    }
}
