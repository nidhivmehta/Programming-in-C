/*Program to perform operations on given 2 nums*/

#include<stdio.h>
int main()
{
	int num1, num2, add, sub, mult;
	float div;
	
	printf("Enter two numbers:");
	scanf("%d%d", &num1, &num2);
	
	add=num1+num2;
	sub=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	
	printf("Sum=%d\nDifference=%d\nProduct=%d\nQuotient=%.2f",add,sub,mult,div);
	
	return 0;
	
}
