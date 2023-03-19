/*program to perform a given operation using bitwise operators on two values.*/

#include<stdio.h>
int main()
{
	int x, y, op, ans; //initializing all variables

	printf("enter 2 numbers"); //ask user to input
	scanf("%d %d",&x,&y);
	
	printf("\nEnter the desired number option\n1.X&Y\n2.X|Y\n3.X^Y\n4.X<<2\n5.Y>>2\n"); //ask user to input
	scanf("%d",&op);
	
	switch(op)
	{
		case 1: ans=x&y;
			break;
		case 2: ans=x|y;
			break;
		case 3: ans=pow(x,y);
			break;
		case 4: ans=x<<2;
			break;
		case 5: ans=y>>2;
			break;
		default: 
			printf("\ninvalid option, run again");
	}
	
	printf("\nThe answer after operating is %d",ans);
	
}
