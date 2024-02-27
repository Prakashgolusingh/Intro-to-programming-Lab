#include<stdlib.h>
#include<stdio.h>
void main()
{
    int n,i,c,*array1,unlucky=0,lucky=0,b;
    printf("enter the size of memory to allocate");
    scanf("%d",&n);
    array1=malloc(n*sizeof(int));
    printf("enter the no.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        for(c=2;c<array1[i];c++)
        {
            if(array1[i]%c==0)
                unlucky++;
        }
        if(unlucky>2)
        {
            lucky ++;
            printf("RE-ARRANGE AGAIN");
            break;
        }
    }
    if(lucky==0)
    {
        printf("PREPARE FOR WAR");
    }
}
