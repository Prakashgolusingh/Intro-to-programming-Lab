#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count =0;
int *no=&count;
int main()
{
    void print(int[],int);
    void merge_sort(int[],int,int);
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int *A;
    A=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    merge_sort(A, 0, n - 1);
    printf("Sorted array: \n");
    print(A, n);
    printf("no of comparision : %d",*no);
}

void merge(int A[], int p, int q, int r)
{
    int a = q - p + 1;
    int b = r - q;
    int A1[a], A2[b];
    for (int i = 0; i < a; i++)
    {
        A1[i] = A[p + i];
    }
    for (int j = 0; j < b; j++)
    {
        A2[j] = A[q + 1 + j];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i < a && j < b)
    {
        if (A1[i] <= A2[j])
        {
            A[k] = A1[i];
            *no=*no+1;
            i++;
        }
        else
        {
            A[k] = A2[j];
            *no=*no+1;
            j++;
        }
        k++;
    }
    while (i < a)
    {
        A[k] = A1[i];
        *no=*no+1;
        i++;
        k++;
    }
    while (j < b)
    {
        A[k] = A2[j];
        *no=*no+1;
        j++;
        k++;
    }
}
void merge_sort(int A[], int l, int r) {
    if (l < r)
    {
        int m = l + (r - l) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m + 1, r);
        merge(A, l, m, r);
    }
}
void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    printf("%d ", A[i]);
    printf("\n");
}
