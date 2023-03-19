/*program that checks whether the entered year is a leap year or not*/

#include <stdio.h>
#include <math.h>
int main()
{
	int year;
	
	printf("Enter the year: \n");
	scanf("%d", &year);
	
	if(year%400==0 || year%4==0)
		printf("Leap Year\n");
		
	else if(year%100==0)
		printf("Not Leap Year\n");
		
	else
		printf("Not Leap Year");
		
	return 0;
}
