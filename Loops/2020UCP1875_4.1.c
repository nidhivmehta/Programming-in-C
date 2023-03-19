#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, rem, temp = 0, count = 0 ;

    printf(" Input  an integer : ");
    scanf("%d", &n);

    num = n;
    
    while (num != 0)
    {
        num /= 10;
        ++count;
    }

    num = n;

    while (num != 0)
    {
        rem = num % 10;
        temp += pow(rem, count);
        num /= 10;
    }

    if(temp == n)
        printf(" %d is an Armstrong number.\n", n);
    else
        printf(" %d is not an Armstrong number.\n", n);

    return 0;
}

