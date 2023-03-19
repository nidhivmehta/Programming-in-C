/*Create a structure to specify data on students given below: Roll
number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the collage.
(a) Write a function to print names of all students who joined in a particular year.*/

#include <stdio.h>
struct
{
	char name[25];
	int roll_no;
	char dept[25];
	char course[25];
	int year;
}student[450];

void same_year(int y);
void main()
{
	int n,i;
	for(i=0; i<3; i++)
	{
		printf("Enter details of %d student: \n",i+1);
		printf("\tName: ");
		scanf("%s",student[i].name);
		printf("\tRoll number: ");
		scanf("%d",&student[i].roll_no);
		printf("\tDepartment: ");
		scanf("%s",&student[i].dept);
		printf("\tCourse: ");
		scanf("%s",&student[i].course);
		printf("\tYear of joining: ");
		scanf("%d",&student[i].year);
		
		printf("\n");
	}
	
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	same_year(year);
}

void same_year(int y)
{
	printf("\nThe students who joined in %d are: \n",y);
	for(int i=0; i<3; i++)
	{
		if(y == student[i].year)
			printf("%s\n",student[i].name);
	}
}
