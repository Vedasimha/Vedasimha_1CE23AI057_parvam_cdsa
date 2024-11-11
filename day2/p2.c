#include<stdio.h>
int main(){
    int inputNumber = 0, count = 0;
    puts("Enter the number to find the number of Even digits in it.");
    scanf("%d", &inputNumber);
    int temp = inputNumber;
    while (inputNumber>0){
        int remainderDigit = inputNumber%10;
        inputNumber = inputNumber/10;
        if (remainderDigit%2==0)
        count++;
    }
    printf("The number of Even digits in the number %d is %d", temp, count);
}