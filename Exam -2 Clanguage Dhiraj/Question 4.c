#include<stdio.h>
#include<conio.h>

//WAP to count the number of digits in a number  using for loop

void main()
{
	
	printf("Programme to count the number of digits in a number  using for loop\n\n\n");
	
	
	int n,count;

	printf("Enter n:");
	scanf("%d",&n);
	
	for(count=0; n>0; count+=1)
	{
		n=n/10;
		
	}
	printf("Number of digit are :%d",count);

	

	
}