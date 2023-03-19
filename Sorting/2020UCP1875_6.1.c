
/*WAP to sort an array of size N using Insertion sort.*/

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
		for(j=i+1; j<n; j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("\nElements in ascending order: \n");
	for(i=0; i<n; i++)
		printf("\n%d", x[i]);
}
