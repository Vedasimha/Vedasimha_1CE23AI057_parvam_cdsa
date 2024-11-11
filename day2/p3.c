#include<stdio.h>
int main() {
    int inputNumber = 0, remainderDigit = 0, sumOfDigits = 0;
    puts("Enter a number to find sum of it's digits.");
    scanf("%d", &inputNumber);
    int temp = inputNumber;
    while(inputNumber > 0){
        remainderDigit = inputNumber % 10;
        sumOfDigits += remainderDigit;
        inputNumber = inputNumber / 10;
    }
    printf("Sum of digits of %d is %d", temp, sumOfDigits);
    return 0;
}