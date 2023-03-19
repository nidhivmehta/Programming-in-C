#include <stdio.h>
int main()
{
	int i,j,row, col, count=1;
	
	printf("enter row no and col no:");
	scanf("%d%d", &row,&col);
	
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			printf("%d ", count);
			count++;
		}
		printf("\n");
	}
}
