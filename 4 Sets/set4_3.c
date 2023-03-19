/*Add, Subtract, multiply, divide, module, and power two nos. using switch statement.*/

#include <stdio.h>
#include <math.h>
int main()
{ 
	int a , b, op; int ans; 
	
	printf("enter the values of a and b\n");
	scanf("%d%d", &a,&b);
	
	printf("press the operation number\n1.add\n2.subtract\n3.multiply\n4.divide\n5.modulus\n6.power\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1: ans=a+b;
				printf("\nThe answer after operating is %d", ans);
			break;
		case 2: ans=a-b;
				printf("\nThe answer after operating is %d", ans);
			break;
		case 3: ans=a*b;
				printf("\nThe answer after operating is %d", ans);
			break;
		case 4: ans=a/b;
				printf("\nThe answer after operating is %d", ans);
			break;
		case 5: ans=a%b;
				printf("\nThe answer after operating is %d", ans);
			break;
		case 6: ans= pow(a,b);
				printf("\nThe answer after operating is %d", ans);
			break;
		default: 
				printf("invalid option");
	}
}
