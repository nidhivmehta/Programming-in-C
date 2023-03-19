/*program to convert Celsius to Fahrenheit temperature and vice versa*/

#include<stdio.h>
int main()
{
	int num ;
	float c, f; //initializing all variables
	
	printf("press 1 to convert Celsius to Fahrenheit \npress 2 to convert Fahrenheit to Celsius\n"); //ask user to input
	scanf("%d",&num);
	
	printf("\nenter the temperature\n");
	
	if(num==1)
	{
		scanf("%f",&c);
		f=1.8*c+32;
		printf("\ntemp in Fahrenheit is %.2f",f);
	}
	
	else if(num==2)
	{
		scanf("%f",&f);
		c=(f-32)/1.8;
		printf("\ntemp in Celsius is %.2f",c);
	}
	
	else
	{
		printf("Invalid integer please try again");
	}
	
	return 0;
}
