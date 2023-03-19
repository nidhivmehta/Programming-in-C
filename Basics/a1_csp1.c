//Program to display name in centre

#include<stdio.h>
#include <windows.h>
int main()
{
	COORD c;
	c.X=40;
	c.Y=10;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	
	printf("Nidhi Mehta");
	
}
