/*program to find roots of a quadratic equation where a=3, b=8 & c=2 6.*/

#include <math.h>
#include <stdio.h>
int main() 
	{
		
		int a=3, b=8 , c=26;
	    float discriminant, root1, root2, realPart, imagPart;
	
	    discriminant = pow(b,2)-4*a*c;
	
	    // condition for real and different roots
	    if (discriminant > 0) 
		{
	        root1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	        root2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	        printf("root1 = %.2f and root2 = %.2f", root1, root2);
    	}

   		// condition for real and equal roots
    	else if (discriminant == 0) 
		{
	        root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	        printf("root1 = root2 = %.2f;", root1);
    	}

   		// if roots are not real
   		else 
		{
	        realPart = -b / (2 * a);
	        imagPart = sqrt(-discriminant) / (2 * a);
	        printf("root1 = %.2f + %.2fi and root2 = %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
    	}

    return 0;
} 

