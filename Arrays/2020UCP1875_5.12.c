#include <stdio.h>


int main()
{
    int num,k,greator=0,equal=0,smaller=0;

    printf("Enter a value of N: ");
    scanf("%d",&num);
    int arr[num];
 
    printf("Enter %d numbers with space between them:\n ",num);
    
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("The array elements are:\n");
    for(int i=0;i<num;i++){
       printf("%d ",arr[i]);
    }
    
    printf("\nEnter a number k: ");
    scanf("%d",&k);
    
    for (int i=0;i<num;i++)
    {   if(arr[i]>k)
        {
            greator++;
        }
        else if (arr[i]==k)
        {
            equal++;
        }
        else 
        {
            smaller++;
        }
        
    }
    
    
    printf("\nThe number of numbers\ngreater than %d is:%d\nsmaller than %d is:%d\nequal to %d is : %d",k,greator,k,smaller,k,equal);

    return 0;
}
