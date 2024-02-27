#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the no.to print star pattern");
    scanf("%d",&a);
    for(b=1;b<=(2*a)-1;b++)
    {
        for(c=1;c<=(2*a)-1;c++)
        {
            if(c==b||c==(2*a)-b)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

