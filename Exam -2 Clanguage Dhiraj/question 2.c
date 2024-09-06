#include<stdio.h>
#include<conio.h>

//WAP to find lowest value from 3 number using nested if else

void main()
{
	
	printf("Programme to find lowest value from 3 number using nested if else\n\n\n");
	int a,b,c;
	
	
	printf("Enter your 1st value:");
	scanf("%d",&a);
	printf("Enter your 2nd value:");
	scanf("%d",&b);
	printf("Enter your 3rd value:");
	scanf("%d",&c);
	
	
	
	if(a<b)//ab
	{
		if(a<c)//ac
		{
			printf("%d is minimum!",a);
		}
		else//ac
		{
			printf("%d is minimum!",c);
		}
	}
	else//ab
	{
		if(b<c)//bc
		{
			printf("%d is minimum!",b);
		}
		else//bc
		{
			printf("%d is minimum!",c);
		}
	}
	
	
		
}