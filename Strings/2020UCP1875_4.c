/*Write a program to convert as string into toggle string. EX. HeLLo -> hEllO*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char str1[100];
	int length,i;
	
	gets(str1);
	length=strlen(str1);
	
	for(i=0;i<length;i++)
	{
		if(islower(str1[i]))
			str1[i]=toupper(str1[i]);
		else
			str1[i]=tolower(str1[i]);
	}
	printf("toggle string: %s",str1);
	
}
