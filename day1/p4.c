#include<stdio.h>
int main() {
    char a;
    printf("Enter the character(Either Uppercase or Lowercase): ");
    scanf("%s", &a);
    if (a>='A' && a<= 'Z'){
        printf("Given character is uppercase");
    }
}