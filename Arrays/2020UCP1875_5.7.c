#include<stdio.h>
int main()
{
	int n, i, arr[100];
 
	printf("Enter the Size of an Array :  ");
	scanf("%d", &n);
	 
	for(i=0; i<n ; i++)
	{	
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Even places/index are : ");
	for(i=0; i<n ; i ++)
	{
		if(i % 2 == 0)
	    	printf("%d ", arr[i]);
	}
	
	printf("\nOdd places/index are : ");
	for(i=0; i<n ; i ++)
	{
		if(i % 2 != 0)
	    	printf("%d ", arr[i]);
	}	    
}
