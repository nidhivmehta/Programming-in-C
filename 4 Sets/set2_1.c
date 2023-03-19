/*program to find simple interest*/

#include<stdio.h>
int main()
{
	int p,t;
	float r, si;
	
	printf("Enter values for Principal Rate and Time : ");
	scanf("%d%f%d",&p,&r,&t);
	
	si=(p*r*t)/100.0;
	
	printf("The Simple Interest is : %.2f", si);
	
	return 0;
}
