#include <stdio.h>
#include <limits.h>
int main() 
{
	int i,n;
	int arr[100];
	printf("Enter n:");
	scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
	    printf("Enter number%d : ", i + 1);
	    scanf("%d", &arr[i]);
  	}

	int minNo=INT_MAX;
	
	for(i=0; i<n; i++)
	{
		if(arr[i]<minNo)
			minNo=arr[i];
	}


printf("Smallest element = %d", minNo);

    return 0;
}

