#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1< num2 && num1 < num3){
        printf("%d is smaller than the other two numbers.", num1);
    }
    else if (num2<num1 && num2<num3){
        printf("%d is smaller than the other two numbers.", num2);
    }
    else
    printf("%d is smaller than other two numbers.", num3);
}