#include<stdio.h>

float cost(float a, float b)
{
	float cp;
	cp=(a-b)/15;
	return cp;
}
int main()
{
	float sp,profit, c;
	
	printf("enter total selling price: ");
	scanf("%f", &sp);
	
	printf("enter profit: ");
	scanf("%f", &profit);
	
	c=cost(sp,profit);
	
	printf("cost price is %.2f",c);
}
