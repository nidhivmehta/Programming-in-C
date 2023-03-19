#include<stdio.h>

int revNum(int a)
{
	int r_num=0;
	while(a!=0)
    {
        r_num = r_num * 10;
		r_num = a % 10 + r_num;
		a = a/10;
    }
    return r_num;
}

int main()
{
    int num, r;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    r= revNum(num);
    
    printf("Reverse no: %d", r);
    
    if(num==r)
        printf("\nInput Number %d & Reversed Number %d are equal", num, r);
    else
        printf("\nInput Number %d & Reversed Number %d are not equal", num, r);

	
   return 0;
}
