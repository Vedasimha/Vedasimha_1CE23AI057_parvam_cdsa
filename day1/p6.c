#include<stdio.h>
int main(){
    int age;
    printf("Age based voting eligibity.\n");
    printf("Enter the age of the person: ");
    scanf("%d", &age);

    if (age>=18)
    printf("The person is eligible for voitng.", &age);
    else
    printf("The person is not yet eligible for voting.");
}