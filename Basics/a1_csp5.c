/*Swap two numbers without 3rd Var*/

#include<stdio.h>
int main()
{
	float a,b;
	
	printf("Enter values for a and b:");
	scanf("%f%f", &a,&b);
	
	printf("a=%.2f, b=%.2f\n", a, b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping a=%.2f and b=%.2f", a, b);
	
	return 0;
}

