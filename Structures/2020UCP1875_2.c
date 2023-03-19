/*(b) Write a function to print the data of a student whose roll number is given.*/

#include <stdio.h>
struct
{
	char name[25];
	int roll_no;
	char dept[25];
	char course[25];
	int year;
}student[450];

void print(int x);
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

	int r_no;
	printf("Enter a roll number: ");
	scanf("%d",&r_no);
	print(r_no);
}

void print(int x)
{
	for(int i=0; i<3; i++)
	{
		if(x == student[i].roll_no)
		{
			printf("\nName of the student: %s",student[i].name);
			printf("\nDepartment: %s",student[i].dept);
			printf("\nCourse Opted: %s",student[i].course);
			printf("\nYear of joining: %d\n",student[i].year);
				break;
		}
	}
}
