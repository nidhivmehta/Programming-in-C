/*Write a program to which returns the sum of three maximum elements in the array using  pointers.
The value of elements in the array belongs to  real numbers.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array \n");
    scanf("%d", &n);
    int Arr[n];
    int i = 0;
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter value no. %d \n", i + 1);
        scanf("%d", &Arr[i]);
    }
    printf("\n");
    printf("The entered array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", Arr[i]);
    }
    printf("\n");
    int *p;
    int *q;
    int *r;

    p = &Arr[0];
    i = 0;
    int j = 0, k = 0;

    while (i < n)
    {
        if (Arr[i] > *p)
        {
            p = &Arr[i];
        }
        i++;
    }

    q = &Arr[0];
    while (j < n)
    {

        if (Arr[j] > *q && Arr[j] != *p)
        {

            q = &Arr[j];
        }
        j++;
    }

    r = &Arr[0];
    while (k < n)
    {
        if (Arr[k] > *r && Arr[k] != *p && Arr[k] != *q)
        {
            r = &Arr[k];
        }
        k++;
    }
    printf("\n");

    printf("The three largest no. of the array are %d, %d, %d \n", *p, *q, *r);
    printf("The sum of the three largest elements of the array is %d",*p+*q+*r);

    return 0;
}
