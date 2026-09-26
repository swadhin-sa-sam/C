#include <stdio.h>
float radius;
float area;
float perimeter;
int main(){
    printf("enter the radius :");
    scanf("%f",&radius);

    area=3.14*(radius*radius);
    perimeter=2*3.14*radius;
    printf("the area of circle :%f\n",area);
    printf("the perimeter of circle:%f\n",perimeter);

}