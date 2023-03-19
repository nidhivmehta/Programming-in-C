/*Write a program in C to Print Fibonacci Series using recursion.*/

#include<stdio.h>
#include <conio.h>
int fib(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
		fib(n-1);
	}
}

int main()
{
	int n,ans;
	
	printf("Enter N: ");
	scanf("%d",&n);
	
	printf("0 1 ");
	
	fib(n-2);
	return 0;
}
