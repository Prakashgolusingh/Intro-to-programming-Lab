#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
int main()
{
    FILE *fp;
    fp=fopen("f1.txt","w");
    int size=100,i,j=0;
    printf("A_size  TIme(Random)  Time(Sorted)   Time(Reversed)\n");
    int time1[10], time2[10],time3[10];
    while( j<10)
    {
        int array[size];
        for(i=0;i<size;i++)
        {
            array[i]=rand();
        }
        clock_t start,end;
        start=clock();
        insertionSort(array, size);
        end=clock();
        time1[j]=(double)(end-start);

        start=clock();
        insertionSort(array, size);
        end=clock();
        time1[j]=(double)(end-start);

        start=clock();
        revinsertionSort(array, size);
        end=clock();
        time1[j]=(double)(end-start);
        fprintf(fp,"%d %d %d %d\n",size,time1[j],time2[j],time3[j]);
        printf("%d        %d          %d            %d\n",size,time1[j],time2[j],time3[j]);
        size+=1000;
        j++;
    }
}
void insertionSort(int array[], int size)
{
    for (int stp = 1; stp < size; stp++)
    {
        int index = array[stp];
        int a = stp - 1;
        while (index < array[a] && a >= 0)
        {
            array[a + 1] = array[a];
            --a;
        }
        array[a + 1] = index;
    }
}
void revinsertionSort(int array[], int size)
{
    for (int stp = 1; stp < size; stp++)
    {
        int index = array[stp];
        int a = stp - 1;
        while (index > array[a] && a >= 0)
        {
            array[a + 1] = array[a];
            --a;
        }
        array[a + 1] = index;
    }
}
