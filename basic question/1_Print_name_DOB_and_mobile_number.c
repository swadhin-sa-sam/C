#include <stdio.h>

int main() {
    char name[50];
    char dob[20];
    char number[15];

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your DOB (e.g. DD-MM-YYYY): ");
    scanf(" %s", dob);

    printf("Enter your mobile number: ");
    scanf(" %s", number);

    printf("\nName: %s\nDOB: %s\nMobile: %s\n", name, dob, number);
    return 0;
}