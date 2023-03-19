/*Write a function prime that returns 1 if its argument is prime and return 0 otherwise.*/

#include <stdio.h>
#include <conio.h>
int prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
		return 1;
}

int main()
{
	int n,result;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	result=prime(n);
	
	printf("%d",result);
	return 0;
}
