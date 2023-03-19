/*Write a program to concatenate name, middle name, and surname into another string.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char str1[100],str2[100],str3[100],name[300];

	printf("Enter first name: ");
	gets(str1);
	
	printf("Enter middle name: ");
	gets(str2);
	
	printf("Enter last name: ");
	gets(str3);
	
	strcat(name,str1);
	strcat(name,str2);
	strcat(name,str3);
	
	printf("full name: %s",name);
}
