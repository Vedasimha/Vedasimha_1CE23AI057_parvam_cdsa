#include <stdio.h>
#include <stdlib.h>

long long int findFactorial(short int num)
{
    if (num == 1 || num == 0)
        return 1;
    return num * findFactorial(num - 1);
}

long long int findFactorial1(short int num)
{
    if (num == 0 || num == 1)
        return 1;
    long long int factorialNum = 1;
    for (int i = 2; i <= num; i++)
        factorialNum = factorialNum * i;
    return factorialNum;
}

int main(int argCount, char *args[])
{
    short int inputNum = atoi(args[1]);
    long long int factorialNum = findFactorial(inputNum);
    printf("Factorial of %d is %lld", inputNum, factorialNum);
}