#include <math.h>
#include <stdio.h>
int main() 
	{
		
		int a,b,c;
		
		printf("Enter values for a,b,c: ");
		scanf("%d%d%d", &a,&b,&c);
		
	    float discriminant, root1, root2, realPart, imagPart;
	
	    discriminant = pow(b,2)-4*a*c;
	
	    // condition for real and different roots
	    if (discriminant > 0) 
		{
	        root1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	        root2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	        printf("There are 2 roots");
    	}

   		// condition for real and equal roots
    	else if (discriminant == 0) 
		{
	        root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	        printf("There is 1 root");
    	}

   		// if roots are not real
   		else 
		{
	        printf("no roots");
    	}

    return 0;
} 

