#include <stdio.h>

int sum(int n)
{	
	int s, r;
	
	r=n%10;	//last digit
	n=n/1000; //first digit
	
	s=r+n;
	
	return s;
}

int main()
{
	int num, rem;
	
	printf("Enter a 4 digit number: ");
	scanf("%d", &num);
	
	printf("Sum of first and last digit: %d", sum(num));
}
