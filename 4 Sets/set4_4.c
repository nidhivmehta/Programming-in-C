

#include <stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{ 
	char letter, x; 
	
	printf("enter the alphabet\n");
	scanf("%c", &letter);
	
	x=tolower(letter);
	switch(x)
	{
		case 'a':
				printf("Vowel");
			break;
		case 'e':
				printf("Vowel");
			break;
		case 'i':
				printf("Vowel");
			break;
		case 'o':
				printf("Vowel");
			break;
		case 'u':
				printf("Vowel");
			break;
		default:
				printf("Consonant");
	}
}
