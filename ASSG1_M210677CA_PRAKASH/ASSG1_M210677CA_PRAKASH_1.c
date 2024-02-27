#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the no. which you wanna check prime or not");
	scanf("%d",&a);
	for (b=2;b<a;b++)
		{
		if(a%b==0)
			break;
		}
	if(a==b)
		printf("it is a prime");
	else
		printf("it is not a prime");
}

