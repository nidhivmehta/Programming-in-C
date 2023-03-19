#include <stdio.h>
int main() 
{
    int i,n;
    int arr[100];
    int first, last;
    int sum;
    printf("Enter n:");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    first = arr[0];
    last = arr[n-1];
    sum = first + last;
    printf("Sum of first and last number is: %d", sum);
}

