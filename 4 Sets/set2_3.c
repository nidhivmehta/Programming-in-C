/* program to reverse given 4 digit no */

#include<stdio.h>
int main()
{
    int num;

    printf(" Enter the number you want to reverse \n");
    scanf("%d", &num);
    int temp=0;

    int rem;
    rem= num%10;
    temp= temp*10 + rem;
    num=num/10;
    rem= num%10;
    temp= temp*10 + rem;
    num=num/10;
    rem= num%10;
    temp= temp*10 + rem;
    num=num/10;
    rem= num%10;
    temp= temp*10 + rem;
    num=num/10;


    printf("%d",temp);
    return 0;

}
