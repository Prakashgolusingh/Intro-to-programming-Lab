#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int super_integer(int);
    int a;
    printf("inter the no : ");
    scanf("%d",&a);
    printf("output : %d",super_integer(a));
}
int super_integer(int a)
{
    if(a<0)
        a=a*(-1);
    int b=0;
    if((a/10)==0)
        return a;
    else
   {
        while(a>0)
        {
            b=b+a%10;
            a=a/10;
        }
        return super_integer(b);
   }
}
