/*Display grade according to percentage using switch statement Per>= 90 – “A+” Per>= 80 – “A” Per>= 70 – “B” Per>= 60 – “B+” Per>= 50 – “C+” Per>= 40 – “C” Per< 40 – “F”*/

#include <stdio.h>
#include<math.h>
int main()
{ 
	float percent; //initializing all variables
	
	printf("enter percentage: \n");
	scanf("%f", &percent);
	
	int a=(int)percent;
	printf("\n");
	switch(a)
	{
		case 90 ... 100: 
			printf("A+"); 
				 break;
		case 80 ... 89: 
			printf("A");
				 break;
		case 70 ... 79: 
			printf("B+"); 
				 break;
		case 60 ... 69: 
			printf("B");
				 break;
		case 50 ... 59: 
			printf("C+"); 
				break;
		case 40 ... 49: 
			printf("C");
				 break;
		default: 
			printf("F");
				 break;
	}
}
