/*rogram to find area of a circle*/

#include <stdio.h>   
#define PI 3.14
int main()   
{  
    float radius, area;  
    
    printf("Enter radius of circle\n");  
    scanf("%f", &radius);  
    
    area = PI * radius * radius;  
    
    printf("Area of circle : %.2f\n", area);  
  
    return 0;  
}   

