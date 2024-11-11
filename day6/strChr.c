//Program to implement strchr
#include<stdio.h>
char *strCpy(char *destination, const char *source)
{
    int i = 0;
    for (; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
    return destination;
}

int main(int argCount, char *args[]){
    char userString[] = "";
    strCpy(userString, args[1]);
    printf("String given by the user is %s", userString);
    printf("Enter the ");
}