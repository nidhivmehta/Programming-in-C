#include <stdio.h>

void sum(int a1, int a2, int a3)
{
    int s = a1 + a2 + a3; 
      
    if(s == 180 && a1 > 0 && a2 > 0 && a3 > 0) 
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
}

int main()
{
    int angle1, angle2, angle3;
    
    printf("Enter 3 angles of a triangle: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    
    sum(angle1, angle2, angle3);

    return 0;
}
