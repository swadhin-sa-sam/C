#include <stdio.h>
int width;
int height;
int area ;
int perimeter;

int main(){
    width=5;
    height=7;

    perimeter=2*(height+width);
    area=width*height;

    printf("the area of reactange :%d\n",area);
    printf("the perimeter of reactange :%d\n",perimeter);

}