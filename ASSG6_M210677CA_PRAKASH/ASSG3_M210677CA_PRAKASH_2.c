#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    FILE *fp;
    fp=fopen("f2.txt","w");
    void fn_1(int[],int,int);
    void refn_1(int[],int,int);
    int size=100,i,j=0;
    printf("A_size  TIme(Random)  Time(Sorted)   Time(Reversed)\n");
    int time1[10], time2[10],time3[10];
    while( j<10)
    {
        int arr[size];
        for(i=0;i<size;i++)
        {
            arr[i]=rand();
        }
        clock_t start,end;
        start=clock();
        fn_1(arr, 0, size- 1);
        end=clock();
        time1[j]=(double)(end-start);

        start=clock();
        fn_1(arr, 0, size - 1);;
        end=clock();
        time1[j]=(double)(end-start);

        start=clock();
        refn_1(arr, 0, size - 1);
        end=clock();
        time1[j]=(double)(end-start);
        fprintf(fp,"%d        %d         %d            %d\n",size,time1[j],time2[j],time3[j]);
        printf("%d        %d          %d            %d\n",size,time1[j],time2[j],time3[j]);
        size+=1000;
        j++;
    }
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
int refn_2(int arr[], int lower_limit, int higher_limit)
{
    int pivot = arr[higher_limit];
    int a,b,c;
    a = (lower_limit - 1);
    for (b = lower_limit; b < higher_limit; b++)
    {
        if (arr[b] >= pivot)
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
void refn_1(int arr[], int lower_limit, int higher_limit)
{
    if (lower_limit < higher_limit)
    {
        int index = refn_2(arr, lower_limit, higher_limit);
        refn_1(arr, lower_limit, index - 1);
        refn_1(arr, index + 1, higher_limit);
    }
}

