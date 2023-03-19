#include<stdio.h>
int main()
{
	int n, i, arr[100];
	int even_count = 0, odd_count = 0;
 
	printf("Enter the Size of an Array :  ");
	scanf("%d", &n);
	 
	for(i=0; i<n ; i++)
	{	
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	  
	for(i=0; i<n ; i ++)
	{
		if(arr[i] % 2 == 0)
	    {
	    	even_count++;
	   	}
	    else
	    {
	    	odd_count++;
	    }
	}
	  
	printf("Total Even Numbers = %d ", even_count);
	printf("\nTotal Odd Numbers = %d ", odd_count);
	
	return 0;
}
