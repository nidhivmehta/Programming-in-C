#include<stdio.h>
int main()
{
    int n , values[100];
    printf("enter the value of n:");
    scanf("%d",&n);

    printf("values:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&values[i]);
    }
    printf("second half values are:\n");
    for (int i =(n+1)/2; i < n; i++)
    {
        printf("%d\n",values[i]);
    }


    return 0;
}
