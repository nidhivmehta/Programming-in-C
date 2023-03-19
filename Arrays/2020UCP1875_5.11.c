#include <stdio.h>
int main()
{
	int n, count=0,i,j;
	int arr[100], temp[100];
	
	printf("Enter array size: ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < n; i++)
	{
	    for (j = 0; j < count; j++)
	    {
	    	if (arr[i] == temp[j])
	        	break;
	    }
	    if (j == count)
	    {
	    	temp[count] = arr[i];
	    	count++;
	    }
	}
	
	printf("\nArray After  Removing Duplicates: ");
	for (int i = 0; i < count; i++)
		printf("%d", temp[i]);
	
	return 0;
}


