/*Write a program to count total words in a text*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char string[100];
	int length,i,count=0;
	
	printf("Enter string: ");
	gets(string);
	
	length=strlen(string);
	for(i=0;i<length;i++)
	{
		if(string[i]==' ')
			count++;
	}
	
	printf("Number of words in the string: %d",1+count);
}
