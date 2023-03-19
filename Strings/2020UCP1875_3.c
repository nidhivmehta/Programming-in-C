/*3. Write a program to find whether a given string is palindrome or not.(ex. Malayalam)*/

#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[100];
	int length,i;

	gets(str1);
	length=strlen(str1);
	strcpy(str2,str1);
	strrev(str2);
	
	if(!strcmpi(str1,str2))
		printf("string is a palindrome");
	else
		printf("string is not a palindrome\n\n\n");
}
