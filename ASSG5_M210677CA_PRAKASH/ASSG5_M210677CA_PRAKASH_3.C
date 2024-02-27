#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int difference_type(int[],int);
    void fn_1(int[],int,int);
    int N,i;
    printf("enter the no. of horses : ");
    scanf("%d",&N);
    int *arr;
    arr=(int*)malloc(N*sizeof(int));
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    fn_1(arr, 0, N - 1);
    printf("output : %d",difference_type(arr,N));
}
int fn_2(int arr[], int lower_limit, int higher_limit)
{
    int pivot = arr[higher_limit];
    int a,b,c;
    a = (lower_limit - 1);
    for (b = lower_limit; b < higher_limit; b++)
    {
        if (arr[b] <= pivot)
        {
            a++;
            c=arr[a];
            arr[a]=arr[b];
            arr[b]=c;
        }
    }
    c=arr[a+1];
    arr[a+1]=arr[higher_limit];
    arr[higher_limit]=c;
    return (a + 1);
}
void fn_1(int arr[], int lower_limit, int higher_limit)
{
    if (lower_limit < higher_limit)
    {
        int index = fn_2(arr, lower_limit, higher_limit);
        fn_1(arr, lower_limit, index - 1);
        fn_1(arr, index + 1, higher_limit);
    }
}

int difference_type(int arr[],int N)
{
    int b=arr[1]-arr[0],diff,a=1;
    for(a=0;a<N-1;a++)
    {
        diff=arr[a+1]-arr[a];
        if(diff<b)
            b=diff;
    }
    return b;
}
