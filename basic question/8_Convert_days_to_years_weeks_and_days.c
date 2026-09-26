#include <stdio.h>

int days;
int year;
int month;
int weeks;
int day;

int main(){
    printf("enter the nunber of days : ");
    scanf("%d",&days);
    year=days/365;
    weeks=(days%365)/7;
    day=(days%365)%7;
    printf("year:%d \n weeks:%d \n day:%d",year,weeks,day);
    return 0;
}