/*Write a function power that computes X raised to the power Y for integer x and y returns
double type value.*/

#include <stdio.h>
#include<math.h>
double raised(int x,int y)
{ 
	int c=pow(x,y);
	return c;
}

int main()
{
	int x, y; 
	double power;
	
	printf("enter x and y:");
	scanf("%d %d",&x,&y);
	
	power=raised(x,y);
	
	printf("factorial=%lf",power);
}
