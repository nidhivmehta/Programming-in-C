/*Write a calculator program (add, subtract, multiply and divide). Prepare user defined functions
for each functionality.*/

#include <stdio.h>
#include<math.h>
void addition(int x,int y)
{
	int c= x+y;
	printf("ans=%d",c);
}

void subtraction(int x,int y)
{
	int c= x-y;
	printf("ans=%d",c);
}

void multiplication(int x,int y)
{
	int c= x*y;
	printf("ans=%d",c);
}

void division(int x,int y)
{
	float c=(float)x/y;
	printf("ans=%f",c);
}

int main()
{
	int a,b,n;
	
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	
	printf("\nEnter the desired operation number\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: addition(a,b);
			break;
		case 2: subtraction(a,b);
			break;
		case 3: multiplication(a,b);
			break;
		case 4: division(a,b);
			break;
		default: printf("Invalid option, run again");
	}
}
