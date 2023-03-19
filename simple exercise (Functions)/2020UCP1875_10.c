#include<stdio.h>
#include<math.h>

void cir(int a1, int b1, int rad, int a2, int b2)
{
	  //check for distance between point and center point of circle

    float pc = sqrt(pow(a2-a1, 2)+pow(b2-b1,2));

    if(pc>rad)
        printf("Point (%d,%d) lies outside the circle.", a2, b2);
    else if(pc<rad)
        printf("Point (%d,%d) lies inside the circle.", a2, b2);
    else if(pc==rad)
        printf("Point (%d,%d) lies on the boundary of circle.", a2, b2);
    else
        printf("Wrong Entry");
}
int main()
{
    int x1, y1, x2, y2, radius;

    printf("Enter the center co-ordinates of the circle: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("Enter the point co-ordinates: ");
    scanf("%d %d", &x2, &y2);

    cir(x1,y1,radius,x2,y2);

	return 0;
}
