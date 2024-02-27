#include<stdio.h>
void main()
{
	int min,max,a,b,c,d;
	printf("enter the lower limit of palindrome series");
	scanf("%d",&min);
	printf("enter the upper limit of palindrome series");
	scanf("%d",&max);
	for(a=min;a<=max;a++)
	{
		b=a;
		c=0;
		while(b>0)
		{
			d=b%10;
			c=(c*10)+d;
			b=b/10;
		}
		if(c==a){
			printf(" %d",c);
		}
	}
}
