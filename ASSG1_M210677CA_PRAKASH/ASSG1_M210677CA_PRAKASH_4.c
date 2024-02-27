#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the no to check perfect no.");
	scanf("%d",&a);
	b=0;
	for(c=1;c<=a-1;c++)
	{
		if(a%c==0)
			b=b+c;
	}
	if(b==a)
	{
		printf("%d is a perfect no. with divisor",a);
		for(c=1;c<=a-1;c++)
		{
			if(a%c==0)
			printf(" %d,",c);
		}
	}
		
	else
		printf("not a perfect no.");
}
