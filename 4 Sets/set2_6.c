/*program to add an individual digit of 5 nos*/

#include<stdio.h>
int main()
{
    int num;
    int temp=0;
    int rem;
    printf(" Enter the number \n");
    scanf( " %d", &num);

    rem = num%10;
    temp= temp+rem;
    num = num/10;
    rem = num%10;
    temp= temp+rem;
    num = num/10;
    rem = num%10;
    temp= temp+rem;
    num = num/10;
    rem = num%10;
    temp= temp+rem;
    num = num/10;
    rem = num%10;
    temp= temp+rem;
    num = num/10;





    printf( " The sum is %d" , temp);

}



