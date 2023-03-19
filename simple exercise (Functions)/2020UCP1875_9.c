#include<stdio.h>
#include<math.h>

void stLine(int a1,int b1,int a2,int b2,int a3,int b3)
{
	//suppose we have three points a, b, c
    //then all these points fall on one straight line if and only if
    //ab + bc = ac (distance should be same)

    double ab = sqrt(pow(a2-a1,2)+pow(b2-b1,2));
    double bc = sqrt(pow(a3-a2,2)+pow(b3-b2,2));
    double ac = sqrt(pow(a3-a1,2)+pow(b3-b1,2));

    printf("ab: %f\t bc: %f\t ac: %f\n",ab, bc, ac);
    double abc = ab+bc;
    if(abc==ac)
    {
        printf("ab + bc = ac\n");
        printf("All the three points fall on one straight line.");
    }
    else
        printf("All the three points are not present on one straight line.");
        
}

int main()
{
    int x1, y1, x2, y2, x3, y3;

    printf("Enter the co-ordinates of first point (X1, Y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the co-ordinates of second point (X2, Y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the co-ordinates of third point (X3, Y3): ");
    scanf("%d %d", &x3, &y3);
        
    stLine(x1,y1,x2,y2,x3,y3);

return 0;
}
