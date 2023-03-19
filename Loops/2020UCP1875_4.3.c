#include<stdio.h>
int main()
{
	int i, num, sum=0;
	
	printf("Enter n: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		sum=sum+i;
	}
	printf("sum=%d", sum);
}
