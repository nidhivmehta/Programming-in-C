/*Write a program to print half of a given string.*/

#include<stdio.h>
#include <string.h>
int main()
{
	char string[100],left[100],right[100];
	int length, i,k;

	printf("Enter a string: ");
	gets(string);
	
	length=strlen(string);
	
	for(i=0;i<length/2;i++)
	{
		left[i]=string[i];
	}
	
	left[i]='\0';
	for(i=length/2,k=0;i<=length;i++,k++)
	{
		right[k]=string[i];
	}
	
	right[k]='\0';
	
	printf("left half string: %s \n",left);
	printf("right half string: %s \n",right);
	
}
