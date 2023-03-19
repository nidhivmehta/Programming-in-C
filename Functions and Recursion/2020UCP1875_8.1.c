/*Write a function to add first N numbers.*/

#include <stdio.h>
int sum(int n)
{
	int i,add=0;
	for(i=1;i<=n;i++)
	add=add+i;
	
	return add;
}

int main()
{
	int add, N;
	printf("enter N=");
	scanf("%d",&N);
	
	add=sum(N);
	
	printf("sum=%d",add);
}
