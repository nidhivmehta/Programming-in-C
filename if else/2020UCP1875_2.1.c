#include<stdio.h>
main()
{
	int num;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	if(num%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
}
