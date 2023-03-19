#include <stdio.h>
int main()
{
	int i, arr[100], n;
	
	printf("Enter size of an array:");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	
	int rev[100];
	for(i=0; i<n; i++)
	{
		rev[i]=arr[n-1-i];
	}
	
	printf("Reverse Array:");
	for(i=0; i<n; i++)
	{
		printf("%d ", rev[i]);
	}
	
}
