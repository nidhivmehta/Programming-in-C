#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eng,maths,sci,marks,avg;
    printf("Enter english marks:",eng);
    scanf("%d",&eng);
    printf("Enter maths marks:",maths);
    scanf("%d",&maths);
    printf("Enter science marks:",sci);
    scanf("%d",&sci);
    marks=eng+maths+sci;
    avg=marks/3;
    if(avg>=90 && avg<100){
        printf("grade is A");
    }
    else if(avg<90 && avg>=80){
        printf("grade is B");
    }
    else if(avg<80 && avg>=70){
        printf("grade is C");
    }
    else if(avg<70 && avg>=60){
        printf("grade is D");
    }
    else if(avg<60 && avg>=50){
        printf("grade is E");
    }
    else{
        printf("Invalid grade");
    }
}
