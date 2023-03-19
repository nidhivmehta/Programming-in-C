/*a function to find out the maximum out of three numbers.*/

#include<stdio.h>
#include<math.h>
int maxfnc(int x,int y,int z)
{ 
	if(x>y&&x>z)
		return x;
	else if(y>z)
		return y;
	else
		return z;
}

int main()
{
	int a,b,c,max;
	
	printf("enter a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	
	max=maxfnc(a,b,c);
	
	printf("maximum=%d",max);
}
