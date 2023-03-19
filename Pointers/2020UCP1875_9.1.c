/*Find the smallest number in an array using pointers.*/

#include<stdio.h>  
#define max 100
  
int main()  
{  
	int a[max], i, n, *small;  
    
    printf("Enter no of elements: ");
    scanf("%d", &n);
  
    printf("Enter %d integer numbers\n", n);  
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);  
  
    small = &a[0];  
  
    for(i = 1; i < n; i++)  
    {  
        if( *(a + i) < *small)  
            *small = *(a + i);  
    }  
  
    printf("Smallest Element In The Array: %d\n", *small);  
  
    return 0;  
}  

