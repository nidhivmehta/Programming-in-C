#include<stdio.h>
#include<conio.h>

int area(int l, int b)
{
	int ar = l * b;
    
	printf("The area of rectangle: ");
    	return ar;
}

int peri(int l, int b)
{
	int pe= 2*(l + b);
	
	printf("\nThe perimeter of rectangle: ");
    	return pe;
	
}

int main()
{
    int length, breadth,a,p;

    printf("Enter the length and breadth of rectangle: ");
    scanf("%d%d", &length, &breadth);

   	a=area(length, breadth);
   	printf("%d",a);
   	p=peri(length, breadth);
   	printf("%d" ,p);
    
    if (a>p)
        printf("\nArea of rectangle is greater than it's perimeter");
    else
        printf("\nPerimeter of rectangle is greater than it's area");
}
