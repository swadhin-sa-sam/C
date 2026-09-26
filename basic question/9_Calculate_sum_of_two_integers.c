#include <stdio.h>
int num1;
int num2;

int main(){
    printf("Enter the 1st number :");
    scanf("%d",&num1);
    printf("Enter the 2nd number :");
    scanf("%d",&num2);

    int sum =num1+num2;
    printf("the sum of :%d",sum);
    return 0;
}