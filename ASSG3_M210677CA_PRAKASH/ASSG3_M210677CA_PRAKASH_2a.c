#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*array1,lucky=0,unlucky=0;
    printf("enter the size of army");
    scanf("%d",&n);
    array1=malloc(n*sizeof(int));
    printf("enter the no. of weapon they have");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array1[i]%2==0 && array1[i]>0)
        {
            lucky++;
        }
        else
        {
            unlucky++;
        }
    }
    if(lucky>unlucky)
        printf("READY FOR BATTLE");
    else
        printf("NOT READY");
}
