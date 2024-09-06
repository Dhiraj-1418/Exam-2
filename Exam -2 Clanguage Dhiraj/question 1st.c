#include<stdio.h>
#include<conio.h>
//WAP to find the area of below formula using basic ways(ans=a2+2*a*b+b2	)

void main()
{
	printf("Programme to find the area of below formula using basic ways(ans=a2+2*a*b+b2)\n\n\n");
	
	int a,b,square;
	
	printf("Enter your value of A:");
	scanf("%d",&a);
	printf("Enter your value of B:");
	scanf("%d",&b);
	
	
	square=(a*a)+(2*a*b)+(b*b);
	
	printf("The answer of (%d+%d)^2 is :%d",a,b,square);
	
}