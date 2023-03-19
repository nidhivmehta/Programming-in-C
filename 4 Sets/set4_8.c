/*program that displays student information like Roll Number, Marks of any five subjects, total marks , percentage, and result pass or fail*/

#include <stdio.h>
#include<math.h>
int main()
{ 
	float a,sub1,sub2,sub3,sub4,sub5, total, percent; //initializing all variables

	printf("enter roll number\n");
	scanf("%f", &a);
	
	printf("enter marks of 5 subjects\n");
	scanf("%f%f%f%f%f", &sub1,&sub2,&sub3,&sub4,&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	percent=total/5;
	
	printf("\n\t\tSTUDENT DETAILS\n");
	printf("student roll number: %.2f",a);
	printf("\nThe marks in five subjects are %.2f,%.2f,%.2f,%.2f,%.2f",sub1,sub2,sub3,sub4,sub5);
	printf("\ntotal:%.2f\npercentage: %.2f\n",total,percent);
	
	if(percent>33)
		printf("PASS");
	else
		printf("FAIL"); 
}
