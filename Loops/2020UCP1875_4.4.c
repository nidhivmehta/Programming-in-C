#include <stdio.h>
int main() 
{
	int num, flag=1;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	for(int i=2; i<num; i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
		printf("%d=Prime num", num);
	else
		printf("%d= Not Prime num", num);
}
  
  
