#include<stdio.h>
int main(){
    int n = 0, inputNumbers[10] = {0}, ele = 0;
    puts("Enter the number of elements: ");
    scanf("%d", &n);
    puts("Enter the elements");
    for (int i = 0; i < n; i++){
        scanf("%d", &inputNumbers[i]);
    }
    printf("Enter the element to find the frequency: ");
    scanf("%d", &ele);
    int count = 0;
    for (int i = 0; i <= n; i++){
        if (inputNumbers[i] == ele){
            count++;
        }
    }
    printf("The frequency of %d is %d\n", ele, count);
    return 0;
}