#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    char reversechar(char[],int);
    char a[100];
    printf("enter the string");
    scanf("%[^\n]s",a);
    reversechar(a,strlen(a));
}
char reversechar(char a[],int b)
{
    b--;
    if(b>=0)
    {
        printf("%c",a[b]);
        reversechar(a,b);
    }
}
