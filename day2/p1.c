#include<stdio.h>
int main() {
    int inputNumber[] = {0};
    puts("Enter a number to find the smallest digit in it.");
    scanf("%d", inputNumber);
    for(int i = 0; i!='/0';i++){
        if(inputNumber[i] < inputNumber[i+1]){
            printf("%d is smaller than %d",  inputNumber[i], inputNumber[i+1]);
        }
    }
}
