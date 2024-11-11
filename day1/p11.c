#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >=10 && num <=99){
        printf("The given number is 2 digit number.");
    }
}