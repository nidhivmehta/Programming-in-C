#include<stdio.h>

int newNum(int a)
{
	int number, count=0, n=1, i, sum;
	number = a;

    //get the counter till then we have to run the loop

    while(number!=0)
    {
        number = number/10;
        count = count + 1;
    }

    for(i=1;i<count;i++)
    {
        n = n * 10;  //n = 10
        n = n + 1;   //n = 11
    }

    sum = a + n;
    
    return sum;
}

int main()
{
    int num;

    printf("Enter 5 digit number: ");
    scanf("%d", &num);

    printf("Output: %d", newNum(num));
}
