#include<stdio.h>
int main() {
    int num1;
    int num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1<num2){
        printf("%d is smaller than %d", num1, num2);
    }
    else
    printf("%d is smaller than %d", num2, num1);
}