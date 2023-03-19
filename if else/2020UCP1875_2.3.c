#include<stdio.h>
int main()
{
	float a,b,c,side;
	
	printf("Enter 3 sides of a triangle:");
	scanf("%f%f%f", &a,&b,&c);
	
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("Valid Triangle");
		
		if(a==b &&b==c)
		{
			printf("\nEquilateral Triangle");
		}
		else if(a==b || b==c || c==a)
		{
			printf("\nIsosceles Triangle");
		}
		else
		{
			printf("\nScalene Triangle");
		}
		if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		{
			printf("\nRight Triangle");
		}
	}
	else
	{
		printf("Invalid Triangle");
	}
}
