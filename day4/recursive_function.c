#include <stdio.h>
#include <stdlib.h>

int findFactorial(int num)
{
    if (num == 1 || num == 0)
        return 1;
    return num * findFactorial(num - 1);
}

int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    int factNumber = findFactorial(inputNumber);
    printf("Factorial of %d is %d", inputNumber, factNumber);
}