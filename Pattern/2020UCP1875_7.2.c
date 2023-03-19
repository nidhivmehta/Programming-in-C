#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows :- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i+1;j++)
            printf(" ");
        if(i!=0)    
            printf("%d",i);
        else    
            printf("%d",1);
        for(int k=0;k<i;k++)
            printf("%d",0);
       // for(int k=i-1;k>0;k--)
           // printf("%d",0);
        if(i!=0)    
            printf("%d",i);    
        printf("\n");    
    }

    return 0;
}
