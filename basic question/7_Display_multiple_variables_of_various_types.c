#include <stdio.h>
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;
float eq1,eq2,eq3,eq4;
int eq5,eq7;

int main(){
eq1=a+c;
eq2=x+c;
eq3=dx+x;
eq4=a + x;
eq5=s + b;
eq7=s + c;
printf("%f\n %f\n %f\n %f\n %d\n %d\n", eq1, eq2, eq3, eq4, eq5,eq7);
return 0;
}