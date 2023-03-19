/*program to find the maximum from given two nos. using conditional operator.*/

#include<stdio.h>
int main()
{
	int num1, num2, max;
	
	printf("Enter 2 numbers:");
	scanf("%d%d", &num1, &num2);
	
	max = (num1 > num2) ? num1 : num2;  
   
    printf("%d is Maximum\n", max);  
   
    return 0;  
}
