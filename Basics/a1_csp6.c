/*Suum and Average of 5 nums*/

#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum;
	float avg;
	
	printf("Enter five numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	sum=a+b+c+d+e;
	avg=sum/5.0;
	
	printf("The Sum is %d and Average is %.2f", sum, avg);
	
	return 0;
}
