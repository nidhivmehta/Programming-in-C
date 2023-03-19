/*Write a program in C to calculate the sum of numbers from 1 to n using recursion.*/

#include <stdio.h>
int sum(int n)
{
	if(n>0)
	{
		return n+sum(n-1);
	}
}
int main()
{
	int n,ans;
	
	printf("Enter N: ");
	scanf("%d",&n);
	
	ans=sum(n);
	
	printf("%d",ans);
	return 0;
}
