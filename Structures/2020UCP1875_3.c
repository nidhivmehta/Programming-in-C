/*Create a structure to specify data of customers in a bank. The data to
be stored is: Account number, Name, Balance in account.
Assume maximum of 200 customers in the bank.

(a) Write a function to print the Account number and name of each customer with
balance below Rs. 100.*/

#include <stdio.h>
struct
{
	char name[25];
	int acc_no;
	int bal;
}customer[200];

void print()
{
	printf("The customers who have a balance less than Rs.100 are:");
	for(int i=0; i<3; i++)
	{
		if (customer[i].bal < 100)
		{
			printf("\nName of customer: %s",customer[i].name);
			printf("\nAccount number: %d",customer[i].acc_no);
			printf("\n");
		}
	}
}

void main()
{
	for(int i=0; i<3; i++)
	{
		printf("Enter details of %d customer.\n",i+1);
		printf("\tName: ");
		scanf("%s",customer[i].name);
		printf("\tAccount Number: ");
		scanf("%d",&customer[i].acc_no);
		printf("\tBalance: ");
		scanf("%d",&customer[i].bal);
		printf("\n");
	}
	
	print();
}
