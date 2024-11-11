#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (sqrt(num) * sqrt(num) == num) {
        printf("Given number is a perfect square.", num);
    }
    return 0;
}