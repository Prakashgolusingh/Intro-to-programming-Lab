#include<stdio.h>
void main()
{
	int a,b;
	printf("which year you wanna check leap year or not");
	scanf("%d",&a);
	b=a%4;
	if(b==0)
		printf("it is a leap year");
	else
		printf("it is a not leap year");
}
