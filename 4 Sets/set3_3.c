/* program to find accurate interest values using explicit typecasting*/

#include<stdio.h>
int main()
{
	int p,r,n;
	float i;
	
	printf("Enter principal rate and time:");
	scanf("%d%d%d", &p,&r,&n);
	
	i=(float)p*r*n/100;
	
	printf("Simple Interest: %.2f", i);
	
	return 0;
}
