/*program that finds the maximum number from 3 numbers.*/

#include<stdio.h>
int main()
{
	int a,b,c, max;
	
	printf("Enter 3 numbers:"); //ask user to input
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b&&a>c)
		max=a;
	else if(b>c)
		max=b;
	else
		max=c;
		
	printf("\nMaximum among 3 numbers is : %d",max);
	
	return 0;
}

