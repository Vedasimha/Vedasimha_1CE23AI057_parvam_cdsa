#include<stdio.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x%2 == 0){
        printf("%d is even", x);
    }
}