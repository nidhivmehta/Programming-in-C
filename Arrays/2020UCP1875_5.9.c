#include <stdio.h>
int main()
{
	int arr[100], i,n, pos, num;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	for(i=0; i<n ; i++)
	{	
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the location: \n");
    scanf("%d", &pos);
 
    printf("Enter the value to insert\n");
    scanf("%d", &num);
 
   for (i=n-1; i>=pos-1; i--)
      arr[i+1] = arr[i];
 
   arr[pos-1] = num;
 
   printf("Array is\n");
 
   for (i= 0; i<= n; i++)
      printf("%d\n", arr[i]);
	
}
