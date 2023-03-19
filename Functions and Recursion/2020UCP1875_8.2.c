/*Write a function to find the factorial of a number using recursion.*/

#include <stdio.h>
int fact(int n)
{
	if(n>=1)
		return n*fact(n-1);
	else
		return 1;
}

int main()
{
	int n, ans;
	
	printf("Enter N: ");
	scanf("%d",&n);
	
	ans=fact(n);
	
	printf("Factorial of %d= %d",n,ans);
	
	return 0;
}
