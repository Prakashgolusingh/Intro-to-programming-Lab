#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int n,i,top=-1;
void main()
{
    printf(" the size of array : ");
    scanf("%d",&n);
    int *array,stack[n];;
    array=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    if (array[0]==0)
        printf("invalid input\n");
    else
    {
        for(i=0;i<n;i++)
        {
            if(array[i]==0)
                pop();
            else
            {
                push();
                stack[top]=array[i];
            }
        }
        printf("your stack is : ");
        for(i=0;i<=top;i++)
            printf(" %d ",stack[i]);
        printf("\nenter the pair you wanna search\n");
        int a[2];
        for(i=0;i<2;i++)
            scanf("%d",&a[i]);
        int b=-1;
        for(i=0;i<=top;i++)
        {
            if((a[0]==stack[i]&&a[1]==stack[i+1] )||(a[1]==stack[i]&&a[0]==stack[i+1]))
            {
                printf("Yes");
                break;
            }
            else
                b++;
            if(b==top)
                printf("NO");
        }
    }
}
void pop()
{
    if(top==-1)
        printf("stack is empty\n");
    else
    {
        top--;
    }
}
void push()
{
    top++;
}
