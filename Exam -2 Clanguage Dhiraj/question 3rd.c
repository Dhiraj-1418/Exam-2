#include<stdio.h>
#include<conio.h>

//WAP to print all natural number in reverse using while loop (n to 1)

void main()
{
	
	printf("Programme to print all natural number in reverse using while loop (n to 1)\n\n\n");
	
	int n,a=1;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	
	while(n>=1)
	{
		printf("%d ",n);
		n--;
		
	}
	
}