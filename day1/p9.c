#include<stdio.h>
#include<ctype.h>
int main() {
    char let;
    printf("Enter the character: ");
    scanf("%s" ,&let);

    if (isdigit(let)){
        printf("The character is a digit.");
    }
    else if (isalpha(let)){
        printf("The character is an alphabet.");
    }
    else
    printf("The character is a symbol.");
}