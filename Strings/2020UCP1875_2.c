/*Write a program to copy one string into another string. Note:- 1) with using strcpy( ) 2) without using strcpy( )*/

#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[100],str3[100];
	int length,i;
	
	gets(str1);
	length=strlen(str1);
	strcpy(str2,str1);
	
	for(i=0;i<length;i++)
	{
		str3[i]=str1[i];
	}
	str3[i]='\0';
	
	printf("string using strcpy: %s \n",str2);
	printf("string without using strcpy: %s \n",str3);
	
}
