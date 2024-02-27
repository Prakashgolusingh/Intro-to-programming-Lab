#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter one of two no. which G.C.D you wanna know");
	scanf("%d",&a);
	printf("enter second of two no. which G.C.D you wanna know");
	scanf("%d",&b);
	for(c=1;c<=a && c<=b;c++)
	{
		if(a%c==0 && b%c==0)
			d=c;
	}
	printf("G.C.D of these two no. is %d",d);
} 
	
