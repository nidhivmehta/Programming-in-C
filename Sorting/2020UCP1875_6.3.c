/*WAP to sort an array of size N using Bubble sort.*/

#include <stdio.h>
#define MAX 100
int main()
{
	int x[MAX], i,j,n,temp;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter next element: ");
		scanf("%d", &x[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	printf("\nElements in ascending order: \n");
	for(i=0; i<n; i++)
		printf("\n%d", x[i]);
}
