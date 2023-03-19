/*program that checks if the input number is positive, negative, or zero.*/

#include <stdio.h>
int main()
{
	int num;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	if(num>0)
		printf("Positive number");
	else if(num<0)
		printf("Negative number");
	else if(num==0)
		printf("Zero");
		
	return 0;
}
