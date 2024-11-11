#include<stdio.h>
int main() {
    int year;
    printf("Enter the year");
    scanf("%d", &year);
    if (year%4 == 0)
    printf("The given year is leap");
    else
    printf("The given year is not leap year");
    return 0;
}