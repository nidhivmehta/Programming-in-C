#include <stdio.h>
int main()
{
	int n, count=1;
	printf("Enter row: ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d ", count);
			count++;
		}
		printf("\n");
	}
}
